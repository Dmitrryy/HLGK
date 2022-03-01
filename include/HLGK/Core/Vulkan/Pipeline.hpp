//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>

#include <vector>

namespace HLGK {

    class LogicalDevice;

    class PipelineLayout final {
        const LogicalDevice &m_device;
        VkPipelineLayout m_layout = {};

    public:
        PipelineLayout(const LogicalDevice &device, const std::vector<VkDescriptorSetLayout> &setLayouts = {},
                       const std::vector<VkPushConstantRange> &pushConstantRanges = {},
                       VkPipelineLayoutCreateFlags flags = 0);
        ~PipelineLayout();


    };//class PipelineLayout

    class Pipeline {

    public:
        class VertexInput final {
            VkStructureType                             sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
            const void*                                 pNext = nullptr;
        public:
            VkPipelineVertexInputStateCreateFlags       flags = {};
            uint32_t                                    vertexBindingDescriptionCount = {};
            const VkVertexInputBindingDescription*      pVertexBindingDescriptions = {};
            uint32_t                                    vertexAttributeDescriptionCount = {};
            const VkVertexInputAttributeDescription*    pVertexAttributeDescriptions = {};
        };

        class InputAssembly final {
            VkStructureType                            sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
            const void*                                pNext = nullptr;
        public:
            VkPipelineInputAssemblyStateCreateFlags    flags = {};
            VkPrimitiveTopology                        topology = {};
            VkBool32                                   primitiveRestartEnable = {};
        };

        class ViewportState final {
            VkStructureType                       sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
            const void*                           pNext = nullptr;
        public:
            VkPipelineViewportStateCreateFlags    flags = {};
            uint32_t                              viewportCount = {};
            const VkViewport*                     pViewports = {};
            uint32_t                              scissorCount = {};
            const VkRect2D*                       pScissors = {};
        };

        class RasterizationState {
            VkStructureType                            sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
            const void*                                pNext = nullptr;
        public:
            VkPipelineRasterizationStateCreateFlags    flags = {};
            VkBool32                                   depthClampEnable = {};
            VkBool32                                   rasterizerDiscardEnable = {};
            VkPolygonMode                              polygonMode = {};
            VkCullModeFlags                            cullMode = {};
            VkFrontFace                                frontFace = {};
            VkBool32                                   depthBiasEnable = {};
            float                                      depthBiasConstantFactor = {};
            float                                      depthBiasClamp = {};
            float                                      depthBiasSlopeFactor = {};
            float                                      lineWidth = {};
        };

        class MultisampleState {
            VkStructureType                          sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
            const void*                              pNext = nullptr;
        public:
            VkPipelineMultisampleStateCreateFlags    flags = {};
            VkSampleCountFlagBits                    rasterizationSamples = {};
            VkBool32                                 sampleShadingEnable = {};
            float                                    minSampleShading = {};
            const VkSampleMask*                      pSampleMask = {};
            VkBool32                                 alphaToCoverageEnable = {};
            VkBool32                                 alphaToOneEnable = {};
        };

        class ColorBlendState {
            VkStructureType                               sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
            const void*                                   pNext = nullptr;
        public:
            VkPipelineColorBlendStateCreateFlags          flags = {};
            VkBool32                                      logicOpEnable = {};
            VkLogicOp                                     logicOp = {};
            uint32_t                                      attachmentCount = {};
            const VkPipelineColorBlendAttachmentState*    pAttachments = {};
            float                                         blendConstants[4] = {};
        };

        class DynamicState {
            VkStructureType                      sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
            const void*                          pNext = nullptr;
        public:
            VkPipelineDynamicStateCreateFlags    flags = {};
            uint32_t                             dynamicStateCount = {};
            const VkDynamicState*                pDynamicStates = {};
        };

    };//class Pipeline

}//namespace HLGK