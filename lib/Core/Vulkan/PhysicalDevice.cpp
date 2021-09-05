/****************************************************************************************
*
*   PhysicalDevice.cpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#include <HLGK/Core/Vulkan/PhysicalDevice.hpp>


namespace HLGK
{

    PhysicalDevice::Properties
    PhysicalDevice::getProperties(const std::string &layerName /*= {}*/) const
    {
        Properties result;

        result.deviceProperties = m_vkPhysicalDevice.getProperties(m_dld);
        result.layerProperties = m_vkPhysicalDevice.enumerateDeviceLayerProperties(m_dld);
        result.extensionProperties = m_vkPhysicalDevice.enumerateDeviceExtensionProperties(layerName, m_dld);
        result.queueFamilyProperties = m_vkPhysicalDevice.getQueueFamilyProperties(m_dld);
        result.features = m_vkPhysicalDevice.getFeatures(m_dld);
        result.memoryProperties = m_vkPhysicalDevice.getMemoryProperties(m_dld);
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
    PhysicalDevice::getSurfaceProperties(const vk::SurfaceKHR &surface) const
    {
        SurfaceProperties result;

        auto&& queueFamilyProperties = m_vkPhysicalDevice.getQueueFamilyProperties(m_dld);
        auto&& queueCount = queueFamilyProperties.size();
        result.surfaceSupport.resize(queueCount);
        for(size_t i = 0; i < queueCount; ++i) {
            result.surfaceSupport.at(i) = m_vkPhysicalDevice.getSurfaceSupportKHR(i, surface, m_dld);
        }

        result.formats = m_vkPhysicalDevice.getSurfaceFormatsKHR(surface, m_dld);
        result.presentModes = m_vkPhysicalDevice.getSurfacePresentModesKHR(surface, m_dld);
        result.capabilities = m_vkPhysicalDevice.getSurfaceCapabilitiesKHR(surface, m_dld);

        return result;
    }

} // namespace HLGK