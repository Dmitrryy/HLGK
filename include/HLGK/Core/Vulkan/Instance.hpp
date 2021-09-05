/****************************************************************************************
*
*   Instance.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once


#define VK_USE_PLATFORM_WIN32_KHR
#include <vulkan/vulkan.hpp>

#include <HLGK/Window/IWindow.hpp>
#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>

#include <vector>
#include <string>

namespace HLGK
{

    class Instance final {

        vk::DispatchLoaderDynamic m_dld;
        vk::Instance m_instance;

    public:
        Instance(const vk::ApplicationInfo &appInfo
                , const std::vector< std::string > &extensions = {}
                , const std::vector< std::string > &layers = {}
                , const vk::DebugUtilsMessengerCreateInfoEXT &DUMCI = {});

    public:
        vk::SurfaceKHR createSurface(const IWindow& window) const;
        std::vector< PhysicalDevice > getPhysicalDevices() const;
    }; // class Instance

} // namespace HLGK