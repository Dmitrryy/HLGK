import site

site.addsitedir('../dependencies/Vulkan-Docs/scripts')
from reg import Registry
import sys
import os
import tempfile
import shutil
import templates

try:
    from pathlib import Path
except ImportError:
    from pathlib2 import Path


def write(*args, **kwargs):
    file = kwargs.pop('file', sys.stdout)
    end = kwargs.pop('end', '\n')
    file.write(' '.join(str(arg) for arg in args))
    file.write(end)


def reformatExtensionName(name_):
    name_len = len(name_)
    name_ = name_.capitalize()
    for i in range(0, name_len - 1):
        if name_[i] == '_':
            char = name_[i + 1].upper()
            name_ = name_[:i + 1] + char + name_[i + 2:]
    name_ = name_.replace("_", "")
    return name_


def getExtensionType(elem_):
    if elem_.get('type') == 'device':
        return 'Device'
    elif elem_.get('type') == 'instance':
        return 'Instance'
    return None


if __name__ == '__main__':

    # TODO сделать как аргументы
    reg_file_path = '../dependencies/Vulkan-Docs/xml/vk.xml'
    dir_path = {'cpp': '../../../../lib/Core/Vulkan/gen', 'header': '../../../../include/HLGK/Core/Vulkan/gen'}
    instance_fName = 'InstanceExt'
    device_fName = 'DeviceExt'
    header_ext = '.hpp'
    cpp_ext = '.cpp'

    # загрузка и парсинг
    reg = Registry()
    reg.emitFeatures = True
    reg.loadFile(reg_file_path)
    reg.parseTree()

    # временный файл, в который и будет записан хедер
    outFiles = {'Instance':
                    {'header': [instance_fName + header_ext,  # name
                                tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)]
                        , 'cpp': [instance_fName + cpp_ext,  # name
                                  tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)]},
                'Device':
                    {'header': [device_fName + header_ext,  # name
                                tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)]
                        , 'cpp': [device_fName + cpp_ext,  # name
                                  tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)]}
                }

    # шапка
    for t, n in outFiles.items():
        for h, f in n.items():
            if h == 'header':
                write('#pragma once\n\n'
                      '#include <vulkan/vulkan.h>\n'
                      '#include <memory>\n'
                      '#include <HLGK/Core/Vulkan/ExtensionBase.hpp>\n'
                      'namespace HLGK {\n', file=f[1])
            else:
                write('#include <HLGK/Core/Vulkan/gen/' + n['header'][0] + '>\n\n'
                                                                           'namespace HLGK {\n', file=f[1])

    # словарь, содержащий тела функций создания расширений (see sTmpExtensionMake & sTmpIfCase)
    IfCases = {'Device': '', 'Instance': ''}
    for (extName, ei) in sorted(reg.extdict.items(), key=lambda x: x[1].number if x[1].number is not None else '0'):
        extType = getExtensionType(ei.elem)
        if extType is None:
            write('WARNING: unknown extension type:', ei.elem.get('type'), "Name:", extName, file=sys.stderr)
            continue

        # Получаем список всех функций, определемых в расширении
        Functions = []
        for features in ei.elem.findall('require'):
            for c in features.findall('command'):
                Functions.append(c.get('name'))

        # Строки с определением указателей на функции как members (sTmpMember)
        # и создание тела инициализатора (sTmpInitMember)
        FunctionMembers = ''
        FunctionInit = ''
        for f in set(Functions):
            FunctionMembers += '\n' + templates.sTmpMember.substitute(name=f)
            FunctionInit += '\n' + templates.sTmpInitMember.substitute(name=f, type=extType)

        # определяем базовый класс
        BaseClassName = extType + 'ExtensionBase'
        cName = reformatExtensionName(extName)

        # Вставляем проверку, что данное расширение включено в vulkan.h
        write('#if defined({})\n'.format(extName), file=outFiles[extType]['header'][1])

        # emit Extension class
        write(templates.sTemplateExtensionClass.substitute(cName=cName,
                                                           name=extName,
                                                           BaseClass=BaseClassName,
                                                           Type=extType,
                                                           NameSpace='',
                                                           mods='override',
                                                           Functions=FunctionMembers), file=outFiles[extType]['header'][1])
        write('#endif //{}\n'.format(extName), file=outFiles[extType]['header'][1])

        # запись реализаций в cpp
        write('#if defined({})\n'.format(extName), file=outFiles[extType]['cpp'][1])

        write(templates.sTmpConstructor.substitute(cName=cName
                                                   , Type=extType
                                                   , BaseClass=BaseClassName), file=outFiles[extType]['cpp'][1])

        write(templates.sTmpInitProt.substitute(NameSpace=cName + '::'
                                                , Type=extType, mods=''), file=outFiles[extType]['cpp'][1])
        write(templates.sTmpInitBody.substitute(InitList=FunctionInit), file=outFiles[extType]['cpp'][1])

        write('#endif //{}\n'.format(extName), file=outFiles[extType]['cpp'][1])

        # fix it in make function
        IfCases[extType] += templates.sTmpIfCase.substitute(name=extName, cName=cName) + '\n'

    # emit make functions
    for t, cases in IfCases.items():
        write(templates.sTmpExtensionMakeProt.substitute(Type=t) + ';\n', file=outFiles[t]['header'][1])
        write(templates.sTmpExtensionMakeProt.substitute(Type=t), file=outFiles[t]['cpp'][1])
        write(templates.sTmpExtensionMakeBody.substitute(Type=t, ifCases=cases), file=outFiles[t]['cpp'][1])

    for t, n in outFiles.items():
        for h, f in n.items():
            write('\n}//namespace HLGK\n', file=f[1])
            f[1].close()

            if sys.platform == 'win32':
                directory = Path(dir_path[h])
                if not Path.exists(directory):
                    os.makedirs(directory)

            shutil.copy(f[1].name, dir_path[h] + '/' + f[0])
            os.remove(f[1].name)

            
