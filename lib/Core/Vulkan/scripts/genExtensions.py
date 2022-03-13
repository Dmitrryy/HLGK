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
    dir_path_headers = '../../../../include/HLGK/Core/Vulkan/gen'
    dir_path_cpp = '../../../../lib/Core/Vulkan/gen'
    header_name = 'extensions.hpp'
    cpp_name = 'extensions.cpp'

    # загрузка и парсинг
    reg = Registry()
    reg.emitFeatures = True
    reg.loadFile(reg_file_path)
    reg.parseTree()

    # временный файл, в который и будет записан хедер
    headerFile = tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)
    cppFile = tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', newline='\n', delete=False)

    # шапка
    write('#pragma once\n\n'
          '#include <vulkan/vulkan.h>\n'
          '#include <memory>\n'
          '#include <HLGK/Core/Vulkan/ExtensionBase.hpp>\n'
          'namespace HLGK {\n', file=headerFile)

    write('#include <HLGK/Core/Vulkan/gen/' + header_name + '>\n\n'
          'namespace HLGK {\n', file=cppFile)

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
        write('#if defined({})\n'.format(extName), file=headerFile)

        # emit Extension class
        write(templates.sTemplateExtensionClass.substitute(cName=cName,
                                                           name=extName,
                                                           BaseClass=BaseClassName,
                                                           Type=extType,
                                                           NameSpace='',
                                                           mods='override',
                                                           Functions=FunctionMembers), file=headerFile)
        write('#endif //{}\n'.format(extName), file=headerFile)

        # запись реализаций в cpp
        write('#if defined({})\n'.format(extName), file=cppFile)

        write(templates.sTmpConstructor.substitute(cName=cName
                                                   , Type=extType
                                                   , BaseClass=BaseClassName), file=cppFile)

        write(templates.sTmpInitProt.substitute(NameSpace=cName + '::'
                                                , Type=extType, mods=''), file=cppFile)
        write(templates.sTmpInitBody.substitute(InitList=FunctionInit), file=cppFile)

        write('#endif //{}\n'.format(extName), file=cppFile)

        # fix it in make function
        IfCases[extType] += templates.sTmpIfCase.substitute(name=extName, cName=cName) + '\n'

    # emit make functions
    for f in IfCases.items():
        write(templates.sTmpExtensionMakeProt.substitute(Type=f[0]) + ';\n', file=headerFile)
        write(templates.sTmpExtensionMakeProt.substitute(Type=f[0]), file=cppFile)
        write(templates.sTmpExtensionMakeBody.substitute(Type=f[0], ifCases=f[1]), file=cppFile)

    write('\n}//namespace HLGK\n', file=headerFile)
    write('\n}//namespace HLGK\n', file=cppFile)
    headerFile.close()
    cppFile.close()

    if sys.platform == 'win32':
        directory_h = Path(dir_path_headers)
        if not Path.exists(directory_h):
            os.makedirs(directory_h)
        directory_cpp = Path(dir_path_cpp)
        if not Path.exists(directory_cpp):
            os.makedirs(directory_cpp)

        shutil.copy(headerFile.name, dir_path_headers + '/' + header_name)
        shutil.copy(cppFile.name, dir_path_cpp + '/' + cpp_name)

        os.remove(headerFile.name)
        os.remove(cppFile.name)
