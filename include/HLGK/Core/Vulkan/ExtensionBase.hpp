//
// Created by dadro on 06.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <string>

namespace HLGK {

    class InstanceExtensionBase {
    protected:
        InstanceExtensionBase() = default;
        InstanceExtensionBase(VkInstance handler)
            : m_handler(handler) {}

        template<class FuncT>
        FuncT getProcAddr(const std::string &name) const {
             return reinterpret_cast<FuncT>(vkGetInstanceProcAddr(m_handler, name.c_str()));
        }

        VkInstance m_handler = {};
    public:
        virtual std::string name() const = 0;
        virtual void init(VkInstance) = 0;
        virtual ~InstanceExtensionBase() = default;
    };

    class DeviceExtensionBase {
    protected:
        DeviceExtensionBase() = default;
        DeviceExtensionBase(VkDevice handler)
                : m_handler(handler) {}

        template<class FuncT>
        FuncT getProcAddr(const std::string &name) const {
            return reinterpret_cast<FuncT>(vkGetDeviceProcAddr(m_handler, name.c_str()));
        }

        VkDevice m_handler = {};
    public:
        virtual std::string name() const = 0;
        virtual void init(VkDevice) = 0;
        virtual ~DeviceExtensionBase() = default;
    };

}//namspace HLGK