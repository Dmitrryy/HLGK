//
// Created by dadro on 02.03.2022.
//

#include <HLGK/Core/Vulkan/CommandPool.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/CommandBuffer.hpp>

namespace HLGK {

    CommandPool::CommandPool(const LogicalDevice &device,
                             VkCommandPoolCreateFlags flags,
                             uint32_t queueFamilyIndex)
        : m_device(&device) {
        VkCommandPoolCreateInfo poolInfo{};
        poolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
        poolInfo.flags = flags;
        poolInfo.queueFamilyIndex = queueFamilyIndex;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateCommandPool, &poolInfo, nullptr, &m_pool));
    }

    CommandPool::CommandPool(CommandPool &&that) noexcept {
        *this = std::move(that);
    }
    CommandPool &CommandPool::operator=(CommandPool &&that) noexcept {
        std::swap(m_device, that.m_device);
        std::swap(m_pool, that.m_pool);
        return *this;
    }

    CommandPool::~CommandPool() {
        callDeviceProcAddr(*m_device, vkDestroyCommandPool, m_pool, nullptr);
    }

    CommandBuffer CommandPool::createBuffer(VkCommandBufferLevel level) const {
        return {*m_device, *this, level};
    }

    std::vector< CommandBuffer > CommandPool::createSeveralBuffers(uint32_t count, VkCommandBufferLevel level) const {
        VkCommandBufferAllocateInfo allocInfo{};
        allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        allocInfo.commandPool = m_pool;
        allocInfo.level = level;
        allocInfo.commandBufferCount = count;

        std::vector<VkCommandBuffer> vkBuffers(count);
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkAllocateCommandBuffers, &allocInfo, vkBuffers.data()));

        std::vector<CommandBuffer> result;
        result.reserve(count);
        std::transform(vkBuffers.begin(), vkBuffers.end(), std::back_inserter(result), [d = m_device](const VkCommandBuffer &buff) {
            return CommandBuffer(*d, buff);
        });

        return result;
    }

}//namespace HLGK