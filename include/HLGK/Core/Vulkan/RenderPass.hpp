//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class GraphicsPipeline;
    class Framebuffer;
    class CommandBuffer;

    class RenderPass final {
        const LogicalDevice *m_device;
        VkRenderPass m_renderPass = {};

        //для создания
        friend GraphicsPipeline;
        friend Framebuffer;

        // для аписи
        friend CommandBuffer;

    public:
        RenderPass(const LogicalDevice &device
                , const std::vector<VkAttachmentDescription> &attachments
                , const std::vector<VkSubpassDescription> &subpasses
                , const std::vector<VkSubpassDependency> &dependencies);
        ~RenderPass();
    };

}//namespace HLGK