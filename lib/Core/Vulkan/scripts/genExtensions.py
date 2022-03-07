import site
site.addsitedir('../dependencies/Vulkan-Docs/scripts')

import xml.etree.ElementTree as etree

from cgenerator import CGeneratorOptions, COutputGenerator

from reg import Registry
from apiconventions import APIConventions

import sys


if __name__ == '__main__':

    conventions = APIConventions()
    defaultAPIName = conventions.xml_api_name

    genOpts = CGeneratorOptions(
        conventions=conventions,
        filename='my_core.h',
        directory='./gen',
        genpath=None,
        apiname=defaultAPIName,
        profile=None,
        #versions=featuresPat,
        #emitversions=featuresPat,
        #defaultExtensions=defaultExtensions,
        #addExtensions=addExtensionsPat,
        #removeExtensions=removeExtensionsPat,
        emitExtensions=True,
        #prefixText=prefixStrings + vkPrefixStrings,
        genFuncPointers=True,
        #protectFile=protectFile,
        protectFile=True,
        protectFeature=True,
        protectProto='#ifndef',
        protectProtoStr='VK_NO_PROTOTYPES',
        apicall='VKAPI_ATTR ',
        apientry='VKAPI_CALL ',
        apientryp='VKAPI_PTR *',
        alignFuncParam=48,
        misracstyle=True,
        misracppstyle=False
    )

    reg = Registry(gen=COutputGenerator(), genOpts=genOpts)
    reg.emitFeatures = True
    reg.loadFile('../dependencies/Vulkan-Docs/xml/vk.xml')
    reg.parseTree()

    i = 0
    feature = []
    for (extName, ei) in sorted(reg.extdict.items(), key=lambda x: x[1].number if x[1].number is not None else '0'):
        # для теста выбираю первое попавшееся расширение
        if i == 0:
            ei.emit = True
            feature = ei
        i += 1

    # для генерации нужно отметить как тебуемое
    reg.requireFeatures(feature.elem, feature.name, None, None)


    reg.gen.beginFile(reg.genOpts)
    feature.required = True
    reg.gen.beginFeature(feature.elem, feature.emit)
    reg.generateRequiredInterface(feature.elem)
    reg.gen.endFeature()
    reg.gen.endFile()