/****************************************************************************************
*
*   PhysicalDevice.cpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK
{

    PhysicalDevice::Properties
    PhysicalDevice::getProperties(const std::string &layerName /*= {}*/) const
    {
        Properties result;

        // в оболочке хронос логика получения адрксов функций вынесена в Dispatch Loader
        auto* propFunc = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties>(
                vkGetInstanceProcAddr(m_vkInstance, "vkGetPhysicalDeviceProperties"));
        propFunc(m_vkPhysicalDevice, &result.deviceProperties);

        auto* layerPropFunc = reinterpret_cast<PFN_vkEnumerateDeviceLayerProperties>(
                vkGetInstanceProcAddr(m_vkInstance, "vkEnumerateDeviceLayerProperties"));
        unsigned size = 0;
        VK_CHECK_RESULT(layerPropFunc(m_vkPhysicalDevice, &size, nullptr));
        result.layerProperties.resize(size);
        VK_CHECK_RESULT(layerPropFunc(m_vkPhysicalDevice, &size, result.layerProperties.data()));

        // использовать vkGetInstanceProcAddr быстрее
        // TODO: Проверить на практике, заменив вызовы ниже по примеру выше
        VK_CHECK_RESULT(vkEnumerateDeviceExtensionProperties(m_vkPhysicalDevice, layerName.c_str(), &size, nullptr));
        result.extensionProperties.resize(size);
        VK_CHECK_RESULT(vkEnumerateDeviceExtensionProperties(
                m_vkPhysicalDevice, layerName.c_str(), &size, result.extensionProperties.data()));

        vkGetPhysicalDeviceQueueFamilyProperties(m_vkPhysicalDevice, &size, nullptr);
        result.queueFamilyProperties.resize(size);
        vkGetPhysicalDeviceQueueFamilyProperties(m_vkPhysicalDevice, &size, result.queueFamilyProperties.data());

        vkGetPhysicalDeviceFeatures(m_vkPhysicalDevice, &result.features);
        // vkGetPhysicalDeviceMemoryProperties2KHR может вернуть расширенную информацию в pNext.
        vkGetPhysicalDeviceMemoryProperties(m_vkPhysicalDevice, &result.memoryProperties);

        auto&& queueCount = result.queueFamilyProperties.size();
        //result.queueFamilyPerformanceQueryCounters.resize(queueCount);
        //for(size_t i = 0; i < queueCount; ++i) {
            //TODO where address for this function????
            //result.queueFamilyPerformanceQueryCounters.at(i)
            //        = m_vkPhysicalDevice.enumerateQueueFamilyPerformanceQueryCountersKHR(i, m_dld);
        //}
        return result;
    }

    PhysicalDevice::SurfaceProperties
    PhysicalDevice::getSurfaceProperties(const VkSurfaceKHR &surface) const
    {
        SurfaceProperties result;

        unsigned queueCount = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(m_vkPhysicalDevice, &queueCount, nullptr);

        result.surfaceSupport.resize(queueCount);
        for(size_t i = 0; i < queueCount; ++i) {
            VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceSupportKHR(
                    m_vkPhysicalDevice, i, surface, &result.surfaceSupport.at(i)));
        }

        unsigned size = 0;
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceFormatsKHR(m_vkPhysicalDevice, surface, &size, nullptr));
        result.formats.resize(size);
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceFormatsKHR(m_vkPhysicalDevice, surface, &size, result.formats.data()));

        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfacePresentModesKHR(m_vkPhysicalDevice, surface, &size, nullptr));
        result.presentModes.resize(size);
        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfacePresentModesKHR(
                m_vkPhysicalDevice, surface, &size, result.presentModes.data()));

        VK_CHECK_RESULT(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(m_vkPhysicalDevice, surface, &result.capabilities));

        return result;
    }

} // namespace HLGK