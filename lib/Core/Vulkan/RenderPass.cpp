//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/RenderPass.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    RenderPass::RenderPass(const LogicalDevice &device
                           , const std::vector<VkAttachmentDescription> &attachments
                           , const std::vector<VkSubpassDescription> &subpasses)
        : m_device(device) {
        VkRenderPassCreateInfo renderPassInfo{};
        renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
        renderPassInfo.attachmentCount = attachments.size();
        renderPassInfo.pAttachments = attachments.data();
        renderPassInfo.subpassCount = subpasses.size();
        renderPassInfo.pSubpasses = subpasses.data();

        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreateRenderPass, &renderPassInfo, nullptr, &m_renderPass));
    }

    RenderPass::~RenderPass() {
        callDeviceProcAddr(m_device, vkDestroyRenderPass, m_renderPass, nullptr);
    }


}//namespace HLGK