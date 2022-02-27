/****************************************************************************************
*
*   LogicalDevice.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once


#include <vulkan/vulkan.h>

#include <HLGK/Core/Allocators/IAllocator.hpp>
#include <string>

namespace HLGK
{
    class Instance;

    class LogicalDevice final : public IAllocator
    {
        VkPhysicalDevice m_physicalDevice;
        VkDevice m_device;

        // Класс может создать только Instance.
        // TODO: норм ли такой дизайн
        friend Instance;

    public:
        LogicalDevice(VkInstance instance, VkPhysicalDevice device, VkDeviceCreateInfo createInfo);

        LogicalDevice(const LogicalDevice&) = delete;
        LogicalDevice(LogicalDevice&&) = delete;
        LogicalDevice &operator=(const LogicalDevice&) = delete;
        LogicalDevice &operator=(LogicalDevice&&) = delete;

        ~LogicalDevice();

    public:
        inline PFN_vkVoidFunction getProcAddr(const std::string &name) const {
            return vkGetDeviceProcAddr(m_device, name.c_str());
        }


        //TODO implement
    };

} // namespace HLGK