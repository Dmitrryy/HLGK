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

    class PipelineLayout final {
        const LogicalDevice &m_device;
        VkPipelineLayout m_layout = {};

        friend GraphicsPipeline;

    public:
        PipelineLayout(const LogicalDevice &device, const std::vector<VkDescriptorSetLayout> &setLayouts = {},
                       const std::vector<VkPushConstantRange> &pushConstantRanges = {},
                       VkPipelineLayoutCreateFlags flags = 0);
        ~PipelineLayout();
    };//class PipelineLayout


    struct GraphicsPipelineCreateInfo : public VkGraphicsPipelineCreateInfo {
        GraphicsPipelineCreateInfo()
                : VkGraphicsPipelineCreateInfo{} {
            sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
        }
        const VkGraphicsPipelineCreateInfo &getBase() const { return *this; }

    private:
        friend GraphicsPipeline;

        using VkGraphicsPipelineCreateInfo::layout;
        using VkGraphicsPipelineCreateInfo::renderPass;

        using VkGraphicsPipelineCreateInfo::sType;
        //Информация о шейерах берется непосредственно из классов Shader, переданных в конструктор
        using VkGraphicsPipelineCreateInfo::stageCount;
        using VkGraphicsPipelineCreateInfo::pStages;
    };


    class GraphicsPipeline {
        const LogicalDevice &m_device;
        VkPipeline m_pipeline = {};

    public:
        GraphicsPipeline(const LogicalDevice &device
                         , GraphicsPipelineCreateInfo &createInfo
                         , const PipelineLayout &layout
                         , const RenderPass &renderPass
                         , const std::vector<Shader *> &shaders);
        ~GraphicsPipeline();

    public:
        //FIXME пока без удаления по указателю на базовый класс
        struct VertexInputState final : public VkPipelineVertexInputStateCreateInfo {
            VertexInputState()
                : VkPipelineVertexInputStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
            }
            const VkPipelineVertexInputStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineVertexInputStateCreateInfo::sType;
        };

        struct InputAssemblyState final : public VkPipelineInputAssemblyStateCreateInfo {
            InputAssemblyState()
                : VkPipelineInputAssemblyStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
            }
            const VkPipelineInputAssemblyStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineInputAssemblyStateCreateInfo::sType;
        };

        struct TessellationState final : public VkPipelineTessellationStateCreateInfo {
            TessellationState()
                : VkPipelineTessellationStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
            }
            const VkPipelineTessellationStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineTessellationStateCreateInfo::sType;
        };

        struct ViewportState final : public VkPipelineViewportStateCreateInfo {
            ViewportState()
                : VkPipelineViewportStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
            }
            const VkPipelineViewportStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineViewportStateCreateInfo::sType;
        };

        struct RasterizationState final : public VkPipelineRasterizationStateCreateInfo {
            RasterizationState()
                : VkPipelineRasterizationStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
            }
            const VkPipelineRasterizationStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineRasterizationStateCreateInfo::sType;
        };

        struct MultisampleState final : VkPipelineMultisampleStateCreateInfo {
            MultisampleState()
                    : VkPipelineMultisampleStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
            }
            const VkPipelineMultisampleStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineMultisampleStateCreateInfo::sType;
        };

        struct DepthStencilState final : public VkPipelineDepthStencilStateCreateInfo {
            DepthStencilState()
                    : VkPipelineDepthStencilStateCreateInfo{} {}

            const VkPipelineDepthStencilStateCreateInfo &getBase() const { return *this; }
        };

        struct ColorBlendState final : public VkPipelineColorBlendStateCreateInfo {
            ColorBlendState()
                    : VkPipelineColorBlendStateCreateInfo{} {
                sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
            }
            const VkPipelineColorBlendStateCreateInfo &getBase() const { return *this; }

        private:
            using VkPipelineColorBlendStateCreateInfo::sType;
        };

        struct DynamicState final : public VkPipelineDynamicStateCreateInfo {
            DynamicState()
                    : VkPipelineDynamicStateCreateInfo{} {}

            const VkPipelineDynamicStateCreateInfo &getBase() const { return *this; }
        };


    };//class Pipeline

}//namespace HLGK