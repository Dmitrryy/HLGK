//
// Created by dadro on 14.03.2022.
//
#pragma  once

#include <vulkan/vulkan.h>

#include <algorithm>

namespace HLGK {

    class IBuffer {
    protected:
        VkBuffer m_buffer = {};

    public:
        IBuffer() = default;

        IBuffer(const IBuffer &) = delete;
        IBuffer &operator=(const IBuffer &) = delete;
        IBuffer(IBuffer &&that) noexcept {
            *this = std::move(that);
        }
        IBuffer &operator=(IBuffer &&that) noexcept {
            std::swap(m_buffer, that.m_buffer);
            return *this;
        }

        virtual ~IBuffer() = default;

    public:
        virtual void *map() = 0;
        virtual void unmap() = 0;

        virtual void flush(VkDeviceSize offset = VK_WHOLE_SIZE, VkDeviceSize size = VK_WHOLE_SIZE) = 0;
        virtual void invalidate(VkDeviceSize offset = VK_WHOLE_SIZE, VkDeviceSize size = VK_WHOLE_SIZE) = 0;

    public:

    };

}//namespace HLGK