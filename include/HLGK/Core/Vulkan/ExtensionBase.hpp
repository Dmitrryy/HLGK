//
// Created by dadro on 06.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <string>

namespace HLGK {

    class ExtensionBase {

    public:
        virtual std::string getName() const = 0;

        virtual ~ExtensionBase() = 0;
    };

    class InstanceExtensionBase : public ExtensionBase {
        VkInstance m_instance = {};
    public:
        template<class FuncT>
        FuncT getProcAddr(const std::string &name) const {
             return vkGetInstanceProcAddr(m_instance, name.c_str());
        }

    };

}//namspace HLGK