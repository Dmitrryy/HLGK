//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Image.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/Synchronization.hpp>

#include <algorithm>

namespace HLGK {

    SwapChain::SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo)
                : m_device(&device)
                , m_createInfo(createInfo) {
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateSwapchainKHR, &createInfo, nullptr, &m_swapChain));

        uint32_t count = 0;
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, nullptr));
        std::vector<VkImage> swapChainImagesTmp(count);
        m_swapChainImages.reserve(count);
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, swapChainImagesTmp.data()));

        std::transform(swapChainImagesTmp.begin(), swapChainImagesTmp.end()
                        , std::back_inserter(m_swapChainImages)
                        , [d = this->m_device](VkImage im) {
            return Image(*d, im, false);
        });
    }

    SwapChain::~SwapChain() {
        callDeviceProcAddr(*m_device, vkDestroySwapchainKHR, m_swapChain, nullptr);
    }

    uint32_t SwapChain::acquireNextImage(const Semaphore &semaphore, const Fence &fence, uint64_t timeout /*= UINT64_MAX*/) {
        uint32_t index = 0;
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkAcquireNextImageKHR, m_swapChain, timeout, semaphore.m_semaphore, fence.m_fence, &index));
        return index;
    }


}// namespace HLGK