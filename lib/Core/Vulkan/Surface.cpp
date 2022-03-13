//
// Created by dadro on 27.02.2022.
//

#include <HLGK/Core/Vulkan/Surface.hpp>
#include <HLGK/Core/Vulkan/Instance.hpp>

namespace HLGK {

    Surface::Surface(VkSurfaceKHR surface, const Instance &instance)
    : m_vkSurface(surface)
    , m_extension(instance.getExtension<VkKhrSurface>(VkKhrSurface::str()))
    , m_instance(instance) {}

    Surface::~Surface() {
        m_instance.callProcAddr(m_extension->vkDestroySurfaceKHR, m_vkSurface, nullptr);
        //m_instance.callProcAddrName<PFN_vkDestroySurfaceKHR>(
         //       "vkDestroySurfaceKHR", m_vkSurface, nullptr);
    }


}// namespace HLGK
