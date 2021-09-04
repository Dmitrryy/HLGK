#pragma once
//
// Created by dadro on 01.09.2021.
//

#include <HLGK/Window/IWindow.hpp>

#define VK_USE_PLATFORM_WIN32_KHR
#include <vulkan/vulkan.hpp>
#include <vector>
#include <string>

namespace HLGK
{

    class Factory final {

        vk::DispatchLoaderDynamic m_dld;
        vk::Instance m_instance;

    public:
        Factory(const vk::ApplicationInfo &appInfo
                , const std::vector< std::string > &extensions = {}
                , const std::vector< std::string > &layers = {}
                , const vk::DebugUtilsMessengerCreateInfoEXT &DUMCI = {});

    public:
        std::vector< vk::PhysicalDevice > getPhysicalDevices() const;

        vk::SurfaceKHR createSurface(const IWindow& window) const;
    }; // class Factory

} // namespace HLGK