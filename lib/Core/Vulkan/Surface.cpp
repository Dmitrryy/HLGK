//
// Created by dadro on 27.02.2022.
//

#include <HLGK/Core/Vulkan/Surface.hpp>
#include <HLGK/Core/Vulkan/Instance.hpp>
#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    Surface::Surface(VkSurfaceKHR surface, const Instance &instance)
    : m_vkSurface(surface)
    , m_extension(instance.getExtension<VkKhrSurface>())
    , m_instance(instance) {}

    Surface::~Surface() {
        m_instance.callProcAddr(m_extension->vkDestroySurfaceKHR, m_vkSurface, nullptr);
    }

    Surface::Properties Surface::getProperties(const PhysicalDevice &physicalDevice) const
    {
        Properties result;

        unsigned queueCount = 0;
        callInstanceProcAddr(m_instance, vkGetPhysicalDeviceQueueFamilyProperties, physicalDevice.get(), &queueCount, nullptr);

        result.surfaceSupport.resize(queueCount);
        for(size_t i = 0; i < queueCount; ++i) {
            VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfaceSupportKHR(
                    physicalDevice.get(), i, m_vkSurface, &result.surfaceSupport.at(i)));
        }

        unsigned size = 0;
        VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice.get(), m_vkSurface, &size, nullptr));
        result.formats.resize(size);
        VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice.get(), m_vkSurface, &size, result.formats.data()));

        VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice.get(), m_vkSurface, &size, nullptr));
        result.presentModes.resize(size);
        VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfacePresentModesKHR(
                physicalDevice.get(), m_vkSurface, &size, result.presentModes.data()));

        VK_CHECK_RESULT(m_extension->vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice.get(), m_vkSurface, &result.capabilities));

        return result;
    }

}// namespace HLGK
