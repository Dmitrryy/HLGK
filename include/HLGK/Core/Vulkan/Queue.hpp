//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>

namespace HLGK {

    class LogicalDevice;

    class Queue final {
        VkQueue m_queue = {};
        const LogicalDevice &m_rDevice;

    public:
        const uint32_t familyIndex = {};
        const uint32_t queueIndex = {};
        const float priority = {};
        const VkQueueFlags flags = {};

    protected:
        friend LogicalDevice;
        Queue(const LogicalDevice &device, uint32_t familyIndex, uint32_t queueIndex, float priority);

    public:

    };// class Queue

}// namespace HLGK