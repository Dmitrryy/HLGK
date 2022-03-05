//
// Created by dadro on 04.03.2022.
//
#pragma once

#include <HLGK/Core/Vulkan/Utils.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class LogicalDevice;
    class CommandPool;
    class RenderPass;
    class Framebuffer;
    class GraphicsPipeline;
    class Queue;

    class CommandBuffer final {
        const LogicalDevice *m_device = {};
        VkCommandBuffer m_commandBuffer = {};

        friend Queue;

    protected:
        friend CommandPool;
        CommandBuffer(const LogicalDevice &device, VkCommandBuffer buff);

    public:
        CommandBuffer() noexcept = default;

        CommandBuffer(const LogicalDevice &device, const CommandPool &pool, VkCommandBufferLevel level);

    public:
        bool isCreated() const { return m_device && m_commandBuffer; }

        void beginRenderPass(const RenderPass &renderPass, const Framebuffer &framebuffer
                             , const VkRect2D &renderArea, const std::vector<VkClearValue> &clearValues, VkSubpassContents contents) const;
        void endRenderPass() const;

        void bindPipeline(const GraphicsPipeline &pipeline, VkPipelineBindPoint bindPoint) const;
        void draw(uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) const;



        /// allows calling functions that use a pointer to an command buffer
        /// \tparam Func_T The type of function to which the pointer will be brought
        /// \tparam T The type of the received function pointer
        /// \tparam Args_T Types of arguments passed to the function
        /// \param f Pointer to the function being called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename T, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddr(T f, Args_T &&...args) const {
            // Checking whether the first argument is a command buffer
            static_assert(std::is_same_v< VkCommandBuffer, details::function_info_T0< Func_T > >
                    , "Function that does not accept a command buffer as the first argument is not supported");
            return reinterpret_cast<Func_T>(f)(m_commandBuffer, std::forward<Args_T>(args)...);
        }

        /// Combination of getProcAddr and callProcAddr.
        /// \param fName function name, which will be called
        /// \param args Arguments passed to the function
        /// \return returns the result of the function being called
        template< typename Func_T, typename ... Args_T>
        inline details::function_info_rt<Func_T> callProcAddrName(const std::string &fName, Args_T &&...args) const {
            return callProcAddr<Func_T>(m_device->getProcAddr<Func_T>(fName), std::forward<Args_T>(args)...)  ;
        }
    };

}//namespace HLGK