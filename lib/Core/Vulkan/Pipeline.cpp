//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/Pipeline.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Shader.hpp>


namespace HLGK {

    PipelineLayout::PipelineLayout(const LogicalDevice &device, const std::vector<VkDescriptorSetLayout> &setLayouts,
                                   const std::vector<VkPushConstantRange> &pushConstantRanges,
                                   VkPipelineLayoutCreateFlags flags /*= 0*/)
        : m_device(device) {
        VkPipelineLayoutCreateInfo pipelineLayoutInfo{};
        pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        pipelineLayoutInfo.pNext = nullptr;
        pipelineLayoutInfo.flags = flags;
        pipelineLayoutInfo.setLayoutCount = setLayouts.size();
        pipelineLayoutInfo.pSetLayouts = setLayouts.data();
        pipelineLayoutInfo.pushConstantRangeCount = pushConstantRanges.size();
        pipelineLayoutInfo.pPushConstantRanges = pushConstantRanges.data();

        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreatePipelineLayout, &pipelineLayoutInfo, nullptr, &m_layout));
    }

    PipelineLayout::~PipelineLayout() {
        callDeviceProcAddr(m_device, vkDestroyPipelineLayout, m_layout, nullptr);
    }

    GraphicsPipeline::GraphicsPipeline(const LogicalDevice &device
                                       , GraphicsPipelineCreateInfo &createInfo
                                       , const PipelineLayout &layout
                                       , const RenderPass &renderPass
                                       , const std::vector<Shader *> &shaders)
                                       : m_device(device) {
        std::vector< VkPipelineShaderStageCreateInfo > stages;
        size_t size = 0;
        std::for_each(shaders.begin(), shaders.end(), [&size](const Shader *sh) {
            size += sh->getStages().size();
        });
        stages.reserve(size);
        std::for_each(shaders.begin(), shaders.end(), [&stages](const Shader *sh) {
             stages.insert(stages.end(), sh->getStages().begin(), sh->getStages().end());
        });
        createInfo.stageCount = stages.size();
        createInfo.pStages = stages.data();
        createInfo.layout = layout.m_layout;
        createInfo.renderPass = renderPass.m_renderPass;

        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreateGraphicsPipelines, nullptr, 1, &createInfo.getBase(),
                           nullptr, &m_pipeline));
    }
    GraphicsPipeline::~GraphicsPipeline() {
        callDeviceProcAddr(m_device, vkDestroyPipeline, m_pipeline, nullptr);
    }

}//namespace HLGK