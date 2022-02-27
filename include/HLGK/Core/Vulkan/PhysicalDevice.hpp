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

#include <vulkan/vulkan.h>

#include <vector>
#include <string>
#include <optional>

namespace HLGK
{
    class Instance;

    class PhysicalDevice final
    {
        VkPhysicalDevice m_vkPhysicalDevice = {};
        // Добавлено из предположения, что для разных instance могут
        // быть разные физические девайсы. И для функций получения свойств
        // разные указатели
        // TODO: проверить
        const Instance &m_vkInstance;

        // Класс может создать только Instance.
        // TODO: норм ли такой дизайн
        friend Instance;

    protected:
        PhysicalDevice() = default;
        PhysicalDevice(const VkPhysicalDevice &device, const Instance &instance)
                : m_vkPhysicalDevice(device)
                , m_vkInstance(instance) {}

    public:
        struct Properties
        {
            VkPhysicalDeviceProperties deviceProperties; //once
            VkPhysicalDeviceFeatures features;
            VkPhysicalDeviceMemoryProperties memoryProperties;
            std::vector< VkLayerProperties > layerProperties; //once
            std::vector< VkExtensionProperties > extensionProperties; //for layer name

            std::vector< VkQueueFamilyProperties > queueFamilyProperties; //once
            //TODO: where address of function enumerateQueueFamilyPerformanceQueryCountersKHR
            //std::vector< std::pair< std::vector< vk::PerformanceCounterKHR >, std::vector< vk::PerformanceCounterDescriptionKHR > > >
            //        queueFamilyPerformanceQueryCounters;
        };
        struct SurfaceProperties
        {
            std::vector< VkBool32 > surfaceSupport;
            std::vector< VkSurfaceFormatKHR > formats;
            VkSurfaceCapabilitiesKHR capabilities;
            std::vector< VkPresentModeKHR > presentModes;
        };

    public:
        Properties getProperties(const std::string &layerName = {}) const;
        SurfaceProperties getSurfaceProperties(const VkSurfaceKHR &surface) const;
        ILogicalDevice* createLogicalDevice(const VkDeviceCreateInfo &info); //TODO implement
    };

} // namespace HLGK