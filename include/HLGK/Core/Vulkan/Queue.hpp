//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class CommandBuffer;
    class Semaphore;
    class Fence;
    class SwapChain;

    class Queue final {
        VkQueue m_queue = {};
        const LogicalDevice *m_rDevice;

    public:
        const uint32_t familyIndex = {};
        const uint32_t queueIndex = {};
        const float priority = {};
        const VkQueueFlags flags = {};

    protected:
        friend LogicalDevice;
        Queue(const LogicalDevice &device, uint32_t familyIndex, uint32_t queueIndex, float priority);

    public:
        VkQueue get() const { return m_queue; }

        void submit(const std::vector< CommandBuffer > &commandBuffers,
                    const std::vector< Semaphore *> &waitSemaphores,
                    const std::vector< VkPipelineStageFlags > &waitStages,
                    const std::vector< Semaphore *> &signalSemaphore,
                    const Fence &fence);

        void present(const std::vector< std::pair< SwapChain *, uint32_t > > &swapChainsWithImageID,
                     const std::vector< Semaphore *> &waitSemaphores);
    };// class Queue

}// namespace HLGK