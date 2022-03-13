from string import Template

sTmpConstructor = Template('    ${cName}::$cName(Vk$Type handler)\n'
                           '        : ${BaseClass}(handler) {\n'
                           '        init(handler);\n'
                           '    }\n')

sTmpInitProt = Template('    void ${NameSpace}init(Vk$Type handler) ${mods}')
sTmpInitBody = Template('    {\n'
                        '        if (!handler) { return; }\n'
                        '        m_handler = handler;\n'
                        '${InitList}\n'
                        '    }\n')

sTmpMember = Template('    PFN_${name} $name = {};')
sTmpInitMember = Template('        $name = getProcAddr<PFN_${name}>("${name}");')


sTemplateExtensionClass = Template('class $cName final : public $BaseClass { \n'
                                   'public:\n'
                                   '    $cName() = default;\n'
                                   '    $cName(Vk$Type handler);\n'
                                   '\n'
                                   '    std::string name() const override { return "${name}"; }\n' 
                                   '    static std::string str() { return "${name}"; }\n'
                                   + sTmpInitProt.safe_substitute() + ';\n'
                                   'public:'
                                   '${Functions}\n'
                                   '};//class $cName\n')


sTmpExtensionMakeProt = Template('std::unique_ptr<${Type}ExtensionBase> make${Type}Extension('
                                 'const std::string &name, Vk${Type} handle)')
sTmpExtensionMakeBody = Template('{\n'
                                 '${ifCases}\n'
                                 '    return nullptr;\n'
                                 '}\n')
sTmpIfCase = Template('    #if defined(${name})\n'
                      '    if("${name}" == name) { return std::make_unique<${cName}>(handle); }\n'
                      '    #endif')