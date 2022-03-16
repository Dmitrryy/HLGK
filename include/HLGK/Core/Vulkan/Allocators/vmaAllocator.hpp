//
// Created by dadro on 14.03.2022.
//
#pragma once

#include "IAllocator.hpp"

#include <VulkanMemoryAllocator/include/vk_mem_alloc.h>


namespace HLGK {

    class Instance;
    class LogicalDevice;
    class vmaAllocator;

    class vmaBufferBase : public IBuffer {
    protected:
        VmaAllocator m_allocator = {};
        VmaAllocation m_allocation = {};

    protected:
        vmaBufferBase(VmaAllocator allocator,
                  const VkBufferCreateInfo &bufferCreateInfo,
                  const VmaAllocationCreateInfo &allocationCreateInfo);

    public:
        vmaBufferBase(vmaBufferBase &&) noexcept;
        vmaBufferBase &operator=(vmaBufferBase &&) noexcept;

    public:
        ~vmaBufferBase() override;

    };//class vmaBuffer


    class vmaBuffer final : public vmaBufferBase {

    private:
        friend vmaAllocator;
        vmaBuffer(VmaAllocator allocator,
            const VkBufferCreateInfo &bufferCreateInfo,
            const VmaAllocationCreateInfo &allocationCreateInfo)
            : vmaBufferBase(allocator, bufferCreateInfo, allocationCreateInfo) {}


    public:
        void *map() override;
        void unmap() override;

        void flush(VkDeviceSize offset, VkDeviceSize size) override;
        void invalidate(VkDeviceSize offset, VkDeviceSize size) override;
    };//class vmaBuffer


    class vmaAllocator final : public IAllocator {
        VmaAllocator m_allocator = {};

    public:
        vmaAllocator(VkInstance instance, VkPhysicalDevice physicalDevice
                     , VkDevice device);

        ~vmaAllocator() override;

    public:
        std::unique_ptr<IBuffer> createBuffer(const VkBufferCreateInfo &bufferCreateInfo) override;

    };//class vmaAllocator

}//namespace HLGK