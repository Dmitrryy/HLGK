//
// Created by danil on 23.02.2022.
//

#pragma once

#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    LogicalDevice::LogicalDevice(VkInstance instance, VkPhysicalDevice device, VkDeviceCreateInfo createInfo)
        : m_physicalDevice(device) {
        //VK_CHECK_RESULT(vkCreateDevice());
    }

}// namespace HLGK