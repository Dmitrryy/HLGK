//
// Created by dadro on 02.03.2022.
//

#include <HLGK/Core/Vulkan/Framebuffer.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/RenderPass.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    Framebuffer::Framebuffer(const LogicalDevice &device
                             , const RenderPass &renderPass
                             , const std::vector<ImageView *> &attachments
                             , uint32_t layers, VkExtent2D extent, VkFramebufferCreateFlags flags /*= 0*/)
        : m_device(&device) {
        std::vector<VkImageView> views;
        views.reserve(attachments.size());
        std::transform(attachments.begin(), attachments.end(), std::back_inserter(views), [](const ImageView *im) {
            return im->m_imageView;
        });

        VkFramebufferCreateInfo framebufferInfo{};
        framebufferInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        framebufferInfo.renderPass = renderPass.m_renderPass;
        framebufferInfo.attachmentCount = views.size();
        framebufferInfo.pAttachments = views.data();
        framebufferInfo.width = extent.width;
        framebufferInfo.height = extent.height;
        framebufferInfo.layers = 1;
        framebufferInfo.flags = flags;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateFramebuffer, &framebufferInfo, nullptr, &m_framebuffer));
    }

    Framebuffer::Framebuffer(Framebuffer &&that) noexcept {
        *this = std::move(that);
    }
    Framebuffer &Framebuffer::operator=(Framebuffer &&that) noexcept {
        std::swap(m_device, that.m_device);
        std::swap(m_framebuffer, that.m_framebuffer);
        return *this;
    }

    Framebuffer::~Framebuffer() {
        if(m_device) {
            callDeviceProcAddr(*m_device, vkDestroyFramebuffer, m_framebuffer, nullptr);
        }
    }

};