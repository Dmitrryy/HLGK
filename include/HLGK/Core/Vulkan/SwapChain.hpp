//
// Created by dadro on 28.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>

#include <vector>

namespace HLGK {

    class LogicalDevice;
    class Surface;
    class Image;

    class SwapChain final {
        const LogicalDevice &m_device;
        VkSwapchainKHR m_swapChain = {};
        std::vector<Image> m_swapChainImages;

        VkSwapchainCreateInfoKHR m_createInfo;

    public:
        SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo);

        const std::vector<Image> &getImages() const { return m_swapChainImages; }

        ~SwapChain();
    };

}// namespace HLGK