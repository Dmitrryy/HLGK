//
// Created by dadro on 04.03.2022.
//

#include <HLGK/Core/Vulkan/CommandBuffer.hpp>
#include <HLGK/Core/Vulkan/CommandPool.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/RenderPass.hpp>
#include <HLGK/Core/Vulkan/Framebuffer.hpp>
#include <HLGK/Core/Vulkan/Pipeline.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

namespace HLGK {

    CommandBuffer::CommandBuffer(const LogicalDevice &device, VkCommandBuffer buff)
            : m_device(&device)
            , m_commandBuffer(buff) { }

    CommandBuffer::CommandBuffer(const LogicalDevice &device, const CommandPool &pool, VkCommandBufferLevel level)
            : m_device(&device) {
        VkCommandBufferAllocateInfo allocInfo{};
        allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        allocInfo.commandPool = pool.m_pool;
        allocInfo.level = level;
        allocInfo.commandBufferCount = 1;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkAllocateCommandBuffers, &allocInfo, &m_commandBuffer));
    }

    void CommandBuffer::beginRenderPass(const RenderPass &renderPass, const Framebuffer &framebuffer
            , const VkRect2D &renderArea, const std::vector<VkClearValue> &clearValues, VkSubpassContents contents) const {
        VkRenderPassBeginInfo renderPassInfo{};
        renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        renderPassInfo.renderPass = renderPass.m_renderPass;
        renderPassInfo.framebuffer = framebuffer.m_framebuffer;
        renderPassInfo.renderArea = renderArea;
        renderPassInfo.clearValueCount = clearValues.size();
        renderPassInfo.pClearValues = clearValues.data();

        callProcAddrName<PFN_vkCmdBeginRenderPass>("vkCmdBeginRenderPass", &renderPassInfo, contents);
    }

    void CommandBuffer::endRenderPass() const {
        callProcAddrName<PFN_vkCmdEndRenderPass>("vkCmdEndRenderPass");
    }

    void CommandBuffer::bindPipeline(const GraphicsPipeline &pipeline, VkPipelineBindPoint bindPoint) const {
        callProcAddrName<PFN_vkCmdBindPipeline>("vkCmdBindPipeline", bindPoint, pipeline.m_pipeline);
    }
    void CommandBuffer::draw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) const {
        callProcAddrName<PFN_vkCmdDraw>("vkCmdDraw", vertexCount, instanceCount, firstVertex, firstInstance);
    }

}//namespace HLGK