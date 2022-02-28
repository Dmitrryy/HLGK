//
// Created by dadro on 28.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class Surface;

    class SwapChain final {
        const LogicalDevice &m_device;
        VkSwapchainKHR m_swapChain = {};
        std::vector<VkImage> m_swapChainImages;

        VkSwapchainCreateInfoKHR m_createInfo;

    public:
        SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo);

        ~SwapChain();
    };

}// namespace HLGK