//
// Created by dadro on 01.09.2021.
//

#include <HLGK/Core/Factory.hpp>
#include <algorithm>

namespace HLGK
{

    Factory::Factory(const vk::ApplicationInfo &appInfo
                     , const std::vector< std::string > &extensions /*= {}*/
                     , const std::vector< std::string > &layers /*= {}*/
                     , const vk::DebugUtilsMessengerCreateInfoEXT &DUMCI /*= {}*/)
                     : m_dld(vkGetInstanceProcAddr)
    {
        std::vector< const char * > extC, layersC;
        std::transform(extensions.begin(), extensions.end()
                       , std::back_inserter(extC)
                       , [](const auto& ext) { return ext.c_str(); });
        std::transform(layers.begin(), layers.end()
                , std::back_inserter(layersC)
                , [](const auto& lay) { return lay.c_str(); });

        vk::InstanceCreateInfo instInfo;
        instInfo.pApplicationInfo = &appInfo;
        instInfo.enabledExtensionCount = extC.size();
        instInfo.ppEnabledExtensionNames = extC.data();
        instInfo.enabledLayerCount = layersC.size();
        instInfo.ppEnabledLayerNames = layersC.data();
        if (DUMCI.pfnUserCallback) {
            instInfo.pNext = &DUMCI;
        }
        m_instance.
        m_instance = vk::createInstance(instInfo, nullptr, m_dld);
        m_dld.init(m_instance);
    }

    std::vector< vk::PhysicalDevice >
    Factory::getPhysicalDevices() const
    {
        return m_instance.enumeratePhysicalDevices(m_dld);
    }


    vk::SurfaceKHR Factory::createSurface(const IWindow &window) const
    {
        vk::SurfaceKHR surface;
        //TODO other platforms
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
#elif defined( VK_USE_PLATFORM_IOS_MVK )
#elif defined( VK_USE_PLATFORM_MACOS_MVK )
#elif defined( VK_USE_PLATFORM_MIR_KHR )
#elif defined( VK_USE_PLATFORM_VI_NN )
#elif defined( VK_USE_PLATFORM_WAYLAND_KHR )
#elif defined( VK_USE_PLATFORM_WIN32_KHR )
        vk::Win32SurfaceCreateInfoKHR info;
        info.hinstance = GetModuleHandleA(NULL);
        info.hwnd = window.getHWND();
        surface = m_instance.createWin32SurfaceKHR(info, nullptr, m_dld);
#elif defined( VK_USE_PLATFORM_XCB_KHR )
#elif defined( VK_USE_PLATFORM_XLIB_KHR )
#elif defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
#endif
        return surface;
    }
} // namespace HLGK