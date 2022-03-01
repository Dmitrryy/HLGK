//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/Image.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>

namespace HLGK {

    ImageView Image::createView(VkImageViewType viewType, VkFormat format
            , VkComponentMapping components
            , VkImageSubresourceRange subresourceRange
            , VkImageViewCreateFlags flags) const {
        return {m_device, m_vkImage, viewType, format
                         , components, subresourceRange, flags};
    }

    Image::Image(Image &&that) noexcept
        : m_device(that.m_device) {
        std::swap(m_vkImage, that.m_vkImage);
        std::swap(m_isOwner, that.m_isOwner);
    }

    Image::~Image() {
        if(m_isOwner) {
            callDeviceProcAddr(m_device, vkDestroyImage, m_vkImage, nullptr);
        }
    }

}// namespace HLGK