//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    SwapChain::SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo)
                : m_device(device)
                , m_createInfo(createInfo) {
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreateSwapchainKHR, &createInfo, nullptr, &m_swapChain));

        uint32_t count = 0;
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, nullptr));
        m_swapChainImages.resize(count);
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, m_swapChainImages.data()));

    }

    SwapChain::~SwapChain() {
        callDeviceProcAddr(m_device, vkDestroySwapchainKHR, m_swapChain, nullptr);
    }

}// namespace HLGK