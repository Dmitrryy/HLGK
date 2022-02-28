//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>


namespace HLGK {

    class LogicalDevice;

    class ImageView final {
        const LogicalDevice &m_device;
        VkImageView m_imageView = {};

    public:
        ImageView(const LogicalDevice &device, VkImage image
                , VkImageViewType viewType, VkFormat format
                , VkComponentMapping components
                , VkImageSubresourceRange subresourceRange
                , VkImageViewCreateFlags flags);

        ~ImageView();

    };

}// namespace HLGK
