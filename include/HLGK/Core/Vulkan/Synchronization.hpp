//
// Created by dadro on 04.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class SwapChain;
    class Queue;

    // TODO помимо бинарного есть временной
    class Semaphore final {
        const LogicalDevice *m_device = {};
        VkSemaphore m_semaphore = {};

        friend SwapChain;
        friend Queue;

    public:
        Semaphore() = default;
        Semaphore(const LogicalDevice &device, VkSemaphoreCreateFlags flags = 0);

        Semaphore(const Semaphore &) = delete;
        Semaphore &operator=(const Semaphore &) = delete;
        Semaphore(Semaphore &&) noexcept;
        Semaphore &operator=(Semaphore &&) noexcept;

        ~Semaphore();

    public:
        //TODO
    };//class Semaphore


    class Fence final {
        const LogicalDevice *m_device = {};
        VkFence m_fence = {};

        friend SwapChain;
        friend Queue;

    public:
        Fence() = default;
        Fence(const LogicalDevice &device, VkFenceCreateFlags flags = 0);

        Fence(const Fence &) = delete;
        Fence &operator=(const Fence &) = delete;
        Fence(Fence &&) noexcept;
        Fence &operator=(Fence &&) noexcept;

        ~Fence();

    public:
        void wait(uint64_t timeout = UINT64_MAX) const;
        void reset() const;

    public:
        static void wait(const std::vector<Fence> &fences, VkBool32 waitAll, uint64_t timeout);
        static void reset(const std::vector<Fence> &fences);
    };//class Fence

}//namespace HLGK