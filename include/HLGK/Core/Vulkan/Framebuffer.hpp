//
// Created by dadro on 02.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class ImageView;
    class RenderPass;
    class CommandBuffer;

    class Framebuffer final {
        const LogicalDevice *m_device = {};
        VkFramebuffer m_framebuffer = {};

        friend CommandBuffer; // для записи

    public:
        Framebuffer(const LogicalDevice &device
                , const RenderPass &renderPass
                , const std::vector<ImageView *> &attachments
                , uint32_t layers, VkExtent2D extent, VkFramebufferCreateFlags flags = 0);

        Framebuffer(const Framebuffer &) = delete;
        Framebuffer &operator=(const Framebuffer &) = delete;
        Framebuffer(Framebuffer &&) noexcept;
        Framebuffer &operator=(Framebuffer &&) noexcept;

        ~Framebuffer();
    };

};