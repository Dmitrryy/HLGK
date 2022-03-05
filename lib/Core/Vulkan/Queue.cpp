//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/Queue.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Synchronization.hpp>
#include <HLGK/Core/Vulkan/CommandBuffer.hpp>
#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

#include <stdexcept>

namespace HLGK {

    Queue::Queue(const LogicalDevice &device, uint32_t familyIndex_, uint32_t queueIndex_, float priority_)
            : m_rDevice(&device)
            , familyIndex(familyIndex_)
            , queueIndex(queueIndex_)
            , priority(priority_)
            , flags(device.physicalDevice.getProperties().queueFamilyProperties.at(familyIndex).queueFlags){
        callDeviceProcAddr(device, vkGetDeviceQueue, familyIndex, queueIndex, &m_queue);
        if (!m_queue)
            throw std::runtime_error("Invalid queue");
    }

    void Queue::submit(const std::vector< CommandBuffer > &commandBuffers,
                const std::vector< Semaphore *> &waitSemaphores,
                const std::vector< VkPipelineStageFlags > &waitStages,
                const std::vector< Semaphore *> &signalSemaphore,
                const Fence &fence) {
        VkSubmitInfo submitInfo{};
        submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;

        std::vector<VkSemaphore> vkWaitSem(waitSemaphores.size());
        std::transform(waitSemaphores.begin(), waitSemaphores.end(), vkWaitSem.begin(),
                       [](const Semaphore *s) { return s->m_semaphore; });
        submitInfo.waitSemaphoreCount = std::min(waitSemaphores.size(), waitStages.size());
        submitInfo.pWaitSemaphores = vkWaitSem.data();
        submitInfo.pWaitDstStageMask = waitStages.data();

        std::vector<VkCommandBuffer> vkCmdBuff(commandBuffers.size());
        std::transform(commandBuffers.begin(), commandBuffers.end(), vkCmdBuff.begin(),
                       [](const CommandBuffer &cmd) { return cmd.m_commandBuffer; });
        submitInfo.commandBufferCount = vkCmdBuff.size();
        submitInfo.pCommandBuffers = vkCmdBuff.data();

        std::vector<VkSemaphore> vkSignalSem(signalSemaphore.size());
        std::transform(signalSemaphore.begin(), signalSemaphore.end(), vkSignalSem.begin(),
                       [](const Semaphore *s) { return s->m_semaphore; });
        submitInfo.signalSemaphoreCount = vkSignalSem.size();
        submitInfo.pSignalSemaphores = vkSignalSem.data();

        VK_CHECK_RESULT(callDeviceProcAddr(*m_rDevice, vkQueueSubmit, m_queue, 1, &submitInfo, fence.m_fence));
    }

    void Queue::present(const std::vector< std::pair< SwapChain *, uint32_t > > &swapChainsWithImageID,
                 const std::vector< Semaphore *> &waitSemaphore) {
        VkPresentInfoKHR presentInfo{};
        presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;

        std::vector<VkSemaphore> vkSignalSem(waitSemaphore.size());
        std::transform(waitSemaphore.begin(), waitSemaphore.end(), vkSignalSem.begin(),
                       [](const Semaphore *s) { return s->m_semaphore; });
        presentInfo.waitSemaphoreCount = vkSignalSem.size();
        presentInfo.pWaitSemaphores = vkSignalSem.data();

        std::vector<VkSwapchainKHR> swapChains;
        swapChains.reserve(swapChainsWithImageID.size());
        std::vector<uint32_t> imageIndexes;
        imageIndexes.reserve(swapChainsWithImageID.size());
        std::for_each(swapChainsWithImageID.begin(), swapChainsWithImageID.end(),
                      [&swapChains, &imageIndexes](const std::pair< SwapChain *, uint32_t > &p) {
            swapChains.push_back(p.first->m_swapChain);
            imageIndexes.push_back(p.second);
        });

        presentInfo.swapchainCount = swapChainsWithImageID.size();
        presentInfo.pSwapchains = swapChains.data();
        presentInfo.pImageIndices = imageIndexes.data();

        presentInfo.pResults = nullptr; // Optional

        VK_CHECK_RESULT(callDeviceProcAddr(*m_rDevice, vkQueuePresentKHR, m_queue, &presentInfo));
    }


}// namespace HLGK