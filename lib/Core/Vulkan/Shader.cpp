//
// Created by dadro on 01.03.2022.
//

#include <HLGK/Core/Vulkan/Shader.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <utility>

namespace HLGK {

    Shader::Shader(const LogicalDevice &device, std::vector<char> code, VkShaderModuleCreateFlags flags /*= 0*/)
        : m_device(&device)
        , m_code(std::move(code)) {
        VkShaderModuleCreateInfo createInfo = {};
        createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        createInfo.codeSize = m_code.size();
        createInfo.pCode = reinterpret_cast<const uint32_t*>(m_code.data());
        createInfo.flags = flags;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateShaderModule, &createInfo, nullptr, &m_module));
    }

    Shader::~Shader() {
        callDeviceProcAddr(*m_device, vkDestroyShaderModule, m_module, nullptr);
    }

    void Shader::addStage(const ShaderStage &stage) {
        m_entryPointNames.emplace_back(stage.entryPointName);

        VkPipelineShaderStageCreateInfo shaderStageInfo{};
        shaderStageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        shaderStageInfo.stage = stage.stage;
        shaderStageInfo.module = m_module;
        shaderStageInfo.pName = m_entryPointNames.back().c_str();
        shaderStageInfo.flags = stage.flags;

        m_stages.push_back(shaderStageInfo);
    }

    void Shader::clearStages() {
        m_entryPointNames.clear();
        m_stages.clear();
    }

    void Shader::setStages(const std::vector<ShaderStage> &stages) {
        clearStages();
        m_entryPointNames.reserve(stages.size());
        m_stages.reserve(stages.size());
        std::for_each(stages.begin(), stages.end(), [this](const ShaderStage &stage) {
            addStage(stage);
        });
    }

}//namespace HLGK