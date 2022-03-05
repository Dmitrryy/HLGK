//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <HLGK/Core/Vulkan/RenderPass.hpp>

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class Shader;
    class GraphicsPipeline;
    class CommandBuffer;

    class PipelineLayout final {
        const LogicalDevice *m_device = {};
        VkPipelineLayout m_layout = {};

        friend GraphicsPipeline;

    public:
        PipelineLayout(const LogicalDevice &device, const std::vector<VkDescriptorSetLayout> &setLayouts = {},
                       const std::vector<VkPushConstantRange> &pushConstantRanges = {},
                       VkPipelineLayoutCreateFlags flags = 0);
        ~PipelineLayout();
    };//class PipelineLayout


    struct GraphicsPipelineCreateInfo : private VkGraphicsPipelineCreateInfo {
        GraphicsPipelineCreateInfo()
                : VkGraphicsPipelineCreateInfo{} {
            sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
        }
        const VkGraphicsPipelineCreateInfo &getBase() const { return *this; }

    public:
        friend GraphicsPipeline;

        //Информация о шейерах берется непосредственно из классов Shader, переданных в конструктор
        //using VkGraphicsPipelineCreateInfo::pNext;
        using VkGraphicsPipelineCreateInfo::flags;
        using VkGraphicsPipelineCreateInfo::pVertexInputState;
        using VkGraphicsPipelineCreateInfo::pInputAssemblyState;
        using VkGraphicsPipelineCreateInfo::pTessellationState;
        using VkGraphicsPipelineCreateInfo::pViewportState;
        using VkGraphicsPipelineCreateInfo::pRasterizationState;
        using VkGraphicsPipelineCreateInfo::pMultisampleState;
        using VkGraphicsPipelineCreateInfo::pDepthStencilState;
        using VkGraphicsPipelineCreateInfo::pColorBlendState;
        using VkGraphicsPipelineCreateInfo::pDynamicState;
        using VkGraphicsPipelineCreateInfo::subpass;
        //TODO using VkGraphicsPipelineCreateInfo::basePipelineHandle;
        //TODO using VkGraphicsPipelineCreateInfo::basePipelineIndex;
    };


    class GraphicsPipeline {
        const LogicalDevice *m_device;
        VkPipeline m_pipeline = {};

        friend CommandBuffer;

    public:
        GraphicsPipeline(const LogicalDevice &device
                         , GraphicsPipelineCreateInfo &createInfo
                         , const PipelineLayout &layout
                         , const RenderPass &renderPass
                         , const std::vector<Shader *> &shaders);
        ~GraphicsPipeline();

    public:
        struct VertexInputState final : private VkPipelineVertexInputStateCreateInfo {
            VertexInputState()
                : VkPipelineVertexInputStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
            }
            const VkPipelineVertexInputStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineVertexInputStateCreateInfo::pNext;
            using VkPipelineVertexInputStateCreateInfo::flags;
            using VkPipelineVertexInputStateCreateInfo::vertexBindingDescriptionCount;
            using VkPipelineVertexInputStateCreateInfo::pVertexBindingDescriptions;
            using VkPipelineVertexInputStateCreateInfo::vertexAttributeDescriptionCount;
            using VkPipelineVertexInputStateCreateInfo::pVertexAttributeDescriptions;
        };

        struct InputAssemblyState final : private VkPipelineInputAssemblyStateCreateInfo {
            InputAssemblyState()
                : VkPipelineInputAssemblyStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
            }
            const VkPipelineInputAssemblyStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineInputAssemblyStateCreateInfo::pNext;
            using VkPipelineInputAssemblyStateCreateInfo::flags;
            using VkPipelineInputAssemblyStateCreateInfo::topology;
            using VkPipelineInputAssemblyStateCreateInfo::primitiveRestartEnable;
        };

        struct TessellationState final : private VkPipelineTessellationStateCreateInfo {
            TessellationState()
                : VkPipelineTessellationStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
            }
            const VkPipelineTessellationStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineTessellationStateCreateInfo::pNext;
            using VkPipelineTessellationStateCreateInfo::flags;
            using VkPipelineTessellationStateCreateInfo::patchControlPoints;
        };

        struct ViewportState final : private VkPipelineViewportStateCreateInfo {
            ViewportState()
                : VkPipelineViewportStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
            }
            const VkPipelineViewportStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineViewportStateCreateInfo::pNext;
            using VkPipelineViewportStateCreateInfo::flags;
            using VkPipelineViewportStateCreateInfo::viewportCount;
            using VkPipelineViewportStateCreateInfo::pViewports;
            using VkPipelineViewportStateCreateInfo::scissorCount;
            using VkPipelineViewportStateCreateInfo::pScissors;
        };

        struct RasterizationState final : private VkPipelineRasterizationStateCreateInfo {
            RasterizationState()
                : VkPipelineRasterizationStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
            }
            const VkPipelineRasterizationStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineRasterizationStateCreateInfo::pNext;
            using VkPipelineRasterizationStateCreateInfo::flags;
            using VkPipelineRasterizationStateCreateInfo::depthClampEnable;
            using VkPipelineRasterizationStateCreateInfo::rasterizerDiscardEnable;
            using VkPipelineRasterizationStateCreateInfo::polygonMode;
            using VkPipelineRasterizationStateCreateInfo::cullMode;
            using VkPipelineRasterizationStateCreateInfo::frontFace;
            using VkPipelineRasterizationStateCreateInfo::depthBiasEnable;
            using VkPipelineRasterizationStateCreateInfo::depthBiasConstantFactor;
            using VkPipelineRasterizationStateCreateInfo::depthBiasClamp;
            using VkPipelineRasterizationStateCreateInfo::depthBiasSlopeFactor;
            using VkPipelineRasterizationStateCreateInfo::lineWidth;
        };

        struct MultisampleState final : private VkPipelineMultisampleStateCreateInfo {
            MultisampleState()
                    : VkPipelineMultisampleStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
            }
            const VkPipelineMultisampleStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineMultisampleStateCreateInfo::pNext;
            using VkPipelineMultisampleStateCreateInfo::flags;
            using VkPipelineMultisampleStateCreateInfo::rasterizationSamples;
            using VkPipelineMultisampleStateCreateInfo::sampleShadingEnable;
            using VkPipelineMultisampleStateCreateInfo::minSampleShading;
            using VkPipelineMultisampleStateCreateInfo::pSampleMask;
            using VkPipelineMultisampleStateCreateInfo::alphaToCoverageEnable;
            using VkPipelineMultisampleStateCreateInfo::alphaToOneEnable;
        };

        struct DepthStencilState final : private VkPipelineDepthStencilStateCreateInfo {
            DepthStencilState()
                    : VkPipelineDepthStencilStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
            }

            const VkPipelineDepthStencilStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineDepthStencilStateCreateInfo::pNext;
            using VkPipelineDepthStencilStateCreateInfo::flags;
            using VkPipelineDepthStencilStateCreateInfo::depthTestEnable;
            using VkPipelineDepthStencilStateCreateInfo::depthWriteEnable;
            using VkPipelineDepthStencilStateCreateInfo::depthCompareOp;
            using VkPipelineDepthStencilStateCreateInfo::depthBoundsTestEnable;
            using VkPipelineDepthStencilStateCreateInfo::stencilTestEnable;
            using VkPipelineDepthStencilStateCreateInfo::front;
            using VkPipelineDepthStencilStateCreateInfo::back;
            using VkPipelineDepthStencilStateCreateInfo::minDepthBounds;
            using VkPipelineDepthStencilStateCreateInfo::maxDepthBounds;
        };

        struct ColorBlendState final : private VkPipelineColorBlendStateCreateInfo {
            ColorBlendState()
                    : VkPipelineColorBlendStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
            }
            const VkPipelineColorBlendStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineColorBlendStateCreateInfo::pNext;
            using VkPipelineColorBlendStateCreateInfo::flags;
            using VkPipelineColorBlendStateCreateInfo::logicOpEnable;
            using VkPipelineColorBlendStateCreateInfo::logicOp;
            using VkPipelineColorBlendStateCreateInfo::attachmentCount;
            using VkPipelineColorBlendStateCreateInfo::pAttachments;
            using VkPipelineColorBlendStateCreateInfo::blendConstants;
        };

        struct DynamicState final : private VkPipelineDynamicStateCreateInfo {
            DynamicState()
                    : VkPipelineDynamicStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
            }

            const VkPipelineDynamicStateCreateInfo &getBase() const { return *this; }

        public:
            //using VkPipelineDynamicStateCreateInfo::pNext;
            using VkPipelineDynamicStateCreateInfo::flags;
            using VkPipelineDynamicStateCreateInfo::dynamicStateCount;
            using VkPipelineDynamicStateCreateInfo::pDynamicStates;
        };


    };//class Pipeline

}//namespace HLGK