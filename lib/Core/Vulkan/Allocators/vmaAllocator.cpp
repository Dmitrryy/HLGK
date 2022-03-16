//
// Created by dadro on 14.03.2022.
//

#define VMA_IMPLEMENTATION
#include <HLGK/Core/Vulkan/Allocators/vmaAllocator.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    vmaBufferBase::vmaBufferBase(VmaAllocator allocator,
                         const VkBufferCreateInfo &bufferCreateInfo,
                         const VmaAllocationCreateInfo &allocationCreateInfo)
                         : m_allocator(allocator) {
        vmaCreateBuffer(allocator
                        , &bufferCreateInfo
                        , &allocationCreateInfo, &m_buffer, &m_allocation, nullptr);
    }

    vmaBufferBase::~vmaBufferBase() {
        if (m_buffer)
            vmaDestroyBuffer(m_allocator, m_buffer, m_allocation);
    }

    vmaBufferBase::vmaBufferBase(vmaBufferBase &&that) noexcept {
        *this = std::move(that);
    }
    vmaBufferBase &vmaBufferBase::operator=(vmaBufferBase &&that) noexcept {
        std::swap(m_buffer, that.m_buffer);
        std::swap(m_allocator, that.m_allocator);
        std::swap(m_allocation, that.m_allocation);
        return *this;
    }


    void *vmaBuffer::map() {
        void *result = nullptr;
        vmaMapMemory(m_allocator, m_allocation, &result);
        return result;
    }

    void vmaBuffer::unmap() {
        vmaUnmapMemory(m_allocator, m_allocation);
    }

    void vmaBuffer::flush(VkDeviceSize offset /*= VK_WHOLE_SIZE*/, VkDeviceSize size /*= VK_WHOLE_SIZE*/) {
        VK_CHECK_RESULT(vmaFlushAllocation(m_allocator, m_allocation, offset, size));
    }
    void vmaBuffer::invalidate(VkDeviceSize offset /*= VK_WHOLE_SIZE*/, VkDeviceSize size /*= VK_WHOLE_SIZE*/) {
        VK_CHECK_RESULT(vmaInvalidateAllocation(m_allocator, m_allocation, offset, size));
    }



    vmaAllocator::vmaAllocator(VkInstance instance, VkPhysicalDevice physicalDevice
    , VkDevice device) {
        //FIXME функции из таблицы (которой еще нет)
        VmaVulkanFunctions vulkanFunctions = {};
        vulkanFunctions.vkGetInstanceProcAddr = &vkGetInstanceProcAddr;
        vulkanFunctions.vkGetDeviceProcAddr = &vkGetDeviceProcAddr;

        VmaAllocatorCreateInfo allocatorCreateInfo = {};
        allocatorCreateInfo.vulkanApiVersion = VK_API_VERSION_1_2; //FIXME
        allocatorCreateInfo.physicalDevice = physicalDevice;
        allocatorCreateInfo.device = device;
        allocatorCreateInfo.instance = instance;
        allocatorCreateInfo.pVulkanFunctions = &vulkanFunctions;

        vmaCreateAllocator(&allocatorCreateInfo, &m_allocator);
    }

    vmaAllocator::~vmaAllocator() {
        vmaDestroyAllocator(m_allocator);
    }


    std::unique_ptr<IBuffer> vmaAllocator::createBuffer(const VkBufferCreateInfo &bufferCreateInfo) {
        VmaAllocationCreateInfo allocInfo = {};
        allocInfo.usage = VMA_MEMORY_USAGE_CPU_TO_GPU;
        allocInfo.preferredFlags = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        return std::make_unique<vmaBuffer>(vmaBuffer(m_allocator, bufferCreateInfo, allocInfo));
    }

}//namespace HLGK