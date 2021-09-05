/****************************************************************************************
*
*   PhysicalDevice.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#include <HLGK/Core/ILogicalDevice.hpp>

//TODO: replace vk:: objects with wrappers and remove include vulkan library
#include <vulkan/vulkan.hpp>

#include <optional>

namespace HLGK
{
    class Instance;

    class PhysicalDevice final
    {
        vk::PhysicalDevice m_vkPhysicalDevice;
        vk::DispatchLoaderDynamic m_dld;

        friend Instance;

    public:
        PhysicalDevice() = default;
        PhysicalDevice(const vk::PhysicalDevice &device, const vk::DispatchLoaderDynamic &dld)
                : m_vkPhysicalDevice(device)
                , m_dld(dld) {}

        struct Properties
        {
            vk::PhysicalDeviceProperties deviceProperties; //once
            vk::PhysicalDeviceFeatures features;
            vk::PhysicalDeviceMemoryProperties memoryProperties;
            std::vector< vk::LayerProperties > layerProperties; //once
            std::vector< vk::ExtensionProperties > extensionProperties; //for layer name

            std::vector< vk::QueueFamilyProperties > queueFamilyProperties; //once
            //TODO: where address of function enumerateQueueFamilyPerformanceQueryCountersKHR
            //std::vector< std::pair< std::vector< vk::PerformanceCounterKHR >, std::vector< vk::PerformanceCounterDescriptionKHR > > >
            //        queueFamilyPerformanceQueryCounters;
        };
        struct SurfaceProperties
        {
            std::vector< vk::Bool32 > surfaceSupport;
            std::vector< vk::SurfaceFormatKHR > formats;
            vk::SurfaceCapabilitiesKHR capabilities;
            std::vector< vk::PresentModeKHR > presentModes;
        };

    public:
        Properties getProperties(const std::string &layerName = {}) const;
        SurfaceProperties getSurfaceProperties(const vk::SurfaceKHR &surface) const;
        ILogicalDevice* createLogicalDevice(const vk::DeviceCreateInfo &info); //TODO implement
    };

} // namespace HLGK