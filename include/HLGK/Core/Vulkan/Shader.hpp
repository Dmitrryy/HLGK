//
// Created by dadro on 01.03.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <vector>
#include <string>

namespace HLGK {

    class LogicalDevice;
    class Shader;
    class GraphicsPipeline;

    //TODO VkSpecializationInfo
    //https://www.khronos.org/registry/vulkan/specs/1.3-extensions/html/vkspec.html#pipelines-specialization-constants
    struct ShaderStage final {
        VkShaderStageFlagBits stage = {};
        std::string entryPointName;
        VkPipelineShaderStageCreateFlags flags = 0;
    };


    class Shader final {
        const LogicalDevice &m_device;
        VkShaderModule m_module = {};
        std::vector<char> m_code;

        std::vector<VkPipelineShaderStageCreateInfo> m_stages;
        std::vector< std::string > m_entryPointNames;

    public:
        Shader(const LogicalDevice &device, std::vector<char> code, VkShaderModuleCreateFlags flags = 0);
        ~Shader();



    public:
        void addStage(const ShaderStage &stage);
        void clearStages();
        void setStages(const std::vector<ShaderStage> &stages);

    protected:
        friend GraphicsPipeline;
        const std::vector<VkPipelineShaderStageCreateInfo> &getStages() const { return m_stages; }
    };

}//namespace HLGK