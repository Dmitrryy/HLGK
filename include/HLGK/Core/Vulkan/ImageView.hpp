//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>


namespace HLGK {

    class LogicalDevice;
    class Framebuffer;

    class ImageView final {
        const LogicalDevice *m_device;
        VkImageView m_imageView = {};

        friend Framebuffer;

    public:
        ImageView(const LogicalDevice *device, VkImage image
                , VkImageViewType viewType, VkFormat format
                , VkComponentMapping components
                , VkImageSubresourceRange subresourceRange
                , VkImageViewCreateFlags flags);

        ImageView(const ImageView &) = delete;
        ImageView &operator=(const ImageView &) = delete;
        ImageView(ImageView &&) noexcept;
        ImageView &operator=(ImageView &&) = delete;

        ~ImageView();

    };

}// namespace HLGK
