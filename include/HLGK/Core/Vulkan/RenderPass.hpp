//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;

    class RenderPass final {
        const LogicalDevice &m_device;
        VkRenderPass m_renderPass = {};

    public:
        RenderPass(const LogicalDevice &device
                , const std::vector<VkAttachmentDescription> &attachments
                , const std::vector<VkSubpassDescription> &subpasses);
        ~RenderPass();
    };

}//namespace HLGK