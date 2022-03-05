//
// Created by dadro on 02.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class CommandBuffer;

    class CommandPool final {
        const LogicalDevice *m_device = {};
        VkCommandPool m_pool = {};

        friend CommandBuffer;
    public:
        CommandPool(const LogicalDevice &device,
                    VkCommandPoolCreateFlags flags,
                    uint32_t queueFamilyIndex);

        CommandPool(const CommandPool &) = delete;
        CommandPool &operator=(const CommandPool &) = delete;
        CommandPool(CommandPool &&) noexcept;
        CommandPool &operator=(CommandPool &&) noexcept;

        ~CommandPool();

    public:
        CommandBuffer createBuffer(VkCommandBufferLevel level) const;
        std::vector< CommandBuffer > createSeveralBuffers(uint32_t count, VkCommandBufferLevel level) const;
    };

}//namespace HLGK