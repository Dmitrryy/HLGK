/****************************************************************************************
*
*   Instance.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#include <vulkan/vulkan.h>

#include <HLGK/Window/IWindow.hpp>
#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>

#include <vector>
#include <string>
#include <functional>
#include <map>
#include <set>

namespace HLGK
{


    class Instance final {
        VkInstance m_instance;

    public:
        Instance(const VkApplicationInfo &appInfo
                , const std::vector< std::string > &extensions = {}
                , const std::vector< std::string > &layers = {}
                , const VkDebugUtilsMessengerCreateInfoEXT &DUMCI = {});

        ~Instance() {
            vkDestroyInstance(m_instance, nullptr);
        }

    public:
        // TODO: через функтор возможна утечка указателя на m_instance.
        // Для создани поверхности нужны дискрипторы окна(платформа зависимо) и знание оконной системы.
        // TODO: Surface должен быть разрушен до вызова деструктора instance
        VkSurfaceKHR createSurface(std::function<VkSurfaceKHR (VkInstance)> surfaceCreator) const;
        std::vector< PhysicalDevice > getPhysicalDevices() const;

        inline PFN_vkVoidFunction getProcAddr(const std::string &name) const {
            return vkGetInstanceProcAddr(m_instance, name.c_str());
        }

        LogicalDevice createLogicalDevice(const PhysicalDevice &PD, VkDeviceCreateInfo &info) const;
    }; // class Instance

} // namespace HLGK