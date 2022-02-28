//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    ImageView::ImageView(const LogicalDevice &device, VkImage image
            , VkImageViewType viewType, VkFormat format
            , VkComponentMapping components
            , VkImageSubresourceRange subresourceRange
            , VkImageViewCreateFlags flags)
            : m_device(device) {
        VkImageViewCreateInfo createInfo {
            .sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
            .pNext = nullptr,
            .image = image,
            .viewType = viewType,
            .format = format,
            .components = components,
            .flags = flags,
            .subresourceRange = subresourceRange
        };

        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreateImageView, &createInfo, nullptr, &m_imageView));
    }

    ImageView::~ImageView() {
        callDeviceProcAddr(m_device, vkDestroyImageView, m_imageView, nullptr);
    }

}// namespace HLGK
