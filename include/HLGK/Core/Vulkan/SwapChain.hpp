//
// Created by dadro on 28.02.2022.
//
#pragma once

#include <HLGK/Core/Vulkan/gen/DeviceExt.hpp>

#include <vulkan/vulkan.h>

#include <vector>

namespace HLGK {

    class LogicalDevice;
    class Surface;
    class Image;
    class Semaphore;
    class Fence;
    class Queue;


    class SwapChain final {
        const LogicalDevice *m_device = {};
        VkSwapchainKHR m_swapChain = {};
        std::vector<Image> m_swapChainImages;

        VkKhrSwapchain *m_extension = {};

        VkSwapchainCreateInfoKHR m_createInfo;

        friend Queue;

    public:
        SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo);

        SwapChain(const SwapChain &) = delete;
        SwapChain &operator=(const SwapChain &) = delete;
        SwapChain(SwapChain &&) noexcept;
        SwapChain &operator=(SwapChain &&) noexcept;

        ~SwapChain();

    public:
        const std::vector<Image> &getImages() const { return m_swapChainImages; }

        void present(uint32_t imageId, const Queue &queue
                     , const std::vector< Semaphore *> &waitSemaphores) const;

        uint32_t acquireNextImage(const Semaphore &semaphore, const Fence &fence, uint64_t timeout = UINT64_MAX);
    };

}// namespace HLGK