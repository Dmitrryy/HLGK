//
// Created by dadro on 27.02.2022.
//

#include <HLGK/Core/Vulkan/Surface.hpp>
#include <HLGK/Core/Vulkan/Instance.hpp>

namespace HLGK {

    Surface::~Surface() {
        m_instance.callProcAddrName<PFN_vkDestroySurfaceKHR>(
                "vkDestroySurfaceKHR", m_vkSurface, nullptr);
    }

}// namespace HLGK
