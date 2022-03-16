//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Image.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/Synchronization.hpp>
#include <HLGK/Core/Vulkan/Queue.hpp>

#include <algorithm>

namespace HLGK {

    SwapChain::SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo)
                : m_device(&device)
                , m_extension(device.getExtension<VkKhrSwapchain>())
                , m_createInfo(createInfo) {
        VK_CHECK_RESULT(m_extension->vkCreateSwapchainKHR(m_device->get(), &createInfo, nullptr, &m_swapChain));

        uint32_t count = 0;
        VK_CHECK_RESULT(m_extension->vkGetSwapchainImagesKHR(m_device->get(), m_swapChain, &count, nullptr));
        std::vector<VkImage> swapChainImagesTmp(count);
        m_swapChainImages.reserve(count);
        VK_CHECK_RESULT(m_extension->vkGetSwapchainImagesKHR(m_device->get(), m_swapChain, &count, swapChainImagesTmp.data()));

        std::transform(swapChainImagesTmp.begin(), swapChainImagesTmp.end()
                        , std::back_inserter(m_swapChainImages)
                        , [d = this->m_device](VkImage im) {
            return Image(*d, im, false);
        });
    }

    SwapChain::~SwapChain() {
        m_extension->vkDestroySwapchainKHR(m_device->get(), m_swapChain, nullptr);
    }

    uint32_t SwapChain::acquireNextImage(const Semaphore &semaphore, const Fence &fence, uint64_t timeout /*= UINT64_MAX*/) {
        uint32_t index = 0;
        VK_CHECK_RESULT(m_extension->vkAcquireNextImageKHR(
                m_device->get(), m_swapChain, timeout, semaphore.m_semaphore, fence.m_fence, &index));
        return index;
    }

    void SwapChain::present(uint32_t imageId, const Queue &queue
            , const std::vector< Semaphore *> &waitSemaphores) const {
        VkPresentInfoKHR presentInfo{};
        presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;

        std::vector<VkSemaphore> vkSignalSem(waitSemaphores.size());
        std::transform(waitSemaphores.begin(), waitSemaphores.end(), vkSignalSem.begin(),
                       [](const Semaphore *s) { return s->m_semaphore; });
        presentInfo.waitSemaphoreCount = vkSignalSem.size();
        presentInfo.pWaitSemaphores = vkSignalSem.data();

        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &m_swapChain;
        presentInfo.pImageIndices = &imageId;

        presentInfo.pResults = nullptr; // Optional

        VK_CHECK_RESULT(m_extension->vkQueuePresentKHR(queue.get(), &presentInfo));
    }


}// namespace HLGK