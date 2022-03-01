//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>

namespace HLGK {

    class LogicalDevice;
    class ImageView;

    class Image final {
        const LogicalDevice &m_device;
        VkImage m_vkImage = {};
        bool m_isOwner = false;

    public:
        Image(const LogicalDevice &device, VkImage image, bool isOwner = true)
            : m_device(device)
            , m_vkImage(image)
            , m_isOwner(isOwner) { }
        //TODO: нормальный конструктор.

        Image(const Image &) = delete;
        Image &operator=(const Image &) = delete;
        Image(Image &&) noexcept;
        Image &operator=(Image &&) noexcept = delete;

        ~Image();

    public:
        ImageView createView(VkImageViewType viewType, VkFormat format
                , VkComponentMapping components
                , VkImageSubresourceRange subresourceRange
                , VkImageViewCreateFlags flags) const;
    };

}// namespace HLGK
