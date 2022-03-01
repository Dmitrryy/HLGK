//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/Pipeline.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>


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


}//namespace HLGK