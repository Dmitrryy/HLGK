#pragma once

#include <vulkan/vulkan.h>
#include <memory>
#include <HLGK/Core/Vulkan/ExtensionBase.hpp>
namespace HLGK {

#if defined(VK_EXT_discard_rectangles)

class VkExtDiscardRectangles final : public DeviceExtensionBase { 
public:
    VkExtDiscardRectangles() = default;
    VkExtDiscardRectangles(VkDevice handler);

    std::string name() const override { return "VK_EXT_discard_rectangles"; }
    static std::string str() { return "VK_EXT_discard_rectangles"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT = {};
};//class VkExtDiscardRectangles

#endif //VK_EXT_discard_rectangles

#if defined(VK_EXT_conservative_rasterization)

class VkExtConservativeRasterization final : public DeviceExtensionBase { 
public:
    VkExtConservativeRasterization() = default;
    VkExtConservativeRasterization(VkDevice handler);

    std::string name() const override { return "VK_EXT_conservative_rasterization"; }
    static std::string str() { return "VK_EXT_conservative_rasterization"; }
    void init(VkDevice handler) override;
public:
};//class VkExtConservativeRasterization

#endif //VK_EXT_conservative_rasterization

#if defined(VK_EXT_depth_clip_enable)

class VkExtDepthClipEnable final : public DeviceExtensionBase { 
public:
    VkExtDepthClipEnable() = default;
    VkExtDepthClipEnable(VkDevice handler);

    std::string name() const override { return "VK_EXT_depth_clip_enable"; }
    static std::string str() { return "VK_EXT_depth_clip_enable"; }
    void init(VkDevice handler) override;
public:
};//class VkExtDepthClipEnable

#endif //VK_EXT_depth_clip_enable

#if defined(VK_EXT_hdr_metadata)

class VkExtHdrMetadata final : public DeviceExtensionBase { 
public:
    VkExtHdrMetadata() = default;
    VkExtHdrMetadata(VkDevice handler);

    std::string name() const override { return "VK_EXT_hdr_metadata"; }
    static std::string str() { return "VK_EXT_hdr_metadata"; }
    void init(VkDevice handler) override;
public:
    PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT = {};
};//class VkExtHdrMetadata

#endif //VK_EXT_hdr_metadata

#if defined(VK_KHR_imageless_framebuffer)

class VkKhrImagelessFramebuffer final : public DeviceExtensionBase { 
public:
    VkKhrImagelessFramebuffer() = default;
    VkKhrImagelessFramebuffer(VkDevice handler);

    std::string name() const override { return "VK_KHR_imageless_framebuffer"; }
    static std::string str() { return "VK_KHR_imageless_framebuffer"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrImagelessFramebuffer

#endif //VK_KHR_imageless_framebuffer

#if defined(VK_ANDROID_native_buffer)

class VkAndroidNativeBuffer final : public DeviceExtensionBase { 
public:
    VkAndroidNativeBuffer() = default;
    VkAndroidNativeBuffer(VkDevice handler);

    std::string name() const override { return "VK_ANDROID_native_buffer"; }
    static std::string str() { return "VK_ANDROID_native_buffer"; }
    void init(VkDevice handler) override;
public:
    PFN_vkQueueSignalReleaseImageANDROID vkQueueSignalReleaseImageANDROID = {};
    PFN_vkAcquireImageANDROID vkAcquireImageANDROID = {};
    PFN_vkGetSwapchainGrallocUsage2ANDROID vkGetSwapchainGrallocUsage2ANDROID = {};
    PFN_vkGetSwapchainGrallocUsageANDROID vkGetSwapchainGrallocUsageANDROID = {};
};//class VkAndroidNativeBuffer

#endif //VK_ANDROID_native_buffer

#if defined(VK_KHR_create_renderpass2)

class VkKhrCreateRenderpass2 final : public DeviceExtensionBase { 
public:
    VkKhrCreateRenderpass2() = default;
    VkKhrCreateRenderpass2(VkDevice handler);

    std::string name() const override { return "VK_KHR_create_renderpass2"; }
    static std::string str() { return "VK_KHR_create_renderpass2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR = {};
    PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR = {};
    PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR = {};
    PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR = {};
};//class VkKhrCreateRenderpass2

#endif //VK_KHR_create_renderpass2

#if defined(VK_KHR_shared_presentable_image)

class VkKhrSharedPresentableImage final : public DeviceExtensionBase { 
public:
    VkKhrSharedPresentableImage() = default;
    VkKhrSharedPresentableImage(VkDevice handler);

    std::string name() const override { return "VK_KHR_shared_presentable_image"; }
    static std::string str() { return "VK_KHR_shared_presentable_image"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR = {};
};//class VkKhrSharedPresentableImage

#endif //VK_KHR_shared_presentable_image

#if defined(VK_KHR_external_fence)

class VkKhrExternalFence final : public DeviceExtensionBase { 
public:
    VkKhrExternalFence() = default;
    VkKhrExternalFence(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_fence"; }
    static std::string str() { return "VK_KHR_external_fence"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExternalFence

#endif //VK_KHR_external_fence

#if defined(VK_KHR_external_fence_win32)

class VkKhrExternalFenceWin32 final : public DeviceExtensionBase { 
public:
    VkKhrExternalFenceWin32() = default;
    VkKhrExternalFenceWin32(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_fence_win32"; }
    static std::string str() { return "VK_KHR_external_fence_win32"; }
    void init(VkDevice handler) override;
public:
    PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR = {};
    PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR = {};
};//class VkKhrExternalFenceWin32

#endif //VK_KHR_external_fence_win32

#if defined(VK_KHR_external_fence_fd)

class VkKhrExternalFenceFd final : public DeviceExtensionBase { 
public:
    VkKhrExternalFenceFd() = default;
    VkKhrExternalFenceFd(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_fence_fd"; }
    static std::string str() { return "VK_KHR_external_fence_fd"; }
    void init(VkDevice handler) override;
public:
    PFN_vkImportFenceFdKHR vkImportFenceFdKHR = {};
    PFN_vkGetFenceFdKHR vkGetFenceFdKHR = {};
};//class VkKhrExternalFenceFd

#endif //VK_KHR_external_fence_fd

#if defined(VK_KHR_performance_query)

class VkKhrPerformanceQuery final : public DeviceExtensionBase { 
public:
    VkKhrPerformanceQuery() = default;
    VkKhrPerformanceQuery(VkDevice handler);

    std::string name() const override { return "VK_KHR_performance_query"; }
    static std::string str() { return "VK_KHR_performance_query"; }
    void init(VkDevice handler) override;
public:
    PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = {};
    PFN_vkAcquireProfilingLockKHR vkAcquireProfilingLockKHR = {};
    PFN_vkReleaseProfilingLockKHR vkReleaseProfilingLockKHR = {};
    PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = {};
};//class VkKhrPerformanceQuery

#endif //VK_KHR_performance_query

#if defined(VK_KHR_maintenance2)

class VkKhrMaintenance2 final : public DeviceExtensionBase { 
public:
    VkKhrMaintenance2() = default;
    VkKhrMaintenance2(VkDevice handler);

    std::string name() const override { return "VK_KHR_maintenance2"; }
    static std::string str() { return "VK_KHR_maintenance2"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrMaintenance2

#endif //VK_KHR_maintenance2

#if defined(VK_KHR_variable_pointers)

class VkKhrVariablePointers final : public DeviceExtensionBase { 
public:
    VkKhrVariablePointers() = default;
    VkKhrVariablePointers(VkDevice handler);

    std::string name() const override { return "VK_KHR_variable_pointers"; }
    static std::string str() { return "VK_KHR_variable_pointers"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrVariablePointers

#endif //VK_KHR_variable_pointers

#if defined(VK_EXT_external_memory_dma_buf)

class VkExtExternalMemoryDmaBuf final : public DeviceExtensionBase { 
public:
    VkExtExternalMemoryDmaBuf() = default;
    VkExtExternalMemoryDmaBuf(VkDevice handler);

    std::string name() const override { return "VK_EXT_external_memory_dma_buf"; }
    static std::string str() { return "VK_EXT_external_memory_dma_buf"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExternalMemoryDmaBuf

#endif //VK_EXT_external_memory_dma_buf

#if defined(VK_EXT_queue_family_foreign)

class VkExtQueueFamilyForeign final : public DeviceExtensionBase { 
public:
    VkExtQueueFamilyForeign() = default;
    VkExtQueueFamilyForeign(VkDevice handler);

    std::string name() const override { return "VK_EXT_queue_family_foreign"; }
    static std::string str() { return "VK_EXT_queue_family_foreign"; }
    void init(VkDevice handler) override;
public:
};//class VkExtQueueFamilyForeign

#endif //VK_EXT_queue_family_foreign

#if defined(VK_KHR_dedicated_allocation)

class VkKhrDedicatedAllocation final : public DeviceExtensionBase { 
public:
    VkKhrDedicatedAllocation() = default;
    VkKhrDedicatedAllocation(VkDevice handler);

    std::string name() const override { return "VK_KHR_dedicated_allocation"; }
    static std::string str() { return "VK_KHR_dedicated_allocation"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrDedicatedAllocation

#endif //VK_KHR_dedicated_allocation

#if defined(VK_NV_glsl_shader)

class VkNvGlslShader final : public DeviceExtensionBase { 
public:
    VkNvGlslShader() = default;
    VkNvGlslShader(VkDevice handler);

    std::string name() const override { return "VK_NV_glsl_shader"; }
    static std::string str() { return "VK_NV_glsl_shader"; }
    void init(VkDevice handler) override;
public:
};//class VkNvGlslShader

#endif //VK_NV_glsl_shader

#if defined(VK_ANDROID_external_memory_android_hardware_buffer)

class VkAndroidExternalMemoryAndroidHardwareBuffer final : public DeviceExtensionBase { 
public:
    VkAndroidExternalMemoryAndroidHardwareBuffer() = default;
    VkAndroidExternalMemoryAndroidHardwareBuffer(VkDevice handler);

    std::string name() const override { return "VK_ANDROID_external_memory_android_hardware_buffer"; }
    static std::string str() { return "VK_ANDROID_external_memory_android_hardware_buffer"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryAndroidHardwareBufferANDROID vkGetMemoryAndroidHardwareBufferANDROID = {};
    PFN_vkGetAndroidHardwareBufferPropertiesANDROID vkGetAndroidHardwareBufferPropertiesANDROID = {};
};//class VkAndroidExternalMemoryAndroidHardwareBuffer

#endif //VK_ANDROID_external_memory_android_hardware_buffer

#if defined(VK_EXT_sampler_filter_minmax)

class VkExtSamplerFilterMinmax final : public DeviceExtensionBase { 
public:
    VkExtSamplerFilterMinmax() = default;
    VkExtSamplerFilterMinmax(VkDevice handler);

    std::string name() const override { return "VK_EXT_sampler_filter_minmax"; }
    static std::string str() { return "VK_EXT_sampler_filter_minmax"; }
    void init(VkDevice handler) override;
public:
};//class VkExtSamplerFilterMinmax

#endif //VK_EXT_sampler_filter_minmax

#if defined(VK_KHR_storage_buffer_storage_class)

class VkKhrStorageBufferStorageClass final : public DeviceExtensionBase { 
public:
    VkKhrStorageBufferStorageClass() = default;
    VkKhrStorageBufferStorageClass(VkDevice handler);

    std::string name() const override { return "VK_KHR_storage_buffer_storage_class"; }
    static std::string str() { return "VK_KHR_storage_buffer_storage_class"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrStorageBufferStorageClass

#endif //VK_KHR_storage_buffer_storage_class

#if defined(VK_AMD_gpu_shader_int16)

class VkAmdGpuShaderInt16 final : public DeviceExtensionBase { 
public:
    VkAmdGpuShaderInt16() = default;
    VkAmdGpuShaderInt16(VkDevice handler);

    std::string name() const override { return "VK_AMD_gpu_shader_int16"; }
    static std::string str() { return "VK_AMD_gpu_shader_int16"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdGpuShaderInt16

#endif //VK_AMD_gpu_shader_int16

#if defined(VK_AMD_mixed_attachment_samples)

class VkAmdMixedAttachmentSamples final : public DeviceExtensionBase { 
public:
    VkAmdMixedAttachmentSamples() = default;
    VkAmdMixedAttachmentSamples(VkDevice handler);

    std::string name() const override { return "VK_AMD_mixed_attachment_samples"; }
    static std::string str() { return "VK_AMD_mixed_attachment_samples"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdMixedAttachmentSamples

#endif //VK_AMD_mixed_attachment_samples

#if defined(VK_AMD_shader_fragment_mask)

class VkAmdShaderFragmentMask final : public DeviceExtensionBase { 
public:
    VkAmdShaderFragmentMask() = default;
    VkAmdShaderFragmentMask(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_fragment_mask"; }
    static std::string str() { return "VK_AMD_shader_fragment_mask"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderFragmentMask

#endif //VK_AMD_shader_fragment_mask

#if defined(VK_EXT_inline_uniform_block)

class VkExtInlineUniformBlock final : public DeviceExtensionBase { 
public:
    VkExtInlineUniformBlock() = default;
    VkExtInlineUniformBlock(VkDevice handler);

    std::string name() const override { return "VK_EXT_inline_uniform_block"; }
    static std::string str() { return "VK_EXT_inline_uniform_block"; }
    void init(VkDevice handler) override;
public:
};//class VkExtInlineUniformBlock

#endif //VK_EXT_inline_uniform_block

#if defined(VK_EXT_depth_range_unrestricted)

class VkExtDepthRangeUnrestricted final : public DeviceExtensionBase { 
public:
    VkExtDepthRangeUnrestricted() = default;
    VkExtDepthRangeUnrestricted(VkDevice handler);

    std::string name() const override { return "VK_EXT_depth_range_unrestricted"; }
    static std::string str() { return "VK_EXT_depth_range_unrestricted"; }
    void init(VkDevice handler) override;
public:
};//class VkExtDepthRangeUnrestricted

#endif //VK_EXT_depth_range_unrestricted

#if defined(VK_EXT_shader_stencil_export)

class VkExtShaderStencilExport final : public DeviceExtensionBase { 
public:
    VkExtShaderStencilExport() = default;
    VkExtShaderStencilExport(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_stencil_export"; }
    static std::string str() { return "VK_EXT_shader_stencil_export"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderStencilExport

#endif //VK_EXT_shader_stencil_export

#if defined(VK_EXT_sample_locations)

class VkExtSampleLocations final : public DeviceExtensionBase { 
public:
    VkExtSampleLocations() = default;
    VkExtSampleLocations(VkDevice handler);

    std::string name() const override { return "VK_EXT_sample_locations"; }
    static std::string str() { return "VK_EXT_sample_locations"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT vkGetPhysicalDeviceMultisamplePropertiesEXT = {};
    PFN_vkCmdSetSampleLocationsEXT vkCmdSetSampleLocationsEXT = {};
};//class VkExtSampleLocations

#endif //VK_EXT_sample_locations

#if defined(VK_KHR_relaxed_block_layout)

class VkKhrRelaxedBlockLayout final : public DeviceExtensionBase { 
public:
    VkKhrRelaxedBlockLayout() = default;
    VkKhrRelaxedBlockLayout(VkDevice handler);

    std::string name() const override { return "VK_KHR_relaxed_block_layout"; }
    static std::string str() { return "VK_KHR_relaxed_block_layout"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrRelaxedBlockLayout

#endif //VK_KHR_relaxed_block_layout

#if defined(VK_KHR_get_memory_requirements2)

class VkKhrGetMemoryRequirements2 final : public DeviceExtensionBase { 
public:
    VkKhrGetMemoryRequirements2() = default;
    VkKhrGetMemoryRequirements2(VkDevice handler);

    std::string name() const override { return "VK_KHR_get_memory_requirements2"; }
    static std::string str() { return "VK_KHR_get_memory_requirements2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetBufferMemoryRequirements2KHR vkGetBufferMemoryRequirements2KHR = {};
    PFN_vkGetImageMemoryRequirements2KHR vkGetImageMemoryRequirements2KHR = {};
    PFN_vkGetImageSparseMemoryRequirements2KHR vkGetImageSparseMemoryRequirements2KHR = {};
};//class VkKhrGetMemoryRequirements2

#endif //VK_KHR_get_memory_requirements2

#if defined(VK_KHR_image_format_list)

class VkKhrImageFormatList final : public DeviceExtensionBase { 
public:
    VkKhrImageFormatList() = default;
    VkKhrImageFormatList(VkDevice handler);

    std::string name() const override { return "VK_KHR_image_format_list"; }
    static std::string str() { return "VK_KHR_image_format_list"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrImageFormatList

#endif //VK_KHR_image_format_list

#if defined(VK_EXT_blend_operation_advanced)

class VkExtBlendOperationAdvanced final : public DeviceExtensionBase { 
public:
    VkExtBlendOperationAdvanced() = default;
    VkExtBlendOperationAdvanced(VkDevice handler);

    std::string name() const override { return "VK_EXT_blend_operation_advanced"; }
    static std::string str() { return "VK_EXT_blend_operation_advanced"; }
    void init(VkDevice handler) override;
public:
};//class VkExtBlendOperationAdvanced

#endif //VK_EXT_blend_operation_advanced

#if defined(VK_KHR_sampler_mirror_clamp_to_edge)

class VkKhrSamplerMirrorClampToEdge final : public DeviceExtensionBase { 
public:
    VkKhrSamplerMirrorClampToEdge() = default;
    VkKhrSamplerMirrorClampToEdge(VkDevice handler);

    std::string name() const override { return "VK_KHR_sampler_mirror_clamp_to_edge"; }
    static std::string str() { return "VK_KHR_sampler_mirror_clamp_to_edge"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrSamplerMirrorClampToEdge

#endif //VK_KHR_sampler_mirror_clamp_to_edge

#if defined(VK_NV_fragment_coverage_to_color)

class VkNvFragmentCoverageToColor final : public DeviceExtensionBase { 
public:
    VkNvFragmentCoverageToColor() = default;
    VkNvFragmentCoverageToColor(VkDevice handler);

    std::string name() const override { return "VK_NV_fragment_coverage_to_color"; }
    static std::string str() { return "VK_NV_fragment_coverage_to_color"; }
    void init(VkDevice handler) override;
public:
};//class VkNvFragmentCoverageToColor

#endif //VK_NV_fragment_coverage_to_color

#if defined(VK_KHR_acceleration_structure)

class VkKhrAccelerationStructure final : public DeviceExtensionBase { 
public:
    VkKhrAccelerationStructure() = default;
    VkKhrAccelerationStructure(VkDevice handler);

    std::string name() const override { return "VK_KHR_acceleration_structure"; }
    static std::string str() { return "VK_KHR_acceleration_structure"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdCopyMemoryToAccelerationStructureKHR vkCmdCopyMemoryToAccelerationStructureKHR = {};
    PFN_vkDestroyAccelerationStructureKHR vkDestroyAccelerationStructureKHR = {};
    PFN_vkGetAccelerationStructureBuildSizesKHR vkGetAccelerationStructureBuildSizesKHR = {};
    PFN_vkCopyAccelerationStructureKHR vkCopyAccelerationStructureKHR = {};
    PFN_vkGetDeviceAccelerationStructureCompatibilityKHR vkGetDeviceAccelerationStructureCompatibilityKHR = {};
    PFN_vkCreateAccelerationStructureKHR vkCreateAccelerationStructureKHR = {};
    PFN_vkGetAccelerationStructureDeviceAddressKHR vkGetAccelerationStructureDeviceAddressKHR = {};
    PFN_vkCopyAccelerationStructureToMemoryKHR vkCopyAccelerationStructureToMemoryKHR = {};
    PFN_vkCmdCopyAccelerationStructureKHR vkCmdCopyAccelerationStructureKHR = {};
    PFN_vkBuildAccelerationStructuresKHR vkBuildAccelerationStructuresKHR = {};
    PFN_vkCmdBuildAccelerationStructuresKHR vkCmdBuildAccelerationStructuresKHR = {};
    PFN_vkCmdWriteAccelerationStructuresPropertiesKHR vkCmdWriteAccelerationStructuresPropertiesKHR = {};
    PFN_vkCmdBuildAccelerationStructuresIndirectKHR vkCmdBuildAccelerationStructuresIndirectKHR = {};
    PFN_vkCmdCopyAccelerationStructureToMemoryKHR vkCmdCopyAccelerationStructureToMemoryKHR = {};
    PFN_vkCopyMemoryToAccelerationStructureKHR vkCopyMemoryToAccelerationStructureKHR = {};
    PFN_vkWriteAccelerationStructuresPropertiesKHR vkWriteAccelerationStructuresPropertiesKHR = {};
};//class VkKhrAccelerationStructure

#endif //VK_KHR_acceleration_structure

#if defined(VK_NV_framebuffer_mixed_samples)

class VkNvFramebufferMixedSamples final : public DeviceExtensionBase { 
public:
    VkNvFramebufferMixedSamples() = default;
    VkNvFramebufferMixedSamples(VkDevice handler);

    std::string name() const override { return "VK_NV_framebuffer_mixed_samples"; }
    static std::string str() { return "VK_NV_framebuffer_mixed_samples"; }
    void init(VkDevice handler) override;
public:
};//class VkNvFramebufferMixedSamples

#endif //VK_NV_framebuffer_mixed_samples

#if defined(VK_NV_fill_rectangle)

class VkNvFillRectangle final : public DeviceExtensionBase { 
public:
    VkNvFillRectangle() = default;
    VkNvFillRectangle(VkDevice handler);

    std::string name() const override { return "VK_NV_fill_rectangle"; }
    static std::string str() { return "VK_NV_fill_rectangle"; }
    void init(VkDevice handler) override;
public:
};//class VkNvFillRectangle

#endif //VK_NV_fill_rectangle

#if defined(VK_NV_shader_sm_builtins)

class VkNvShaderSmBuiltins final : public DeviceExtensionBase { 
public:
    VkNvShaderSmBuiltins() = default;
    VkNvShaderSmBuiltins(VkDevice handler);

    std::string name() const override { return "VK_NV_shader_sm_builtins"; }
    static std::string str() { return "VK_NV_shader_sm_builtins"; }
    void init(VkDevice handler) override;
public:
};//class VkNvShaderSmBuiltins

#endif //VK_NV_shader_sm_builtins

#if defined(VK_EXT_post_depth_coverage)

class VkExtPostDepthCoverage final : public DeviceExtensionBase { 
public:
    VkExtPostDepthCoverage() = default;
    VkExtPostDepthCoverage(VkDevice handler);

    std::string name() const override { return "VK_EXT_post_depth_coverage"; }
    static std::string str() { return "VK_EXT_post_depth_coverage"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPostDepthCoverage

#endif //VK_EXT_post_depth_coverage

#if defined(VK_KHR_sampler_ycbcr_conversion)

class VkKhrSamplerYcbcrConversion final : public DeviceExtensionBase { 
public:
    VkKhrSamplerYcbcrConversion() = default;
    VkKhrSamplerYcbcrConversion(VkDevice handler);

    std::string name() const override { return "VK_KHR_sampler_ycbcr_conversion"; }
    static std::string str() { return "VK_KHR_sampler_ycbcr_conversion"; }
    void init(VkDevice handler) override;
public:
    PFN_vkDestroySamplerYcbcrConversionKHR vkDestroySamplerYcbcrConversionKHR = {};
    PFN_vkCreateSamplerYcbcrConversionKHR vkCreateSamplerYcbcrConversionKHR = {};
};//class VkKhrSamplerYcbcrConversion

#endif //VK_KHR_sampler_ycbcr_conversion

#if defined(VK_KHR_bind_memory2)

class VkKhrBindMemory2 final : public DeviceExtensionBase { 
public:
    VkKhrBindMemory2() = default;
    VkKhrBindMemory2(VkDevice handler);

    std::string name() const override { return "VK_KHR_bind_memory2"; }
    static std::string str() { return "VK_KHR_bind_memory2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkBindImageMemory2KHR vkBindImageMemory2KHR = {};
    PFN_vkBindBufferMemory2KHR vkBindBufferMemory2KHR = {};
};//class VkKhrBindMemory2

#endif //VK_KHR_bind_memory2

#if defined(VK_EXT_image_drm_format_modifier)

class VkExtImageDrmFormatModifier final : public DeviceExtensionBase { 
public:
    VkExtImageDrmFormatModifier() = default;
    VkExtImageDrmFormatModifier(VkDevice handler);

    std::string name() const override { return "VK_EXT_image_drm_format_modifier"; }
    static std::string str() { return "VK_EXT_image_drm_format_modifier"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetImageDrmFormatModifierPropertiesEXT vkGetImageDrmFormatModifierPropertiesEXT = {};
};//class VkExtImageDrmFormatModifier

#endif //VK_EXT_image_drm_format_modifier

#if defined(VK_IMG_filter_cubic)

class VkImgFilterCubic final : public DeviceExtensionBase { 
public:
    VkImgFilterCubic() = default;
    VkImgFilterCubic(VkDevice handler);

    std::string name() const override { return "VK_IMG_filter_cubic"; }
    static std::string str() { return "VK_IMG_filter_cubic"; }
    void init(VkDevice handler) override;
public:
};//class VkImgFilterCubic

#endif //VK_IMG_filter_cubic

#if defined(VK_EXT_validation_cache)

class VkExtValidationCache final : public DeviceExtensionBase { 
public:
    VkExtValidationCache() = default;
    VkExtValidationCache(VkDevice handler);

    std::string name() const override { return "VK_EXT_validation_cache"; }
    static std::string str() { return "VK_EXT_validation_cache"; }
    void init(VkDevice handler) override;
public:
    PFN_vkMergeValidationCachesEXT vkMergeValidationCachesEXT = {};
    PFN_vkDestroyValidationCacheEXT vkDestroyValidationCacheEXT = {};
    PFN_vkCreateValidationCacheEXT vkCreateValidationCacheEXT = {};
    PFN_vkGetValidationCacheDataEXT vkGetValidationCacheDataEXT = {};
};//class VkExtValidationCache

#endif //VK_EXT_validation_cache

#if defined(VK_EXT_descriptor_indexing)

class VkExtDescriptorIndexing final : public DeviceExtensionBase { 
public:
    VkExtDescriptorIndexing() = default;
    VkExtDescriptorIndexing(VkDevice handler);

    std::string name() const override { return "VK_EXT_descriptor_indexing"; }
    static std::string str() { return "VK_EXT_descriptor_indexing"; }
    void init(VkDevice handler) override;
public:
};//class VkExtDescriptorIndexing

#endif //VK_EXT_descriptor_indexing

#if defined(VK_EXT_shader_viewport_index_layer)

class VkExtShaderViewportIndexLayer final : public DeviceExtensionBase { 
public:
    VkExtShaderViewportIndexLayer() = default;
    VkExtShaderViewportIndexLayer(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_viewport_index_layer"; }
    static std::string str() { return "VK_EXT_shader_viewport_index_layer"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderViewportIndexLayer

#endif //VK_EXT_shader_viewport_index_layer

#if defined(VK_KHR_portability_subset)

class VkKhrPortabilitySubset final : public DeviceExtensionBase { 
public:
    VkKhrPortabilitySubset() = default;
    VkKhrPortabilitySubset(VkDevice handler);

    std::string name() const override { return "VK_KHR_portability_subset"; }
    static std::string str() { return "VK_KHR_portability_subset"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrPortabilitySubset

#endif //VK_KHR_portability_subset

#if defined(VK_NV_shading_rate_image)

class VkNvShadingRateImage final : public DeviceExtensionBase { 
public:
    VkNvShadingRateImage() = default;
    VkNvShadingRateImage(VkDevice handler);

    std::string name() const override { return "VK_NV_shading_rate_image"; }
    static std::string str() { return "VK_NV_shading_rate_image"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetCoarseSampleOrderNV vkCmdSetCoarseSampleOrderNV = {};
    PFN_vkCmdBindShadingRateImageNV vkCmdBindShadingRateImageNV = {};
    PFN_vkCmdSetViewportShadingRatePaletteNV vkCmdSetViewportShadingRatePaletteNV = {};
};//class VkNvShadingRateImage

#endif //VK_NV_shading_rate_image

#if defined(VK_NV_ray_tracing)

class VkNvRayTracing final : public DeviceExtensionBase { 
public:
    VkNvRayTracing() = default;
    VkNvRayTracing(VkDevice handler);

    std::string name() const override { return "VK_NV_ray_tracing"; }
    static std::string str() { return "VK_NV_ray_tracing"; }
    void init(VkDevice handler) override;
public:
    PFN_vkDestroyAccelerationStructureNV vkDestroyAccelerationStructureNV = {};
    PFN_vkCreateRayTracingPipelinesNV vkCreateRayTracingPipelinesNV = {};
    PFN_vkGetRayTracingShaderGroupHandlesNV vkGetRayTracingShaderGroupHandlesNV = {};
    PFN_vkCmdWriteAccelerationStructuresPropertiesNV vkCmdWriteAccelerationStructuresPropertiesNV = {};
    PFN_vkCreateAccelerationStructureNV vkCreateAccelerationStructureNV = {};
    PFN_vkCompileDeferredNV vkCompileDeferredNV = {};
    PFN_vkGetAccelerationStructureHandleNV vkGetAccelerationStructureHandleNV = {};
    PFN_vkGetAccelerationStructureMemoryRequirementsNV vkGetAccelerationStructureMemoryRequirementsNV = {};
    PFN_vkCmdCopyAccelerationStructureNV vkCmdCopyAccelerationStructureNV = {};
    PFN_vkBindAccelerationStructureMemoryNV vkBindAccelerationStructureMemoryNV = {};
    PFN_vkCmdBuildAccelerationStructureNV vkCmdBuildAccelerationStructureNV = {};
    PFN_vkCmdTraceRaysNV vkCmdTraceRaysNV = {};
};//class VkNvRayTracing

#endif //VK_NV_ray_tracing

#if defined(VK_NV_representative_fragment_test)

class VkNvRepresentativeFragmentTest final : public DeviceExtensionBase { 
public:
    VkNvRepresentativeFragmentTest() = default;
    VkNvRepresentativeFragmentTest(VkDevice handler);

    std::string name() const override { return "VK_NV_representative_fragment_test"; }
    static std::string str() { return "VK_NV_representative_fragment_test"; }
    void init(VkDevice handler) override;
public:
};//class VkNvRepresentativeFragmentTest

#endif //VK_NV_representative_fragment_test

#if defined(VK_KHR_maintenance3)

class VkKhrMaintenance3 final : public DeviceExtensionBase { 
public:
    VkKhrMaintenance3() = default;
    VkKhrMaintenance3(VkDevice handler);

    std::string name() const override { return "VK_KHR_maintenance3"; }
    static std::string str() { return "VK_KHR_maintenance3"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetDescriptorSetLayoutSupportKHR vkGetDescriptorSetLayoutSupportKHR = {};
};//class VkKhrMaintenance3

#endif //VK_KHR_maintenance3

#if defined(VK_KHR_draw_indirect_count)

class VkKhrDrawIndirectCount final : public DeviceExtensionBase { 
public:
    VkKhrDrawIndirectCount() = default;
    VkKhrDrawIndirectCount(VkDevice handler);

    std::string name() const override { return "VK_KHR_draw_indirect_count"; }
    static std::string str() { return "VK_KHR_draw_indirect_count"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR = {};
    PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR = {};
};//class VkKhrDrawIndirectCount

#endif //VK_KHR_draw_indirect_count

#if defined(VK_EXT_filter_cubic)

class VkExtFilterCubic final : public DeviceExtensionBase { 
public:
    VkExtFilterCubic() = default;
    VkExtFilterCubic(VkDevice handler);

    std::string name() const override { return "VK_EXT_filter_cubic"; }
    static std::string str() { return "VK_EXT_filter_cubic"; }
    void init(VkDevice handler) override;
public:
};//class VkExtFilterCubic

#endif //VK_EXT_filter_cubic

#if defined(VK_QCOM_render_pass_shader_resolve)

class VkQcomRenderPassShaderResolve final : public DeviceExtensionBase { 
public:
    VkQcomRenderPassShaderResolve() = default;
    VkQcomRenderPassShaderResolve(VkDevice handler);

    std::string name() const override { return "VK_QCOM_render_pass_shader_resolve"; }
    static std::string str() { return "VK_QCOM_render_pass_shader_resolve"; }
    void init(VkDevice handler) override;
public:
};//class VkQcomRenderPassShaderResolve

#endif //VK_QCOM_render_pass_shader_resolve

#if defined(VK_EXT_global_priority)

class VkExtGlobalPriority final : public DeviceExtensionBase { 
public:
    VkExtGlobalPriority() = default;
    VkExtGlobalPriority(VkDevice handler);

    std::string name() const override { return "VK_EXT_global_priority"; }
    static std::string str() { return "VK_EXT_global_priority"; }
    void init(VkDevice handler) override;
public:
};//class VkExtGlobalPriority

#endif //VK_EXT_global_priority

#if defined(VK_KHR_shader_subgroup_extended_types)

class VkKhrShaderSubgroupExtendedTypes final : public DeviceExtensionBase { 
public:
    VkKhrShaderSubgroupExtendedTypes() = default;
    VkKhrShaderSubgroupExtendedTypes(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_subgroup_extended_types"; }
    static std::string str() { return "VK_KHR_shader_subgroup_extended_types"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderSubgroupExtendedTypes

#endif //VK_KHR_shader_subgroup_extended_types

#if defined(VK_KHR_8bit_storage)

class VkKhr8bitStorage final : public DeviceExtensionBase { 
public:
    VkKhr8bitStorage() = default;
    VkKhr8bitStorage(VkDevice handler);

    std::string name() const override { return "VK_KHR_8bit_storage"; }
    static std::string str() { return "VK_KHR_8bit_storage"; }
    void init(VkDevice handler) override;
public:
};//class VkKhr8bitStorage

#endif //VK_KHR_8bit_storage

#if defined(VK_EXT_external_memory_host)

class VkExtExternalMemoryHost final : public DeviceExtensionBase { 
public:
    VkExtExternalMemoryHost() = default;
    VkExtExternalMemoryHost(VkDevice handler);

    std::string name() const override { return "VK_EXT_external_memory_host"; }
    static std::string str() { return "VK_EXT_external_memory_host"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryHostPointerPropertiesEXT vkGetMemoryHostPointerPropertiesEXT = {};
};//class VkExtExternalMemoryHost

#endif //VK_EXT_external_memory_host

#if defined(VK_AMD_buffer_marker)

class VkAmdBufferMarker final : public DeviceExtensionBase { 
public:
    VkAmdBufferMarker() = default;
    VkAmdBufferMarker(VkDevice handler);

    std::string name() const override { return "VK_AMD_buffer_marker"; }
    static std::string str() { return "VK_AMD_buffer_marker"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdWriteBufferMarkerAMD vkCmdWriteBufferMarkerAMD = {};
};//class VkAmdBufferMarker

#endif //VK_AMD_buffer_marker

#if defined(VK_KHR_shader_atomic_int64)

class VkKhrShaderAtomicInt64 final : public DeviceExtensionBase { 
public:
    VkKhrShaderAtomicInt64() = default;
    VkKhrShaderAtomicInt64(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_atomic_int64"; }
    static std::string str() { return "VK_KHR_shader_atomic_int64"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderAtomicInt64

#endif //VK_KHR_shader_atomic_int64

#if defined(VK_KHR_shader_clock)

class VkKhrShaderClock final : public DeviceExtensionBase { 
public:
    VkKhrShaderClock() = default;
    VkKhrShaderClock(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_clock"; }
    static std::string str() { return "VK_KHR_shader_clock"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderClock

#endif //VK_KHR_shader_clock

#if defined(VK_AMD_pipeline_compiler_control)

class VkAmdPipelineCompilerControl final : public DeviceExtensionBase { 
public:
    VkAmdPipelineCompilerControl() = default;
    VkAmdPipelineCompilerControl(VkDevice handler);

    std::string name() const override { return "VK_AMD_pipeline_compiler_control"; }
    static std::string str() { return "VK_AMD_pipeline_compiler_control"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdPipelineCompilerControl

#endif //VK_AMD_pipeline_compiler_control

#if defined(VK_EXT_calibrated_timestamps)

class VkExtCalibratedTimestamps final : public DeviceExtensionBase { 
public:
    VkExtCalibratedTimestamps() = default;
    VkExtCalibratedTimestamps(VkDevice handler);

    std::string name() const override { return "VK_EXT_calibrated_timestamps"; }
    static std::string str() { return "VK_EXT_calibrated_timestamps"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetCalibratedTimestampsEXT vkGetCalibratedTimestampsEXT = {};
    PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = {};
};//class VkExtCalibratedTimestamps

#endif //VK_EXT_calibrated_timestamps

#if defined(VK_AMD_shader_core_properties)

class VkAmdShaderCoreProperties final : public DeviceExtensionBase { 
public:
    VkAmdShaderCoreProperties() = default;
    VkAmdShaderCoreProperties(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_core_properties"; }
    static std::string str() { return "VK_AMD_shader_core_properties"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderCoreProperties

#endif //VK_AMD_shader_core_properties

#if defined(VK_EXT_video_decode_h265)

class VkExtVideoDecodeH265 final : public DeviceExtensionBase { 
public:
    VkExtVideoDecodeH265() = default;
    VkExtVideoDecodeH265(VkDevice handler);

    std::string name() const override { return "VK_EXT_video_decode_h265"; }
    static std::string str() { return "VK_EXT_video_decode_h265"; }
    void init(VkDevice handler) override;
public:
};//class VkExtVideoDecodeH265

#endif //VK_EXT_video_decode_h265

#if defined(VK_KHR_global_priority)

class VkKhrGlobalPriority final : public DeviceExtensionBase { 
public:
    VkKhrGlobalPriority() = default;
    VkKhrGlobalPriority(VkDevice handler);

    std::string name() const override { return "VK_KHR_global_priority"; }
    static std::string str() { return "VK_KHR_global_priority"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrGlobalPriority

#endif //VK_KHR_global_priority

#if defined(VK_AMD_rasterization_order)

class VkAmdRasterizationOrder final : public DeviceExtensionBase { 
public:
    VkAmdRasterizationOrder() = default;
    VkAmdRasterizationOrder(VkDevice handler);

    std::string name() const override { return "VK_AMD_rasterization_order"; }
    static std::string str() { return "VK_AMD_rasterization_order"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdRasterizationOrder

#endif //VK_AMD_rasterization_order

#if defined(VK_AMD_memory_overallocation_behavior)

class VkAmdMemoryOverallocationBehavior final : public DeviceExtensionBase { 
public:
    VkAmdMemoryOverallocationBehavior() = default;
    VkAmdMemoryOverallocationBehavior(VkDevice handler);

    std::string name() const override { return "VK_AMD_memory_overallocation_behavior"; }
    static std::string str() { return "VK_AMD_memory_overallocation_behavior"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdMemoryOverallocationBehavior

#endif //VK_AMD_memory_overallocation_behavior

#if defined(VK_EXT_vertex_attribute_divisor)

class VkExtVertexAttributeDivisor final : public DeviceExtensionBase { 
public:
    VkExtVertexAttributeDivisor() = default;
    VkExtVertexAttributeDivisor(VkDevice handler);

    std::string name() const override { return "VK_EXT_vertex_attribute_divisor"; }
    static std::string str() { return "VK_EXT_vertex_attribute_divisor"; }
    void init(VkDevice handler) override;
public:
};//class VkExtVertexAttributeDivisor

#endif //VK_EXT_vertex_attribute_divisor

#if defined(VK_GGP_frame_token)

class VkGgpFrameToken final : public DeviceExtensionBase { 
public:
    VkGgpFrameToken() = default;
    VkGgpFrameToken(VkDevice handler);

    std::string name() const override { return "VK_GGP_frame_token"; }
    static std::string str() { return "VK_GGP_frame_token"; }
    void init(VkDevice handler) override;
public:
};//class VkGgpFrameToken

#endif //VK_GGP_frame_token

#if defined(VK_EXT_pipeline_creation_feedback)

class VkExtPipelineCreationFeedback final : public DeviceExtensionBase { 
public:
    VkExtPipelineCreationFeedback() = default;
    VkExtPipelineCreationFeedback(VkDevice handler);

    std::string name() const override { return "VK_EXT_pipeline_creation_feedback"; }
    static std::string str() { return "VK_EXT_pipeline_creation_feedback"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPipelineCreationFeedback

#endif //VK_EXT_pipeline_creation_feedback

#if defined(VK_KHR_driver_properties)

class VkKhrDriverProperties final : public DeviceExtensionBase { 
public:
    VkKhrDriverProperties() = default;
    VkKhrDriverProperties(VkDevice handler);

    std::string name() const override { return "VK_KHR_driver_properties"; }
    static std::string str() { return "VK_KHR_driver_properties"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrDriverProperties

#endif //VK_KHR_driver_properties

#if defined(VK_KHR_shader_float_controls)

class VkKhrShaderFloatControls final : public DeviceExtensionBase { 
public:
    VkKhrShaderFloatControls() = default;
    VkKhrShaderFloatControls(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_float_controls"; }
    static std::string str() { return "VK_KHR_shader_float_controls"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderFloatControls

#endif //VK_KHR_shader_float_controls

#if defined(VK_NV_shader_subgroup_partitioned)

class VkNvShaderSubgroupPartitioned final : public DeviceExtensionBase { 
public:
    VkNvShaderSubgroupPartitioned() = default;
    VkNvShaderSubgroupPartitioned(VkDevice handler);

    std::string name() const override { return "VK_NV_shader_subgroup_partitioned"; }
    static std::string str() { return "VK_NV_shader_subgroup_partitioned"; }
    void init(VkDevice handler) override;
public:
};//class VkNvShaderSubgroupPartitioned

#endif //VK_NV_shader_subgroup_partitioned

#if defined(VK_KHR_swapchain)

class VkKhrSwapchain final : public DeviceExtensionBase { 
public:
    VkKhrSwapchain() = default;
    VkKhrSwapchain(VkDevice handler);

    std::string name() const override { return "VK_KHR_swapchain"; }
    static std::string str() { return "VK_KHR_swapchain"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR = {};
    PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR = {};
    PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR = {};
    PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR = {};
    PFN_vkQueuePresentKHR vkQueuePresentKHR = {};
    PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR = {};
    PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR = {};
    PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR = {};
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR = {};
};//class VkKhrSwapchain

#endif //VK_KHR_swapchain

#if defined(VK_KHR_depth_stencil_resolve)

class VkKhrDepthStencilResolve final : public DeviceExtensionBase { 
public:
    VkKhrDepthStencilResolve() = default;
    VkKhrDepthStencilResolve(VkDevice handler);

    std::string name() const override { return "VK_KHR_depth_stencil_resolve"; }
    static std::string str() { return "VK_KHR_depth_stencil_resolve"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrDepthStencilResolve

#endif //VK_KHR_depth_stencil_resolve

#if defined(VK_KHR_swapchain_mutable_format)

class VkKhrSwapchainMutableFormat final : public DeviceExtensionBase { 
public:
    VkKhrSwapchainMutableFormat() = default;
    VkKhrSwapchainMutableFormat(VkDevice handler);

    std::string name() const override { return "VK_KHR_swapchain_mutable_format"; }
    static std::string str() { return "VK_KHR_swapchain_mutable_format"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrSwapchainMutableFormat

#endif //VK_KHR_swapchain_mutable_format

#if defined(VK_NV_compute_shader_derivatives)

class VkNvComputeShaderDerivatives final : public DeviceExtensionBase { 
public:
    VkNvComputeShaderDerivatives() = default;
    VkNvComputeShaderDerivatives(VkDevice handler);

    std::string name() const override { return "VK_NV_compute_shader_derivatives"; }
    static std::string str() { return "VK_NV_compute_shader_derivatives"; }
    void init(VkDevice handler) override;
public:
};//class VkNvComputeShaderDerivatives

#endif //VK_NV_compute_shader_derivatives

#if defined(VK_NV_mesh_shader)

class VkNvMeshShader final : public DeviceExtensionBase { 
public:
    VkNvMeshShader() = default;
    VkNvMeshShader(VkDevice handler);

    std::string name() const override { return "VK_NV_mesh_shader"; }
    static std::string str() { return "VK_NV_mesh_shader"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDrawMeshTasksIndirectCountNV vkCmdDrawMeshTasksIndirectCountNV = {};
    PFN_vkCmdDrawMeshTasksNV vkCmdDrawMeshTasksNV = {};
    PFN_vkCmdDrawMeshTasksIndirectNV vkCmdDrawMeshTasksIndirectNV = {};
};//class VkNvMeshShader

#endif //VK_NV_mesh_shader

#if defined(VK_NV_fragment_shader_barycentric)

class VkNvFragmentShaderBarycentric final : public DeviceExtensionBase { 
public:
    VkNvFragmentShaderBarycentric() = default;
    VkNvFragmentShaderBarycentric(VkDevice handler);

    std::string name() const override { return "VK_NV_fragment_shader_barycentric"; }
    static std::string str() { return "VK_NV_fragment_shader_barycentric"; }
    void init(VkDevice handler) override;
public:
};//class VkNvFragmentShaderBarycentric

#endif //VK_NV_fragment_shader_barycentric

#if defined(VK_NV_shader_image_footprint)

class VkNvShaderImageFootprint final : public DeviceExtensionBase { 
public:
    VkNvShaderImageFootprint() = default;
    VkNvShaderImageFootprint(VkDevice handler);

    std::string name() const override { return "VK_NV_shader_image_footprint"; }
    static std::string str() { return "VK_NV_shader_image_footprint"; }
    void init(VkDevice handler) override;
public:
};//class VkNvShaderImageFootprint

#endif //VK_NV_shader_image_footprint

#if defined(VK_NV_scissor_exclusive)

class VkNvScissorExclusive final : public DeviceExtensionBase { 
public:
    VkNvScissorExclusive() = default;
    VkNvScissorExclusive(VkDevice handler);

    std::string name() const override { return "VK_NV_scissor_exclusive"; }
    static std::string str() { return "VK_NV_scissor_exclusive"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetExclusiveScissorNV vkCmdSetExclusiveScissorNV = {};
};//class VkNvScissorExclusive

#endif //VK_NV_scissor_exclusive

#if defined(VK_NV_device_diagnostic_checkpoints)

class VkNvDeviceDiagnosticCheckpoints final : public DeviceExtensionBase { 
public:
    VkNvDeviceDiagnosticCheckpoints() = default;
    VkNvDeviceDiagnosticCheckpoints(VkDevice handler);

    std::string name() const override { return "VK_NV_device_diagnostic_checkpoints"; }
    static std::string str() { return "VK_NV_device_diagnostic_checkpoints"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV = {};
    PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV = {};
};//class VkNvDeviceDiagnosticCheckpoints

#endif //VK_NV_device_diagnostic_checkpoints

#if defined(VK_KHR_timeline_semaphore)

class VkKhrTimelineSemaphore final : public DeviceExtensionBase { 
public:
    VkKhrTimelineSemaphore() = default;
    VkKhrTimelineSemaphore(VkDevice handler);

    std::string name() const override { return "VK_KHR_timeline_semaphore"; }
    static std::string str() { return "VK_KHR_timeline_semaphore"; }
    void init(VkDevice handler) override;
public:
    PFN_vkWaitSemaphoresKHR vkWaitSemaphoresKHR = {};
    PFN_vkGetSemaphoreCounterValueKHR vkGetSemaphoreCounterValueKHR = {};
    PFN_vkSignalSemaphoreKHR vkSignalSemaphoreKHR = {};
};//class VkKhrTimelineSemaphore

#endif //VK_KHR_timeline_semaphore

#if defined(VK_KHR_extension_209)

class VkKhrExtension209 final : public DeviceExtensionBase { 
public:
    VkKhrExtension209() = default;
    VkKhrExtension209(VkDevice handler);

    std::string name() const override { return "VK_KHR_extension_209"; }
    static std::string str() { return "VK_KHR_extension_209"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExtension209

#endif //VK_KHR_extension_209

#if defined(VK_AMD_shader_trinary_minmax)

class VkAmdShaderTrinaryMinmax final : public DeviceExtensionBase { 
public:
    VkAmdShaderTrinaryMinmax() = default;
    VkAmdShaderTrinaryMinmax(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_trinary_minmax"; }
    static std::string str() { return "VK_AMD_shader_trinary_minmax"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderTrinaryMinmax

#endif //VK_AMD_shader_trinary_minmax

#if defined(VK_INTEL_shader_integer_functions2)

class VkIntelShaderIntegerFunctions2 final : public DeviceExtensionBase { 
public:
    VkIntelShaderIntegerFunctions2() = default;
    VkIntelShaderIntegerFunctions2(VkDevice handler);

    std::string name() const override { return "VK_INTEL_shader_integer_functions2"; }
    static std::string str() { return "VK_INTEL_shader_integer_functions2"; }
    void init(VkDevice handler) override;
public:
};//class VkIntelShaderIntegerFunctions2

#endif //VK_INTEL_shader_integer_functions2

#if defined(VK_INTEL_performance_query)

class VkIntelPerformanceQuery final : public DeviceExtensionBase { 
public:
    VkIntelPerformanceQuery() = default;
    VkIntelPerformanceQuery(VkDevice handler);

    std::string name() const override { return "VK_INTEL_performance_query"; }
    static std::string str() { return "VK_INTEL_performance_query"; }
    void init(VkDevice handler) override;
public:
    PFN_vkQueueSetPerformanceConfigurationINTEL vkQueueSetPerformanceConfigurationINTEL = {};
    PFN_vkAcquirePerformanceConfigurationINTEL vkAcquirePerformanceConfigurationINTEL = {};
    PFN_vkReleasePerformanceConfigurationINTEL vkReleasePerformanceConfigurationINTEL = {};
    PFN_vkInitializePerformanceApiINTEL vkInitializePerformanceApiINTEL = {};
    PFN_vkGetPerformanceParameterINTEL vkGetPerformanceParameterINTEL = {};
    PFN_vkUninitializePerformanceApiINTEL vkUninitializePerformanceApiINTEL = {};
    PFN_vkCmdSetPerformanceStreamMarkerINTEL vkCmdSetPerformanceStreamMarkerINTEL = {};
    PFN_vkCmdSetPerformanceMarkerINTEL vkCmdSetPerformanceMarkerINTEL = {};
    PFN_vkCmdSetPerformanceOverrideINTEL vkCmdSetPerformanceOverrideINTEL = {};
};//class VkIntelPerformanceQuery

#endif //VK_INTEL_performance_query

#if defined(VK_KHR_vulkan_memory_model)

class VkKhrVulkanMemoryModel final : public DeviceExtensionBase { 
public:
    VkKhrVulkanMemoryModel() = default;
    VkKhrVulkanMemoryModel(VkDevice handler);

    std::string name() const override { return "VK_KHR_vulkan_memory_model"; }
    static std::string str() { return "VK_KHR_vulkan_memory_model"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrVulkanMemoryModel

#endif //VK_KHR_vulkan_memory_model

#if defined(VK_EXT_pci_bus_info)

class VkExtPciBusInfo final : public DeviceExtensionBase { 
public:
    VkExtPciBusInfo() = default;
    VkExtPciBusInfo(VkDevice handler);

    std::string name() const override { return "VK_EXT_pci_bus_info"; }
    static std::string str() { return "VK_EXT_pci_bus_info"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPciBusInfo

#endif //VK_EXT_pci_bus_info

#if defined(VK_AMD_display_native_hdr)

class VkAmdDisplayNativeHdr final : public DeviceExtensionBase { 
public:
    VkAmdDisplayNativeHdr() = default;
    VkAmdDisplayNativeHdr(VkDevice handler);

    std::string name() const override { return "VK_AMD_display_native_hdr"; }
    static std::string str() { return "VK_AMD_display_native_hdr"; }
    void init(VkDevice handler) override;
public:
    PFN_vkSetLocalDimmingAMD vkSetLocalDimmingAMD = {};
};//class VkAmdDisplayNativeHdr

#endif //VK_AMD_display_native_hdr

#if defined(VK_KHR_shader_terminate_invocation)

class VkKhrShaderTerminateInvocation final : public DeviceExtensionBase { 
public:
    VkKhrShaderTerminateInvocation() = default;
    VkKhrShaderTerminateInvocation(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_terminate_invocation"; }
    static std::string str() { return "VK_KHR_shader_terminate_invocation"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderTerminateInvocation

#endif //VK_KHR_shader_terminate_invocation

#if defined(VK_EXT_fragment_density_map)

class VkExtFragmentDensityMap final : public DeviceExtensionBase { 
public:
    VkExtFragmentDensityMap() = default;
    VkExtFragmentDensityMap(VkDevice handler);

    std::string name() const override { return "VK_EXT_fragment_density_map"; }
    static std::string str() { return "VK_EXT_fragment_density_map"; }
    void init(VkDevice handler) override;
public:
};//class VkExtFragmentDensityMap

#endif //VK_EXT_fragment_density_map

#if defined(VK_AMD_shader_explicit_vertex_parameter)

class VkAmdShaderExplicitVertexParameter final : public DeviceExtensionBase { 
public:
    VkAmdShaderExplicitVertexParameter() = default;
    VkAmdShaderExplicitVertexParameter(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_explicit_vertex_parameter"; }
    static std::string str() { return "VK_AMD_shader_explicit_vertex_parameter"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderExplicitVertexParameter

#endif //VK_AMD_shader_explicit_vertex_parameter

#if defined(VK_EXT_scalar_block_layout)

class VkExtScalarBlockLayout final : public DeviceExtensionBase { 
public:
    VkExtScalarBlockLayout() = default;
    VkExtScalarBlockLayout(VkDevice handler);

    std::string name() const override { return "VK_EXT_scalar_block_layout"; }
    static std::string str() { return "VK_EXT_scalar_block_layout"; }
    void init(VkDevice handler) override;
public:
};//class VkExtScalarBlockLayout

#endif //VK_EXT_scalar_block_layout

#if defined(VK_GOOGLE_hlsl_functionality1)

class VkGoogleHlslFunctionality1 final : public DeviceExtensionBase { 
public:
    VkGoogleHlslFunctionality1() = default;
    VkGoogleHlslFunctionality1(VkDevice handler);

    std::string name() const override { return "VK_GOOGLE_hlsl_functionality1"; }
    static std::string str() { return "VK_GOOGLE_hlsl_functionality1"; }
    void init(VkDevice handler) override;
public:
};//class VkGoogleHlslFunctionality1

#endif //VK_GOOGLE_hlsl_functionality1

#if defined(VK_GOOGLE_decorate_string)

class VkGoogleDecorateString final : public DeviceExtensionBase { 
public:
    VkGoogleDecorateString() = default;
    VkGoogleDecorateString(VkDevice handler);

    std::string name() const override { return "VK_GOOGLE_decorate_string"; }
    static std::string str() { return "VK_GOOGLE_decorate_string"; }
    void init(VkDevice handler) override;
public:
};//class VkGoogleDecorateString

#endif //VK_GOOGLE_decorate_string

#if defined(VK_EXT_subgroup_size_control)

class VkExtSubgroupSizeControl final : public DeviceExtensionBase { 
public:
    VkExtSubgroupSizeControl() = default;
    VkExtSubgroupSizeControl(VkDevice handler);

    std::string name() const override { return "VK_EXT_subgroup_size_control"; }
    static std::string str() { return "VK_EXT_subgroup_size_control"; }
    void init(VkDevice handler) override;
public:
};//class VkExtSubgroupSizeControl

#endif //VK_EXT_subgroup_size_control

#if defined(VK_KHR_fragment_shading_rate)

class VkKhrFragmentShadingRate final : public DeviceExtensionBase { 
public:
    VkKhrFragmentShadingRate() = default;
    VkKhrFragmentShadingRate(VkDevice handler);

    std::string name() const override { return "VK_KHR_fragment_shading_rate"; }
    static std::string str() { return "VK_KHR_fragment_shading_rate"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetFragmentShadingRateKHR vkCmdSetFragmentShadingRateKHR = {};
    PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR vkGetPhysicalDeviceFragmentShadingRatesKHR = {};
};//class VkKhrFragmentShadingRate

#endif //VK_KHR_fragment_shading_rate

#if defined(VK_AMD_shader_core_properties2)

class VkAmdShaderCoreProperties2 final : public DeviceExtensionBase { 
public:
    VkAmdShaderCoreProperties2() = default;
    VkAmdShaderCoreProperties2(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_core_properties2"; }
    static std::string str() { return "VK_AMD_shader_core_properties2"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderCoreProperties2

#endif //VK_AMD_shader_core_properties2

#if defined(VK_EXT_debug_marker)

class VkExtDebugMarker final : public DeviceExtensionBase { 
public:
    VkExtDebugMarker() = default;
    VkExtDebugMarker(VkDevice handler);

    std::string name() const override { return "VK_EXT_debug_marker"; }
    static std::string str() { return "VK_EXT_debug_marker"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDebugMarkerBeginEXT vkCmdDebugMarkerBeginEXT = {};
    PFN_vkCmdDebugMarkerEndEXT vkCmdDebugMarkerEndEXT = {};
    PFN_vkCmdDebugMarkerInsertEXT vkCmdDebugMarkerInsertEXT = {};
    PFN_vkDebugMarkerSetObjectTagEXT vkDebugMarkerSetObjectTagEXT = {};
    PFN_vkDebugMarkerSetObjectNameEXT vkDebugMarkerSetObjectNameEXT = {};
};//class VkExtDebugMarker

#endif //VK_EXT_debug_marker

#if defined(VK_AMD_device_coherent_memory)

class VkAmdDeviceCoherentMemory final : public DeviceExtensionBase { 
public:
    VkAmdDeviceCoherentMemory() = default;
    VkAmdDeviceCoherentMemory(VkDevice handler);

    std::string name() const override { return "VK_AMD_device_coherent_memory"; }
    static std::string str() { return "VK_AMD_device_coherent_memory"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdDeviceCoherentMemory

#endif //VK_AMD_device_coherent_memory

#if defined(VK_EXT_shader_image_atomic_int64)

class VkExtShaderImageAtomicInt64 final : public DeviceExtensionBase { 
public:
    VkExtShaderImageAtomicInt64() = default;
    VkExtShaderImageAtomicInt64(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_image_atomic_int64"; }
    static std::string str() { return "VK_EXT_shader_image_atomic_int64"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderImageAtomicInt64

#endif //VK_EXT_shader_image_atomic_int64

#if defined(VK_KHR_spirv_1_4)

class VkKhrSpirv14 final : public DeviceExtensionBase { 
public:
    VkKhrSpirv14() = default;
    VkKhrSpirv14(VkDevice handler);

    std::string name() const override { return "VK_KHR_spirv_1_4"; }
    static std::string str() { return "VK_KHR_spirv_1_4"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrSpirv14

#endif //VK_KHR_spirv_1_4

#if defined(VK_EXT_memory_budget)

class VkExtMemoryBudget final : public DeviceExtensionBase { 
public:
    VkExtMemoryBudget() = default;
    VkExtMemoryBudget(VkDevice handler);

    std::string name() const override { return "VK_EXT_memory_budget"; }
    static std::string str() { return "VK_EXT_memory_budget"; }
    void init(VkDevice handler) override;
public:
};//class VkExtMemoryBudget

#endif //VK_EXT_memory_budget

#if defined(VK_EXT_memory_priority)

class VkExtMemoryPriority final : public DeviceExtensionBase { 
public:
    VkExtMemoryPriority() = default;
    VkExtMemoryPriority(VkDevice handler);

    std::string name() const override { return "VK_EXT_memory_priority"; }
    static std::string str() { return "VK_EXT_memory_priority"; }
    void init(VkDevice handler) override;
public:
};//class VkExtMemoryPriority

#endif //VK_EXT_memory_priority

#if defined(VK_KHR_video_queue)

class VkKhrVideoQueue final : public DeviceExtensionBase { 
public:
    VkKhrVideoQueue() = default;
    VkKhrVideoQueue(VkDevice handler);

    std::string name() const override { return "VK_KHR_video_queue"; }
    static std::string str() { return "VK_KHR_video_queue"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR vkGetPhysicalDeviceVideoFormatPropertiesKHR = {};
    PFN_vkCmdEndVideoCodingKHR vkCmdEndVideoCodingKHR = {};
    PFN_vkCmdBeginVideoCodingKHR vkCmdBeginVideoCodingKHR = {};
    PFN_vkUpdateVideoSessionParametersKHR vkUpdateVideoSessionParametersKHR = {};
    PFN_vkCreateVideoSessionParametersKHR vkCreateVideoSessionParametersKHR = {};
    PFN_vkBindVideoSessionMemoryKHR vkBindVideoSessionMemoryKHR = {};
    PFN_vkCreateVideoSessionKHR vkCreateVideoSessionKHR = {};
    PFN_vkGetVideoSessionMemoryRequirementsKHR vkGetVideoSessionMemoryRequirementsKHR = {};
    PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR vkGetPhysicalDeviceVideoCapabilitiesKHR = {};
    PFN_vkDestroyVideoSessionKHR vkDestroyVideoSessionKHR = {};
    PFN_vkDestroyVideoSessionParametersKHR vkDestroyVideoSessionParametersKHR = {};
    PFN_vkCmdControlVideoCodingKHR vkCmdControlVideoCodingKHR = {};
};//class VkKhrVideoQueue

#endif //VK_KHR_video_queue

#if defined(VK_NV_dedicated_allocation_image_aliasing)

class VkNvDedicatedAllocationImageAliasing final : public DeviceExtensionBase { 
public:
    VkNvDedicatedAllocationImageAliasing() = default;
    VkNvDedicatedAllocationImageAliasing(VkDevice handler);

    std::string name() const override { return "VK_NV_dedicated_allocation_image_aliasing"; }
    static std::string str() { return "VK_NV_dedicated_allocation_image_aliasing"; }
    void init(VkDevice handler) override;
public:
};//class VkNvDedicatedAllocationImageAliasing

#endif //VK_NV_dedicated_allocation_image_aliasing

#if defined(VK_KHR_separate_depth_stencil_layouts)

class VkKhrSeparateDepthStencilLayouts final : public DeviceExtensionBase { 
public:
    VkKhrSeparateDepthStencilLayouts() = default;
    VkKhrSeparateDepthStencilLayouts(VkDevice handler);

    std::string name() const override { return "VK_KHR_separate_depth_stencil_layouts"; }
    static std::string str() { return "VK_KHR_separate_depth_stencil_layouts"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrSeparateDepthStencilLayouts

#endif //VK_KHR_separate_depth_stencil_layouts

#if defined(VK_EXT_buffer_device_address)

class VkExtBufferDeviceAddress final : public DeviceExtensionBase { 
public:
    VkExtBufferDeviceAddress() = default;
    VkExtBufferDeviceAddress(VkDevice handler);

    std::string name() const override { return "VK_EXT_buffer_device_address"; }
    static std::string str() { return "VK_EXT_buffer_device_address"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetBufferDeviceAddressEXT vkGetBufferDeviceAddressEXT = {};
};//class VkExtBufferDeviceAddress

#endif //VK_EXT_buffer_device_address

#if defined(VK_EXT_tooling_info)

class VkExtToolingInfo final : public DeviceExtensionBase { 
public:
    VkExtToolingInfo() = default;
    VkExtToolingInfo(VkDevice handler);

    std::string name() const override { return "VK_EXT_tooling_info"; }
    static std::string str() { return "VK_EXT_tooling_info"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDeviceToolPropertiesEXT vkGetPhysicalDeviceToolPropertiesEXT = {};
};//class VkExtToolingInfo

#endif //VK_EXT_tooling_info

#if defined(VK_EXT_separate_stencil_usage)

class VkExtSeparateStencilUsage final : public DeviceExtensionBase { 
public:
    VkExtSeparateStencilUsage() = default;
    VkExtSeparateStencilUsage(VkDevice handler);

    std::string name() const override { return "VK_EXT_separate_stencil_usage"; }
    static std::string str() { return "VK_EXT_separate_stencil_usage"; }
    void init(VkDevice handler) override;
public:
};//class VkExtSeparateStencilUsage

#endif //VK_EXT_separate_stencil_usage

#if defined(VK_KHR_present_wait)

class VkKhrPresentWait final : public DeviceExtensionBase { 
public:
    VkKhrPresentWait() = default;
    VkKhrPresentWait(VkDevice handler);

    std::string name() const override { return "VK_KHR_present_wait"; }
    static std::string str() { return "VK_KHR_present_wait"; }
    void init(VkDevice handler) override;
public:
    PFN_vkWaitForPresentKHR vkWaitForPresentKHR = {};
};//class VkKhrPresentWait

#endif //VK_KHR_present_wait

#if defined(VK_KHR_video_decode_queue)

class VkKhrVideoDecodeQueue final : public DeviceExtensionBase { 
public:
    VkKhrVideoDecodeQueue() = default;
    VkKhrVideoDecodeQueue(VkDevice handler);

    std::string name() const override { return "VK_KHR_video_decode_queue"; }
    static std::string str() { return "VK_KHR_video_decode_queue"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDecodeVideoKHR vkCmdDecodeVideoKHR = {};
};//class VkKhrVideoDecodeQueue

#endif //VK_KHR_video_decode_queue

#if defined(VK_NV_cooperative_matrix)

class VkNvCooperativeMatrix final : public DeviceExtensionBase { 
public:
    VkNvCooperativeMatrix() = default;
    VkNvCooperativeMatrix(VkDevice handler);

    std::string name() const override { return "VK_NV_cooperative_matrix"; }
    static std::string str() { return "VK_NV_cooperative_matrix"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = {};
};//class VkNvCooperativeMatrix

#endif //VK_NV_cooperative_matrix

#if defined(VK_NV_coverage_reduction_mode)

class VkNvCoverageReductionMode final : public DeviceExtensionBase { 
public:
    VkNvCoverageReductionMode() = default;
    VkNvCoverageReductionMode(VkDevice handler);

    std::string name() const override { return "VK_NV_coverage_reduction_mode"; }
    static std::string str() { return "VK_NV_coverage_reduction_mode"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = {};
};//class VkNvCoverageReductionMode

#endif //VK_NV_coverage_reduction_mode

#if defined(VK_EXT_fragment_shader_interlock)

class VkExtFragmentShaderInterlock final : public DeviceExtensionBase { 
public:
    VkExtFragmentShaderInterlock() = default;
    VkExtFragmentShaderInterlock(VkDevice handler);

    std::string name() const override { return "VK_EXT_fragment_shader_interlock"; }
    static std::string str() { return "VK_EXT_fragment_shader_interlock"; }
    void init(VkDevice handler) override;
public:
};//class VkExtFragmentShaderInterlock

#endif //VK_EXT_fragment_shader_interlock

#if defined(VK_EXT_ycbcr_image_arrays)

class VkExtYcbcrImageArrays final : public DeviceExtensionBase { 
public:
    VkExtYcbcrImageArrays() = default;
    VkExtYcbcrImageArrays(VkDevice handler);

    std::string name() const override { return "VK_EXT_ycbcr_image_arrays"; }
    static std::string str() { return "VK_EXT_ycbcr_image_arrays"; }
    void init(VkDevice handler) override;
public:
};//class VkExtYcbcrImageArrays

#endif //VK_EXT_ycbcr_image_arrays

#if defined(VK_KHR_uniform_buffer_standard_layout)

class VkKhrUniformBufferStandardLayout final : public DeviceExtensionBase { 
public:
    VkKhrUniformBufferStandardLayout() = default;
    VkKhrUniformBufferStandardLayout(VkDevice handler);

    std::string name() const override { return "VK_KHR_uniform_buffer_standard_layout"; }
    static std::string str() { return "VK_KHR_uniform_buffer_standard_layout"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrUniformBufferStandardLayout

#endif //VK_KHR_uniform_buffer_standard_layout

#if defined(VK_EXT_provoking_vertex)

class VkExtProvokingVertex final : public DeviceExtensionBase { 
public:
    VkExtProvokingVertex() = default;
    VkExtProvokingVertex(VkDevice handler);

    std::string name() const override { return "VK_EXT_provoking_vertex"; }
    static std::string str() { return "VK_EXT_provoking_vertex"; }
    void init(VkDevice handler) override;
public:
};//class VkExtProvokingVertex

#endif //VK_EXT_provoking_vertex

#if defined(VK_EXT_full_screen_exclusive)

class VkExtFullScreenExclusive final : public DeviceExtensionBase { 
public:
    VkExtFullScreenExclusive() = default;
    VkExtFullScreenExclusive(VkDevice handler);

    std::string name() const override { return "VK_EXT_full_screen_exclusive"; }
    static std::string str() { return "VK_EXT_full_screen_exclusive"; }
    void init(VkDevice handler) override;
public:
    PFN_vkAcquireFullScreenExclusiveModeEXT vkAcquireFullScreenExclusiveModeEXT = {};
    PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT vkGetPhysicalDeviceSurfacePresentModes2EXT = {};
    PFN_vkGetDeviceGroupSurfacePresentModes2EXT vkGetDeviceGroupSurfacePresentModes2EXT = {};
    PFN_vkReleaseFullScreenExclusiveModeEXT vkReleaseFullScreenExclusiveModeEXT = {};
};//class VkExtFullScreenExclusive

#endif //VK_EXT_full_screen_exclusive

#if defined(VK_KHR_buffer_device_address)

class VkKhrBufferDeviceAddress final : public DeviceExtensionBase { 
public:
    VkKhrBufferDeviceAddress() = default;
    VkKhrBufferDeviceAddress(VkDevice handler);

    std::string name() const override { return "VK_KHR_buffer_device_address"; }
    static std::string str() { return "VK_KHR_buffer_device_address"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR vkGetDeviceMemoryOpaqueCaptureAddressKHR = {};
    PFN_vkGetBufferDeviceAddressKHR vkGetBufferDeviceAddressKHR = {};
    PFN_vkGetBufferOpaqueCaptureAddressKHR vkGetBufferOpaqueCaptureAddressKHR = {};
};//class VkKhrBufferDeviceAddress

#endif //VK_KHR_buffer_device_address

#if defined(VK_AMD_gcn_shader)

class VkAmdGcnShader final : public DeviceExtensionBase { 
public:
    VkAmdGcnShader() = default;
    VkAmdGcnShader(VkDevice handler);

    std::string name() const override { return "VK_AMD_gcn_shader"; }
    static std::string str() { return "VK_AMD_gcn_shader"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdGcnShader

#endif //VK_AMD_gcn_shader

#if defined(VK_EXT_line_rasterization)

class VkExtLineRasterization final : public DeviceExtensionBase { 
public:
    VkExtLineRasterization() = default;
    VkExtLineRasterization(VkDevice handler);

    std::string name() const override { return "VK_EXT_line_rasterization"; }
    static std::string str() { return "VK_EXT_line_rasterization"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetLineStippleEXT vkCmdSetLineStippleEXT = {};
};//class VkExtLineRasterization

#endif //VK_EXT_line_rasterization

#if defined(VK_EXT_shader_atomic_float)

class VkExtShaderAtomicFloat final : public DeviceExtensionBase { 
public:
    VkExtShaderAtomicFloat() = default;
    VkExtShaderAtomicFloat(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_atomic_float"; }
    static std::string str() { return "VK_EXT_shader_atomic_float"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderAtomicFloat

#endif //VK_EXT_shader_atomic_float

#if defined(VK_EXT_host_query_reset)

class VkExtHostQueryReset final : public DeviceExtensionBase { 
public:
    VkExtHostQueryReset() = default;
    VkExtHostQueryReset(VkDevice handler);

    std::string name() const override { return "VK_EXT_host_query_reset"; }
    static std::string str() { return "VK_EXT_host_query_reset"; }
    void init(VkDevice handler) override;
public:
    PFN_vkResetQueryPoolEXT vkResetQueryPoolEXT = {};
};//class VkExtHostQueryReset

#endif //VK_EXT_host_query_reset

#if defined(VK_EXT_index_type_uint8)

class VkExtIndexTypeUint8 final : public DeviceExtensionBase { 
public:
    VkExtIndexTypeUint8() = default;
    VkExtIndexTypeUint8(VkDevice handler);

    std::string name() const override { return "VK_EXT_index_type_uint8"; }
    static std::string str() { return "VK_EXT_index_type_uint8"; }
    void init(VkDevice handler) override;
public:
};//class VkExtIndexTypeUint8

#endif //VK_EXT_index_type_uint8

#if defined(VK_EXT_extension_267)

class VkExtExtension267 final : public DeviceExtensionBase { 
public:
    VkExtExtension267() = default;
    VkExtExtension267(VkDevice handler);

    std::string name() const override { return "VK_EXT_extension_267"; }
    static std::string str() { return "VK_EXT_extension_267"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExtension267

#endif //VK_EXT_extension_267

#if defined(VK_EXT_extended_dynamic_state)

class VkExtExtendedDynamicState final : public DeviceExtensionBase { 
public:
    VkExtExtendedDynamicState() = default;
    VkExtExtendedDynamicState(VkDevice handler);

    std::string name() const override { return "VK_EXT_extended_dynamic_state"; }
    static std::string str() { return "VK_EXT_extended_dynamic_state"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetCullModeEXT vkCmdSetCullModeEXT = {};
    PFN_vkCmdSetDepthTestEnableEXT vkCmdSetDepthTestEnableEXT = {};
    PFN_vkCmdSetViewportWithCountEXT vkCmdSetViewportWithCountEXT = {};
    PFN_vkCmdSetStencilTestEnableEXT vkCmdSetStencilTestEnableEXT = {};
    PFN_vkCmdSetDepthWriteEnableEXT vkCmdSetDepthWriteEnableEXT = {};
    PFN_vkCmdSetScissorWithCountEXT vkCmdSetScissorWithCountEXT = {};
    PFN_vkCmdSetStencilOpEXT vkCmdSetStencilOpEXT = {};
    PFN_vkCmdSetPrimitiveTopologyEXT vkCmdSetPrimitiveTopologyEXT = {};
    PFN_vkCmdSetDepthCompareOpEXT vkCmdSetDepthCompareOpEXT = {};
    PFN_vkCmdBindVertexBuffers2EXT vkCmdBindVertexBuffers2EXT = {};
    PFN_vkCmdSetDepthBoundsTestEnableEXT vkCmdSetDepthBoundsTestEnableEXT = {};
    PFN_vkCmdSetFrontFaceEXT vkCmdSetFrontFaceEXT = {};
};//class VkExtExtendedDynamicState

#endif //VK_EXT_extended_dynamic_state

#if defined(VK_KHR_deferred_host_operations)

class VkKhrDeferredHostOperations final : public DeviceExtensionBase { 
public:
    VkKhrDeferredHostOperations() = default;
    VkKhrDeferredHostOperations(VkDevice handler);

    std::string name() const override { return "VK_KHR_deferred_host_operations"; }
    static std::string str() { return "VK_KHR_deferred_host_operations"; }
    void init(VkDevice handler) override;
public:
    PFN_vkDestroyDeferredOperationKHR vkDestroyDeferredOperationKHR = {};
    PFN_vkGetDeferredOperationResultKHR vkGetDeferredOperationResultKHR = {};
    PFN_vkGetDeferredOperationMaxConcurrencyKHR vkGetDeferredOperationMaxConcurrencyKHR = {};
    PFN_vkDeferredOperationJoinKHR vkDeferredOperationJoinKHR = {};
    PFN_vkCreateDeferredOperationKHR vkCreateDeferredOperationKHR = {};
};//class VkKhrDeferredHostOperations

#endif //VK_KHR_deferred_host_operations

#if defined(VK_NV_dedicated_allocation)

class VkNvDedicatedAllocation final : public DeviceExtensionBase { 
public:
    VkNvDedicatedAllocation() = default;
    VkNvDedicatedAllocation(VkDevice handler);

    std::string name() const override { return "VK_NV_dedicated_allocation"; }
    static std::string str() { return "VK_NV_dedicated_allocation"; }
    void init(VkDevice handler) override;
public:
};//class VkNvDedicatedAllocation

#endif //VK_NV_dedicated_allocation

#if defined(VK_KHR_pipeline_executable_properties)

class VkKhrPipelineExecutableProperties final : public DeviceExtensionBase { 
public:
    VkKhrPipelineExecutableProperties() = default;
    VkKhrPipelineExecutableProperties(VkDevice handler);

    std::string name() const override { return "VK_KHR_pipeline_executable_properties"; }
    static std::string str() { return "VK_KHR_pipeline_executable_properties"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPipelineExecutableInternalRepresentationsKHR vkGetPipelineExecutableInternalRepresentationsKHR = {};
    PFN_vkGetPipelineExecutablePropertiesKHR vkGetPipelineExecutablePropertiesKHR = {};
    PFN_vkGetPipelineExecutableStatisticsKHR vkGetPipelineExecutableStatisticsKHR = {};
};//class VkKhrPipelineExecutableProperties

#endif //VK_KHR_pipeline_executable_properties

#if defined(VK_INTEL_extension_271)

class VkIntelExtension271 final : public DeviceExtensionBase { 
public:
    VkIntelExtension271() = default;
    VkIntelExtension271(VkDevice handler);

    std::string name() const override { return "VK_INTEL_extension_271"; }
    static std::string str() { return "VK_INTEL_extension_271"; }
    void init(VkDevice handler) override;
public:
};//class VkIntelExtension271

#endif //VK_INTEL_extension_271

#if defined(VK_INTEL_extension_272)

class VkIntelExtension272 final : public DeviceExtensionBase { 
public:
    VkIntelExtension272() = default;
    VkIntelExtension272(VkDevice handler);

    std::string name() const override { return "VK_INTEL_extension_272"; }
    static std::string str() { return "VK_INTEL_extension_272"; }
    void init(VkDevice handler) override;
public:
};//class VkIntelExtension272

#endif //VK_INTEL_extension_272

#if defined(VK_INTEL_extension_273)

class VkIntelExtension273 final : public DeviceExtensionBase { 
public:
    VkIntelExtension273() = default;
    VkIntelExtension273(VkDevice handler);

    std::string name() const override { return "VK_INTEL_extension_273"; }
    static std::string str() { return "VK_INTEL_extension_273"; }
    void init(VkDevice handler) override;
public:
};//class VkIntelExtension273

#endif //VK_INTEL_extension_273

#if defined(VK_EXT_shader_atomic_float2)

class VkExtShaderAtomicFloat2 final : public DeviceExtensionBase { 
public:
    VkExtShaderAtomicFloat2() = default;
    VkExtShaderAtomicFloat2(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_atomic_float2"; }
    static std::string str() { return "VK_EXT_shader_atomic_float2"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderAtomicFloat2

#endif //VK_EXT_shader_atomic_float2

#if defined(VK_KHR_extension_276)

class VkKhrExtension276 final : public DeviceExtensionBase { 
public:
    VkKhrExtension276() = default;
    VkKhrExtension276(VkDevice handler);

    std::string name() const override { return "VK_KHR_extension_276"; }
    static std::string str() { return "VK_KHR_extension_276"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExtension276

#endif //VK_KHR_extension_276

#if defined(VK_EXT_shader_demote_to_helper_invocation)

class VkExtShaderDemoteToHelperInvocation final : public DeviceExtensionBase { 
public:
    VkExtShaderDemoteToHelperInvocation() = default;
    VkExtShaderDemoteToHelperInvocation(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_demote_to_helper_invocation"; }
    static std::string str() { return "VK_EXT_shader_demote_to_helper_invocation"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderDemoteToHelperInvocation

#endif //VK_EXT_shader_demote_to_helper_invocation

#if defined(VK_NV_device_generated_commands)

class VkNvDeviceGeneratedCommands final : public DeviceExtensionBase { 
public:
    VkNvDeviceGeneratedCommands() = default;
    VkNvDeviceGeneratedCommands(VkDevice handler);

    std::string name() const override { return "VK_NV_device_generated_commands"; }
    static std::string str() { return "VK_NV_device_generated_commands"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetGeneratedCommandsMemoryRequirementsNV vkGetGeneratedCommandsMemoryRequirementsNV = {};
    PFN_vkDestroyIndirectCommandsLayoutNV vkDestroyIndirectCommandsLayoutNV = {};
    PFN_vkCmdExecuteGeneratedCommandsNV vkCmdExecuteGeneratedCommandsNV = {};
    PFN_vkCmdBindPipelineShaderGroupNV vkCmdBindPipelineShaderGroupNV = {};
    PFN_vkCreateIndirectCommandsLayoutNV vkCreateIndirectCommandsLayoutNV = {};
    PFN_vkCmdPreprocessGeneratedCommandsNV vkCmdPreprocessGeneratedCommandsNV = {};
};//class VkNvDeviceGeneratedCommands

#endif //VK_NV_device_generated_commands

#if defined(VK_NV_inherited_viewport_scissor)

class VkNvInheritedViewportScissor final : public DeviceExtensionBase { 
public:
    VkNvInheritedViewportScissor() = default;
    VkNvInheritedViewportScissor(VkDevice handler);

    std::string name() const override { return "VK_NV_inherited_viewport_scissor"; }
    static std::string str() { return "VK_NV_inherited_viewport_scissor"; }
    void init(VkDevice handler) override;
public:
};//class VkNvInheritedViewportScissor

#endif //VK_NV_inherited_viewport_scissor

#if defined(VK_KHR_extension_280)

class VkKhrExtension280 final : public DeviceExtensionBase { 
public:
    VkKhrExtension280() = default;
    VkKhrExtension280(VkDevice handler);

    std::string name() const override { return "VK_KHR_extension_280"; }
    static std::string str() { return "VK_KHR_extension_280"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExtension280

#endif //VK_KHR_extension_280

#if defined(VK_KHR_shader_integer_dot_product)

class VkKhrShaderIntegerDotProduct final : public DeviceExtensionBase { 
public:
    VkKhrShaderIntegerDotProduct() = default;
    VkKhrShaderIntegerDotProduct(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_integer_dot_product"; }
    static std::string str() { return "VK_KHR_shader_integer_dot_product"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderIntegerDotProduct

#endif //VK_KHR_shader_integer_dot_product

#if defined(VK_EXT_texel_buffer_alignment)

class VkExtTexelBufferAlignment final : public DeviceExtensionBase { 
public:
    VkExtTexelBufferAlignment() = default;
    VkExtTexelBufferAlignment(VkDevice handler);

    std::string name() const override { return "VK_EXT_texel_buffer_alignment"; }
    static std::string str() { return "VK_EXT_texel_buffer_alignment"; }
    void init(VkDevice handler) override;
public:
};//class VkExtTexelBufferAlignment

#endif //VK_EXT_texel_buffer_alignment

#if defined(VK_QCOM_render_pass_transform)

class VkQcomRenderPassTransform final : public DeviceExtensionBase { 
public:
    VkQcomRenderPassTransform() = default;
    VkQcomRenderPassTransform(VkDevice handler);

    std::string name() const override { return "VK_QCOM_render_pass_transform"; }
    static std::string str() { return "VK_QCOM_render_pass_transform"; }
    void init(VkDevice handler) override;
public:
};//class VkQcomRenderPassTransform

#endif //VK_QCOM_render_pass_transform

#if defined(VK_EXT_extension_284)

class VkExtExtension284 final : public DeviceExtensionBase { 
public:
    VkExtExtension284() = default;
    VkExtExtension284(VkDevice handler);

    std::string name() const override { return "VK_EXT_extension_284"; }
    static std::string str() { return "VK_EXT_extension_284"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExtension284

#endif //VK_EXT_extension_284

#if defined(VK_EXT_device_memory_report)

class VkExtDeviceMemoryReport final : public DeviceExtensionBase { 
public:
    VkExtDeviceMemoryReport() = default;
    VkExtDeviceMemoryReport(VkDevice handler);

    std::string name() const override { return "VK_EXT_device_memory_report"; }
    static std::string str() { return "VK_EXT_device_memory_report"; }
    void init(VkDevice handler) override;
public:
};//class VkExtDeviceMemoryReport

#endif //VK_EXT_device_memory_report

#if defined(VK_EXT_robustness2)

class VkExtRobustness2 final : public DeviceExtensionBase { 
public:
    VkExtRobustness2() = default;
    VkExtRobustness2(VkDevice handler);

    std::string name() const override { return "VK_EXT_robustness2"; }
    static std::string str() { return "VK_EXT_robustness2"; }
    void init(VkDevice handler) override;
public:
};//class VkExtRobustness2

#endif //VK_EXT_robustness2

#if defined(VK_EXT_custom_border_color)

class VkExtCustomBorderColor final : public DeviceExtensionBase { 
public:
    VkExtCustomBorderColor() = default;
    VkExtCustomBorderColor(VkDevice handler);

    std::string name() const override { return "VK_EXT_custom_border_color"; }
    static std::string str() { return "VK_EXT_custom_border_color"; }
    void init(VkDevice handler) override;
public:
};//class VkExtCustomBorderColor

#endif //VK_EXT_custom_border_color

#if defined(VK_EXT_transform_feedback)

class VkExtTransformFeedback final : public DeviceExtensionBase { 
public:
    VkExtTransformFeedback() = default;
    VkExtTransformFeedback(VkDevice handler);

    std::string name() const override { return "VK_EXT_transform_feedback"; }
    static std::string str() { return "VK_EXT_transform_feedback"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdBindTransformFeedbackBuffersEXT vkCmdBindTransformFeedbackBuffersEXT = {};
    PFN_vkCmdDrawIndirectByteCountEXT vkCmdDrawIndirectByteCountEXT = {};
    PFN_vkCmdBeginQueryIndexedEXT vkCmdBeginQueryIndexedEXT = {};
    PFN_vkCmdEndTransformFeedbackEXT vkCmdEndTransformFeedbackEXT = {};
    PFN_vkCmdBeginTransformFeedbackEXT vkCmdBeginTransformFeedbackEXT = {};
    PFN_vkCmdEndQueryIndexedEXT vkCmdEndQueryIndexedEXT = {};
};//class VkExtTransformFeedback

#endif //VK_EXT_transform_feedback

#if defined(VK_GOOGLE_user_type)

class VkGoogleUserType final : public DeviceExtensionBase { 
public:
    VkGoogleUserType() = default;
    VkGoogleUserType(VkDevice handler);

    std::string name() const override { return "VK_GOOGLE_user_type"; }
    static std::string str() { return "VK_GOOGLE_user_type"; }
    void init(VkDevice handler) override;
public:
};//class VkGoogleUserType

#endif //VK_GOOGLE_user_type

#if defined(VK_KHR_pipeline_library)

class VkKhrPipelineLibrary final : public DeviceExtensionBase { 
public:
    VkKhrPipelineLibrary() = default;
    VkKhrPipelineLibrary(VkDevice handler);

    std::string name() const override { return "VK_KHR_pipeline_library"; }
    static std::string str() { return "VK_KHR_pipeline_library"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrPipelineLibrary

#endif //VK_KHR_pipeline_library

#if defined(VK_KHR_shader_non_semantic_info)

class VkKhrShaderNonSemanticInfo final : public DeviceExtensionBase { 
public:
    VkKhrShaderNonSemanticInfo() = default;
    VkKhrShaderNonSemanticInfo(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_non_semantic_info"; }
    static std::string str() { return "VK_KHR_shader_non_semantic_info"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderNonSemanticInfo

#endif //VK_KHR_shader_non_semantic_info

#if defined(VK_KHR_present_id)

class VkKhrPresentId final : public DeviceExtensionBase { 
public:
    VkKhrPresentId() = default;
    VkKhrPresentId(VkDevice handler);

    std::string name() const override { return "VK_KHR_present_id"; }
    static std::string str() { return "VK_KHR_present_id"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrPresentId

#endif //VK_KHR_present_id

#if defined(VK_EXT_private_data)

class VkExtPrivateData final : public DeviceExtensionBase { 
public:
    VkExtPrivateData() = default;
    VkExtPrivateData(VkDevice handler);

    std::string name() const override { return "VK_EXT_private_data"; }
    static std::string str() { return "VK_EXT_private_data"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCreatePrivateDataSlotEXT vkCreatePrivateDataSlotEXT = {};
    PFN_vkDestroyPrivateDataSlotEXT vkDestroyPrivateDataSlotEXT = {};
    PFN_vkGetPrivateDataEXT vkGetPrivateDataEXT = {};
    PFN_vkSetPrivateDataEXT vkSetPrivateDataEXT = {};
};//class VkExtPrivateData

#endif //VK_EXT_private_data

#if defined(VK_EXT_pipeline_creation_cache_control)

class VkExtPipelineCreationCacheControl final : public DeviceExtensionBase { 
public:
    VkExtPipelineCreationCacheControl() = default;
    VkExtPipelineCreationCacheControl(VkDevice handler);

    std::string name() const override { return "VK_EXT_pipeline_creation_cache_control"; }
    static std::string str() { return "VK_EXT_pipeline_creation_cache_control"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPipelineCreationCacheControl

#endif //VK_EXT_pipeline_creation_cache_control

#if defined(VK_NVX_binary_import)

class VkNvxBinaryImport final : public DeviceExtensionBase { 
public:
    VkNvxBinaryImport() = default;
    VkNvxBinaryImport(VkDevice handler);

    std::string name() const override { return "VK_NVX_binary_import"; }
    static std::string str() { return "VK_NVX_binary_import"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCreateCuFunctionNVX vkCreateCuFunctionNVX = {};
    PFN_vkDestroyCuFunctionNVX vkDestroyCuFunctionNVX = {};
    PFN_vkCmdCuLaunchKernelNVX vkCmdCuLaunchKernelNVX = {};
    PFN_vkCreateCuModuleNVX vkCreateCuModuleNVX = {};
    PFN_vkDestroyCuModuleNVX vkDestroyCuModuleNVX = {};
};//class VkNvxBinaryImport

#endif //VK_NVX_binary_import

#if defined(VK_KHR_video_encode_queue)

class VkKhrVideoEncodeQueue final : public DeviceExtensionBase { 
public:
    VkKhrVideoEncodeQueue() = default;
    VkKhrVideoEncodeQueue(VkDevice handler);

    std::string name() const override { return "VK_KHR_video_encode_queue"; }
    static std::string str() { return "VK_KHR_video_encode_queue"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdEncodeVideoKHR vkCmdEncodeVideoKHR = {};
};//class VkKhrVideoEncodeQueue

#endif //VK_KHR_video_encode_queue

#if defined(VK_NV_device_diagnostics_config)

class VkNvDeviceDiagnosticsConfig final : public DeviceExtensionBase { 
public:
    VkNvDeviceDiagnosticsConfig() = default;
    VkNvDeviceDiagnosticsConfig(VkDevice handler);

    std::string name() const override { return "VK_NV_device_diagnostics_config"; }
    static std::string str() { return "VK_NV_device_diagnostics_config"; }
    void init(VkDevice handler) override;
public:
};//class VkNvDeviceDiagnosticsConfig

#endif //VK_NV_device_diagnostics_config

#if defined(VK_QCOM_render_pass_store_ops)

class VkQcomRenderPassStoreOps final : public DeviceExtensionBase { 
public:
    VkQcomRenderPassStoreOps() = default;
    VkQcomRenderPassStoreOps(VkDevice handler);

    std::string name() const override { return "VK_QCOM_render_pass_store_ops"; }
    static std::string str() { return "VK_QCOM_render_pass_store_ops"; }
    void init(VkDevice handler) override;
public:
};//class VkQcomRenderPassStoreOps

#endif //VK_QCOM_render_pass_store_ops

#if defined(VK_NV_extension_308)

class VkNvExtension308 final : public DeviceExtensionBase { 
public:
    VkNvExtension308() = default;
    VkNvExtension308(VkDevice handler);

    std::string name() const override { return "VK_NV_extension_308"; }
    static std::string str() { return "VK_NV_extension_308"; }
    void init(VkDevice handler) override;
public:
};//class VkNvExtension308

#endif //VK_NV_extension_308

#if defined(VK_NVX_image_view_handle)

class VkNvxImageViewHandle final : public DeviceExtensionBase { 
public:
    VkNvxImageViewHandle() = default;
    VkNvxImageViewHandle(VkDevice handler);

    std::string name() const override { return "VK_NVX_image_view_handle"; }
    static std::string str() { return "VK_NVX_image_view_handle"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetImageViewHandleNVX vkGetImageViewHandleNVX = {};
    PFN_vkGetImageViewAddressNVX vkGetImageViewAddressNVX = {};
};//class VkNvxImageViewHandle

#endif //VK_NVX_image_view_handle

#if defined(VK_KHR_synchronization2)

class VkKhrSynchronization2 final : public DeviceExtensionBase { 
public:
    VkKhrSynchronization2() = default;
    VkKhrSynchronization2(VkDevice handler);

    std::string name() const override { return "VK_KHR_synchronization2"; }
    static std::string str() { return "VK_KHR_synchronization2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdWriteTimestamp2KHR vkCmdWriteTimestamp2KHR = {};
    PFN_vkCmdWaitEvents2KHR vkCmdWaitEvents2KHR = {};
    PFN_vkCmdPipelineBarrier2KHR vkCmdPipelineBarrier2KHR = {};
    PFN_vkCmdSetEvent2KHR vkCmdSetEvent2KHR = {};
    PFN_vkGetQueueCheckpointData2NV vkGetQueueCheckpointData2NV = {};
    PFN_vkQueueSubmit2KHR vkQueueSubmit2KHR = {};
    PFN_vkCmdResetEvent2KHR vkCmdResetEvent2KHR = {};
    PFN_vkCmdWriteBufferMarker2AMD vkCmdWriteBufferMarker2AMD = {};
};//class VkKhrSynchronization2

#endif //VK_KHR_synchronization2

#if defined(VK_KHR_shader_subgroup_uniform_control_flow)

class VkKhrShaderSubgroupUniformControlFlow final : public DeviceExtensionBase { 
public:
    VkKhrShaderSubgroupUniformControlFlow() = default;
    VkKhrShaderSubgroupUniformControlFlow(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_subgroup_uniform_control_flow"; }
    static std::string str() { return "VK_KHR_shader_subgroup_uniform_control_flow"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderSubgroupUniformControlFlow

#endif //VK_KHR_shader_subgroup_uniform_control_flow

#if defined(VK_KHR_zero_initialize_workgroup_memory)

class VkKhrZeroInitializeWorkgroupMemory final : public DeviceExtensionBase { 
public:
    VkKhrZeroInitializeWorkgroupMemory() = default;
    VkKhrZeroInitializeWorkgroupMemory(VkDevice handler);

    std::string name() const override { return "VK_KHR_zero_initialize_workgroup_memory"; }
    static std::string str() { return "VK_KHR_zero_initialize_workgroup_memory"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrZeroInitializeWorkgroupMemory

#endif //VK_KHR_zero_initialize_workgroup_memory

#if defined(VK_NV_fragment_shading_rate_enums)

class VkNvFragmentShadingRateEnums final : public DeviceExtensionBase { 
public:
    VkNvFragmentShadingRateEnums() = default;
    VkNvFragmentShadingRateEnums(VkDevice handler);

    std::string name() const override { return "VK_NV_fragment_shading_rate_enums"; }
    static std::string str() { return "VK_NV_fragment_shading_rate_enums"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetFragmentShadingRateEnumNV vkCmdSetFragmentShadingRateEnumNV = {};
};//class VkNvFragmentShadingRateEnums

#endif //VK_NV_fragment_shading_rate_enums

#if defined(VK_NV_ray_tracing_motion_blur)

class VkNvRayTracingMotionBlur final : public DeviceExtensionBase { 
public:
    VkNvRayTracingMotionBlur() = default;
    VkNvRayTracingMotionBlur(VkDevice handler);

    std::string name() const override { return "VK_NV_ray_tracing_motion_blur"; }
    static std::string str() { return "VK_NV_ray_tracing_motion_blur"; }
    void init(VkDevice handler) override;
public:
};//class VkNvRayTracingMotionBlur

#endif //VK_NV_ray_tracing_motion_blur

#if defined(VK_EXT_ycbcr_2plane_444_formats)

class VkExtYcbcr2plane444Formats final : public DeviceExtensionBase { 
public:
    VkExtYcbcr2plane444Formats() = default;
    VkExtYcbcr2plane444Formats(VkDevice handler);

    std::string name() const override { return "VK_EXT_ycbcr_2plane_444_formats"; }
    static std::string str() { return "VK_EXT_ycbcr_2plane_444_formats"; }
    void init(VkDevice handler) override;
public:
};//class VkExtYcbcr2plane444Formats

#endif //VK_EXT_ycbcr_2plane_444_formats

#if defined(VK_EXT_fragment_density_map2)

class VkExtFragmentDensityMap2 final : public DeviceExtensionBase { 
public:
    VkExtFragmentDensityMap2() = default;
    VkExtFragmentDensityMap2(VkDevice handler);

    std::string name() const override { return "VK_EXT_fragment_density_map2"; }
    static std::string str() { return "VK_EXT_fragment_density_map2"; }
    void init(VkDevice handler) override;
public:
};//class VkExtFragmentDensityMap2

#endif //VK_EXT_fragment_density_map2

#if defined(VK_QCOM_rotated_copy_commands)

class VkQcomRotatedCopyCommands final : public DeviceExtensionBase { 
public:
    VkQcomRotatedCopyCommands() = default;
    VkQcomRotatedCopyCommands(VkDevice handler);

    std::string name() const override { return "VK_QCOM_rotated_copy_commands"; }
    static std::string str() { return "VK_QCOM_rotated_copy_commands"; }
    void init(VkDevice handler) override;
public:
};//class VkQcomRotatedCopyCommands

#endif //VK_QCOM_rotated_copy_commands

#if defined(VK_EXT_image_robustness)

class VkExtImageRobustness final : public DeviceExtensionBase { 
public:
    VkExtImageRobustness() = default;
    VkExtImageRobustness(VkDevice handler);

    std::string name() const override { return "VK_EXT_image_robustness"; }
    static std::string str() { return "VK_EXT_image_robustness"; }
    void init(VkDevice handler) override;
public:
};//class VkExtImageRobustness

#endif //VK_EXT_image_robustness

#if defined(VK_KHR_workgroup_memory_explicit_layout)

class VkKhrWorkgroupMemoryExplicitLayout final : public DeviceExtensionBase { 
public:
    VkKhrWorkgroupMemoryExplicitLayout() = default;
    VkKhrWorkgroupMemoryExplicitLayout(VkDevice handler);

    std::string name() const override { return "VK_KHR_workgroup_memory_explicit_layout"; }
    static std::string str() { return "VK_KHR_workgroup_memory_explicit_layout"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrWorkgroupMemoryExplicitLayout

#endif //VK_KHR_workgroup_memory_explicit_layout

#if defined(VK_KHR_copy_commands2)

class VkKhrCopyCommands2 final : public DeviceExtensionBase { 
public:
    VkKhrCopyCommands2() = default;
    VkKhrCopyCommands2(VkDevice handler);

    std::string name() const override { return "VK_KHR_copy_commands2"; }
    static std::string str() { return "VK_KHR_copy_commands2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdBlitImage2KHR vkCmdBlitImage2KHR = {};
    PFN_vkCmdCopyImageToBuffer2KHR vkCmdCopyImageToBuffer2KHR = {};
    PFN_vkCmdResolveImage2KHR vkCmdResolveImage2KHR = {};
    PFN_vkCmdCopyBufferToImage2KHR vkCmdCopyBufferToImage2KHR = {};
    PFN_vkCmdCopyBuffer2KHR vkCmdCopyBuffer2KHR = {};
    PFN_vkCmdCopyImage2KHR vkCmdCopyImage2KHR = {};
};//class VkKhrCopyCommands2

#endif //VK_KHR_copy_commands2

#if defined(VK_AMD_draw_indirect_count)

class VkAmdDrawIndirectCount final : public DeviceExtensionBase { 
public:
    VkAmdDrawIndirectCount() = default;
    VkAmdDrawIndirectCount(VkDevice handler);

    std::string name() const override { return "VK_AMD_draw_indirect_count"; }
    static std::string str() { return "VK_AMD_draw_indirect_count"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD = {};
    PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD = {};
};//class VkAmdDrawIndirectCount

#endif //VK_AMD_draw_indirect_count

#if defined(VK_EXT_4444_formats)

class VkExt4444Formats final : public DeviceExtensionBase { 
public:
    VkExt4444Formats() = default;
    VkExt4444Formats(VkDevice handler);

    std::string name() const override { return "VK_EXT_4444_formats"; }
    static std::string str() { return "VK_EXT_4444_formats"; }
    void init(VkDevice handler) override;
public:
};//class VkExt4444Formats

#endif //VK_EXT_4444_formats

#if defined(VK_ARM_rasterization_order_attachment_access)

class VkArmRasterizationOrderAttachmentAccess final : public DeviceExtensionBase { 
public:
    VkArmRasterizationOrderAttachmentAccess() = default;
    VkArmRasterizationOrderAttachmentAccess(VkDevice handler);

    std::string name() const override { return "VK_ARM_rasterization_order_attachment_access"; }
    static std::string str() { return "VK_ARM_rasterization_order_attachment_access"; }
    void init(VkDevice handler) override;
public:
};//class VkArmRasterizationOrderAttachmentAccess

#endif //VK_ARM_rasterization_order_attachment_access

#if defined(VK_EXT_rgba10x6_formats)

class VkExtRgba10x6Formats final : public DeviceExtensionBase { 
public:
    VkExtRgba10x6Formats() = default;
    VkExtRgba10x6Formats(VkDevice handler);

    std::string name() const override { return "VK_EXT_rgba10x6_formats"; }
    static std::string str() { return "VK_EXT_rgba10x6_formats"; }
    void init(VkDevice handler) override;
public:
};//class VkExtRgba10x6Formats

#endif //VK_EXT_rgba10x6_formats

#if defined(VK_NV_acquire_winrt_display)

class VkNvAcquireWinrtDisplay final : public DeviceExtensionBase { 
public:
    VkNvAcquireWinrtDisplay() = default;
    VkNvAcquireWinrtDisplay(VkDevice handler);

    std::string name() const override { return "VK_NV_acquire_winrt_display"; }
    static std::string str() { return "VK_NV_acquire_winrt_display"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetWinrtDisplayNV vkGetWinrtDisplayNV = {};
    PFN_vkAcquireWinrtDisplayNV vkAcquireWinrtDisplayNV = {};
};//class VkNvAcquireWinrtDisplay

#endif //VK_NV_acquire_winrt_display

#if defined(VK_KHR_ray_tracing_pipeline)

class VkKhrRayTracingPipeline final : public DeviceExtensionBase { 
public:
    VkKhrRayTracingPipeline() = default;
    VkKhrRayTracingPipeline(VkDevice handler);

    std::string name() const override { return "VK_KHR_ray_tracing_pipeline"; }
    static std::string str() { return "VK_KHR_ray_tracing_pipeline"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdTraceRaysIndirectKHR vkCmdTraceRaysIndirectKHR = {};
    PFN_vkCreateRayTracingPipelinesKHR vkCreateRayTracingPipelinesKHR = {};
    PFN_vkCmdSetRayTracingPipelineStackSizeKHR vkCmdSetRayTracingPipelineStackSizeKHR = {};
    PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = {};
    PFN_vkGetRayTracingShaderGroupStackSizeKHR vkGetRayTracingShaderGroupStackSizeKHR = {};
    PFN_vkCmdTraceRaysKHR vkCmdTraceRaysKHR = {};
    PFN_vkGetRayTracingShaderGroupHandlesKHR vkGetRayTracingShaderGroupHandlesKHR = {};
};//class VkKhrRayTracingPipeline

#endif //VK_KHR_ray_tracing_pipeline

#if defined(VK_KHR_ray_query)

class VkKhrRayQuery final : public DeviceExtensionBase { 
public:
    VkKhrRayQuery() = default;
    VkKhrRayQuery(VkDevice handler);

    std::string name() const override { return "VK_KHR_ray_query"; }
    static std::string str() { return "VK_KHR_ray_query"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrRayQuery

#endif //VK_KHR_ray_query

#if defined(VK_VALVE_mutable_descriptor_type)

class VkValveMutableDescriptorType final : public DeviceExtensionBase { 
public:
    VkValveMutableDescriptorType() = default;
    VkValveMutableDescriptorType(VkDevice handler);

    std::string name() const override { return "VK_VALVE_mutable_descriptor_type"; }
    static std::string str() { return "VK_VALVE_mutable_descriptor_type"; }
    void init(VkDevice handler) override;
public:
};//class VkValveMutableDescriptorType

#endif //VK_VALVE_mutable_descriptor_type

#if defined(VK_EXT_vertex_input_dynamic_state)

class VkExtVertexInputDynamicState final : public DeviceExtensionBase { 
public:
    VkExtVertexInputDynamicState() = default;
    VkExtVertexInputDynamicState(VkDevice handler);

    std::string name() const override { return "VK_EXT_vertex_input_dynamic_state"; }
    static std::string str() { return "VK_EXT_vertex_input_dynamic_state"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetVertexInputEXT vkCmdSetVertexInputEXT = {};
};//class VkExtVertexInputDynamicState

#endif //VK_EXT_vertex_input_dynamic_state

#if defined(VK_EXT_physical_device_drm)

class VkExtPhysicalDeviceDrm final : public DeviceExtensionBase { 
public:
    VkExtPhysicalDeviceDrm() = default;
    VkExtPhysicalDeviceDrm(VkDevice handler);

    std::string name() const override { return "VK_EXT_physical_device_drm"; }
    static std::string str() { return "VK_EXT_physical_device_drm"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPhysicalDeviceDrm

#endif //VK_EXT_physical_device_drm

#if defined(VK_EXT_depth_clip_control)

class VkExtDepthClipControl final : public DeviceExtensionBase { 
public:
    VkExtDepthClipControl() = default;
    VkExtDepthClipControl(VkDevice handler);

    std::string name() const override { return "VK_EXT_depth_clip_control"; }
    static std::string str() { return "VK_EXT_depth_clip_control"; }
    void init(VkDevice handler) override;
public:
};//class VkExtDepthClipControl

#endif //VK_EXT_depth_clip_control

#if defined(VK_EXT_primitive_topology_list_restart)

class VkExtPrimitiveTopologyListRestart final : public DeviceExtensionBase { 
public:
    VkExtPrimitiveTopologyListRestart() = default;
    VkExtPrimitiveTopologyListRestart(VkDevice handler);

    std::string name() const override { return "VK_EXT_primitive_topology_list_restart"; }
    static std::string str() { return "VK_EXT_primitive_topology_list_restart"; }
    void init(VkDevice handler) override;
public:
};//class VkExtPrimitiveTopologyListRestart

#endif //VK_EXT_primitive_topology_list_restart

#if defined(VK_AMD_negative_viewport_height)

class VkAmdNegativeViewportHeight final : public DeviceExtensionBase { 
public:
    VkAmdNegativeViewportHeight() = default;
    VkAmdNegativeViewportHeight(VkDevice handler);

    std::string name() const override { return "VK_AMD_negative_viewport_height"; }
    static std::string str() { return "VK_AMD_negative_viewport_height"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdNegativeViewportHeight

#endif //VK_AMD_negative_viewport_height

#if defined(VK_KHR_format_feature_flags2)

class VkKhrFormatFeatureFlags2 final : public DeviceExtensionBase { 
public:
    VkKhrFormatFeatureFlags2() = default;
    VkKhrFormatFeatureFlags2(VkDevice handler);

    std::string name() const override { return "VK_KHR_format_feature_flags2"; }
    static std::string str() { return "VK_KHR_format_feature_flags2"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrFormatFeatureFlags2

#endif //VK_KHR_format_feature_flags2

#if defined(VK_FUCHSIA_external_memory)

class VkFuchsiaExternalMemory final : public DeviceExtensionBase { 
public:
    VkFuchsiaExternalMemory() = default;
    VkFuchsiaExternalMemory(VkDevice handler);

    std::string name() const override { return "VK_FUCHSIA_external_memory"; }
    static std::string str() { return "VK_FUCHSIA_external_memory"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA vkGetMemoryZirconHandlePropertiesFUCHSIA = {};
    PFN_vkGetMemoryZirconHandleFUCHSIA vkGetMemoryZirconHandleFUCHSIA = {};
};//class VkFuchsiaExternalMemory

#endif //VK_FUCHSIA_external_memory

#if defined(VK_FUCHSIA_external_semaphore)

class VkFuchsiaExternalSemaphore final : public DeviceExtensionBase { 
public:
    VkFuchsiaExternalSemaphore() = default;
    VkFuchsiaExternalSemaphore(VkDevice handler);

    std::string name() const override { return "VK_FUCHSIA_external_semaphore"; }
    static std::string str() { return "VK_FUCHSIA_external_semaphore"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetSemaphoreZirconHandleFUCHSIA vkGetSemaphoreZirconHandleFUCHSIA = {};
    PFN_vkImportSemaphoreZirconHandleFUCHSIA vkImportSemaphoreZirconHandleFUCHSIA = {};
};//class VkFuchsiaExternalSemaphore

#endif //VK_FUCHSIA_external_semaphore

#if defined(VK_FUCHSIA_buffer_collection)

class VkFuchsiaBufferCollection final : public DeviceExtensionBase { 
public:
    VkFuchsiaBufferCollection() = default;
    VkFuchsiaBufferCollection(VkDevice handler);

    std::string name() const override { return "VK_FUCHSIA_buffer_collection"; }
    static std::string str() { return "VK_FUCHSIA_buffer_collection"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetBufferCollectionPropertiesFUCHSIA vkGetBufferCollectionPropertiesFUCHSIA = {};
    PFN_vkDestroyBufferCollectionFUCHSIA vkDestroyBufferCollectionFUCHSIA = {};
    PFN_vkCreateBufferCollectionFUCHSIA vkCreateBufferCollectionFUCHSIA = {};
    PFN_vkSetBufferCollectionImageConstraintsFUCHSIA vkSetBufferCollectionImageConstraintsFUCHSIA = {};
    PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA vkSetBufferCollectionBufferConstraintsFUCHSIA = {};
};//class VkFuchsiaBufferCollection

#endif //VK_FUCHSIA_buffer_collection

#if defined(VK_AMD_gpu_shader_half_float)

class VkAmdGpuShaderHalfFloat final : public DeviceExtensionBase { 
public:
    VkAmdGpuShaderHalfFloat() = default;
    VkAmdGpuShaderHalfFloat(VkDevice handler);

    std::string name() const override { return "VK_AMD_gpu_shader_half_float"; }
    static std::string str() { return "VK_AMD_gpu_shader_half_float"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdGpuShaderHalfFloat

#endif //VK_AMD_gpu_shader_half_float

#if defined(VK_HUAWEI_subpass_shading)

class VkHuaweiSubpassShading final : public DeviceExtensionBase { 
public:
    VkHuaweiSubpassShading() = default;
    VkHuaweiSubpassShading(VkDevice handler);

    std::string name() const override { return "VK_HUAWEI_subpass_shading"; }
    static std::string str() { return "VK_HUAWEI_subpass_shading"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = {};
    PFN_vkCmdSubpassShadingHUAWEI vkCmdSubpassShadingHUAWEI = {};
};//class VkHuaweiSubpassShading

#endif //VK_HUAWEI_subpass_shading

#if defined(VK_HUAWEI_invocation_mask)

class VkHuaweiInvocationMask final : public DeviceExtensionBase { 
public:
    VkHuaweiInvocationMask() = default;
    VkHuaweiInvocationMask(VkDevice handler);

    std::string name() const override { return "VK_HUAWEI_invocation_mask"; }
    static std::string str() { return "VK_HUAWEI_invocation_mask"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdBindInvocationMaskHUAWEI vkCmdBindInvocationMaskHUAWEI = {};
};//class VkHuaweiInvocationMask

#endif //VK_HUAWEI_invocation_mask

#if defined(VK_NV_external_memory_rdma)

class VkNvExternalMemoryRdma final : public DeviceExtensionBase { 
public:
    VkNvExternalMemoryRdma() = default;
    VkNvExternalMemoryRdma(VkDevice handler);

    std::string name() const override { return "VK_NV_external_memory_rdma"; }
    static std::string str() { return "VK_NV_external_memory_rdma"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryRemoteAddressNV vkGetMemoryRemoteAddressNV = {};
};//class VkNvExternalMemoryRdma

#endif //VK_NV_external_memory_rdma

#if defined(VK_EXT_extended_dynamic_state2)

class VkExtExtendedDynamicState2 final : public DeviceExtensionBase { 
public:
    VkExtExtendedDynamicState2() = default;
    VkExtExtendedDynamicState2(VkDevice handler);

    std::string name() const override { return "VK_EXT_extended_dynamic_state2"; }
    static std::string str() { return "VK_EXT_extended_dynamic_state2"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetPatchControlPointsEXT vkCmdSetPatchControlPointsEXT = {};
    PFN_vkCmdSetLogicOpEXT vkCmdSetLogicOpEXT = {};
    PFN_vkCmdSetPrimitiveRestartEnableEXT vkCmdSetPrimitiveRestartEnableEXT = {};
    PFN_vkCmdSetRasterizerDiscardEnableEXT vkCmdSetRasterizerDiscardEnableEXT = {};
    PFN_vkCmdSetDepthBiasEnableEXT vkCmdSetDepthBiasEnableEXT = {};
};//class VkExtExtendedDynamicState2

#endif //VK_EXT_extended_dynamic_state2

#if defined(VK_AMD_shader_ballot)

class VkAmdShaderBallot final : public DeviceExtensionBase { 
public:
    VkAmdShaderBallot() = default;
    VkAmdShaderBallot(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_ballot"; }
    static std::string str() { return "VK_AMD_shader_ballot"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderBallot

#endif //VK_AMD_shader_ballot

#if defined(VK_EXT_color_write_enable)

class VkExtColorWriteEnable final : public DeviceExtensionBase { 
public:
    VkExtColorWriteEnable() = default;
    VkExtColorWriteEnable(VkDevice handler);

    std::string name() const override { return "VK_EXT_color_write_enable"; }
    static std::string str() { return "VK_EXT_color_write_enable"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetColorWriteEnableEXT vkCmdSetColorWriteEnableEXT = {};
};//class VkExtColorWriteEnable

#endif //VK_EXT_color_write_enable

#if defined(VK_EXT_global_priority_query)

class VkExtGlobalPriorityQuery final : public DeviceExtensionBase { 
public:
    VkExtGlobalPriorityQuery() = default;
    VkExtGlobalPriorityQuery(VkDevice handler);

    std::string name() const override { return "VK_EXT_global_priority_query"; }
    static std::string str() { return "VK_EXT_global_priority_query"; }
    void init(VkDevice handler) override;
public:
};//class VkExtGlobalPriorityQuery

#endif //VK_EXT_global_priority_query

#if defined(VK_EXT_video_encode_h264)

class VkExtVideoEncodeH264 final : public DeviceExtensionBase { 
public:
    VkExtVideoEncodeH264() = default;
    VkExtVideoEncodeH264(VkDevice handler);

    std::string name() const override { return "VK_EXT_video_encode_h264"; }
    static std::string str() { return "VK_EXT_video_encode_h264"; }
    void init(VkDevice handler) override;
public:
};//class VkExtVideoEncodeH264

#endif //VK_EXT_video_encode_h264

#if defined(VK_EXT_image_view_min_lod)

class VkExtImageViewMinLod final : public DeviceExtensionBase { 
public:
    VkExtImageViewMinLod() = default;
    VkExtImageViewMinLod(VkDevice handler);

    std::string name() const override { return "VK_EXT_image_view_min_lod"; }
    static std::string str() { return "VK_EXT_image_view_min_lod"; }
    void init(VkDevice handler) override;
public:
};//class VkExtImageViewMinLod

#endif //VK_EXT_image_view_min_lod

#if defined(VK_EXT_multi_draw)

class VkExtMultiDraw final : public DeviceExtensionBase { 
public:
    VkExtMultiDraw() = default;
    VkExtMultiDraw(VkDevice handler);

    std::string name() const override { return "VK_EXT_multi_draw"; }
    static std::string str() { return "VK_EXT_multi_draw"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdDrawMultiIndexedEXT vkCmdDrawMultiIndexedEXT = {};
    PFN_vkCmdDrawMultiEXT vkCmdDrawMultiEXT = {};
};//class VkExtMultiDraw

#endif //VK_EXT_multi_draw

#if defined(VK_EXT_extension_394)

class VkExtExtension394 final : public DeviceExtensionBase { 
public:
    VkExtExtension394() = default;
    VkExtExtension394(VkDevice handler);

    std::string name() const override { return "VK_EXT_extension_394"; }
    static std::string str() { return "VK_EXT_extension_394"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExtension394

#endif //VK_EXT_extension_394

#if defined(VK_KHR_display_swapchain)

class VkKhrDisplaySwapchain final : public DeviceExtensionBase { 
public:
    VkKhrDisplaySwapchain() = default;
    VkKhrDisplaySwapchain(VkDevice handler);

    std::string name() const override { return "VK_KHR_display_swapchain"; }
    static std::string str() { return "VK_KHR_display_swapchain"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCreateSharedSwapchainsKHR vkCreateSharedSwapchainsKHR = {};
};//class VkKhrDisplaySwapchain

#endif //VK_KHR_display_swapchain

#if defined(VK_EXT_video_encode_h265)

class VkExtVideoEncodeH265 final : public DeviceExtensionBase { 
public:
    VkExtVideoEncodeH265() = default;
    VkExtVideoEncodeH265(VkDevice handler);

    std::string name() const override { return "VK_EXT_video_encode_h265"; }
    static std::string str() { return "VK_EXT_video_encode_h265"; }
    void init(VkDevice handler) override;
public:
};//class VkExtVideoEncodeH265

#endif //VK_EXT_video_encode_h265

#if defined(VK_EXT_load_store_op_none)

class VkExtLoadStoreOpNone final : public DeviceExtensionBase { 
public:
    VkExtLoadStoreOpNone() = default;
    VkExtLoadStoreOpNone(VkDevice handler);

    std::string name() const override { return "VK_EXT_load_store_op_none"; }
    static std::string str() { return "VK_EXT_load_store_op_none"; }
    void init(VkDevice handler) override;
public:
};//class VkExtLoadStoreOpNone

#endif //VK_EXT_load_store_op_none

#if defined(VK_EXT_video_decode_h264)

class VkExtVideoDecodeH264 final : public DeviceExtensionBase { 
public:
    VkExtVideoDecodeH264() = default;
    VkExtVideoDecodeH264(VkDevice handler);

    std::string name() const override { return "VK_EXT_video_decode_h264"; }
    static std::string str() { return "VK_EXT_video_decode_h264"; }
    void init(VkDevice handler) override;
public:
};//class VkExtVideoDecodeH264

#endif //VK_EXT_video_decode_h264

#if defined(VK_EXT_border_color_swizzle)

class VkExtBorderColorSwizzle final : public DeviceExtensionBase { 
public:
    VkExtBorderColorSwizzle() = default;
    VkExtBorderColorSwizzle(VkDevice handler);

    std::string name() const override { return "VK_EXT_border_color_swizzle"; }
    static std::string str() { return "VK_EXT_border_color_swizzle"; }
    void init(VkDevice handler) override;
public:
};//class VkExtBorderColorSwizzle

#endif //VK_EXT_border_color_swizzle

#if defined(VK_EXT_pageable_device_local_memory)

class VkExtPageableDeviceLocalMemory final : public DeviceExtensionBase { 
public:
    VkExtPageableDeviceLocalMemory() = default;
    VkExtPageableDeviceLocalMemory(VkDevice handler);

    std::string name() const override { return "VK_EXT_pageable_device_local_memory"; }
    static std::string str() { return "VK_EXT_pageable_device_local_memory"; }
    void init(VkDevice handler) override;
public:
    PFN_vkSetDeviceMemoryPriorityEXT vkSetDeviceMemoryPriorityEXT = {};
};//class VkExtPageableDeviceLocalMemory

#endif //VK_EXT_pageable_device_local_memory

#if defined(VK_KHR_maintenance4)

class VkKhrMaintenance4 final : public DeviceExtensionBase { 
public:
    VkKhrMaintenance4() = default;
    VkKhrMaintenance4(VkDevice handler);

    std::string name() const override { return "VK_KHR_maintenance4"; }
    static std::string str() { return "VK_KHR_maintenance4"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetDeviceImageMemoryRequirementsKHR vkGetDeviceImageMemoryRequirementsKHR = {};
    PFN_vkGetDeviceImageSparseMemoryRequirementsKHR vkGetDeviceImageSparseMemoryRequirementsKHR = {};
    PFN_vkGetDeviceBufferMemoryRequirementsKHR vkGetDeviceBufferMemoryRequirementsKHR = {};
};//class VkKhrMaintenance4

#endif //VK_KHR_maintenance4

#if defined(VK_EXT_extension_419)

class VkExtExtension419 final : public DeviceExtensionBase { 
public:
    VkExtExtension419() = default;
    VkExtExtension419(VkDevice handler);

    std::string name() const override { return "VK_EXT_extension_419"; }
    static std::string str() { return "VK_EXT_extension_419"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExtension419

#endif //VK_EXT_extension_419

#if defined(VK_AMD_texture_gather_bias_lod)

class VkAmdTextureGatherBiasLod final : public DeviceExtensionBase { 
public:
    VkAmdTextureGatherBiasLod() = default;
    VkAmdTextureGatherBiasLod(VkDevice handler);

    std::string name() const override { return "VK_AMD_texture_gather_bias_lod"; }
    static std::string str() { return "VK_AMD_texture_gather_bias_lod"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdTextureGatherBiasLod

#endif //VK_AMD_texture_gather_bias_lod

#if defined(VK_EXT_extension_420)

class VkExtExtension420 final : public DeviceExtensionBase { 
public:
    VkExtExtension420() = default;
    VkExtExtension420(VkDevice handler);

    std::string name() const override { return "VK_EXT_extension_420"; }
    static std::string str() { return "VK_EXT_extension_420"; }
    void init(VkDevice handler) override;
public:
};//class VkExtExtension420

#endif //VK_EXT_extension_420

#if defined(VK_QCOM_fragment_density_map_offset)

class VkQcomFragmentDensityMapOffset final : public DeviceExtensionBase { 
public:
    VkQcomFragmentDensityMapOffset() = default;
    VkQcomFragmentDensityMapOffset(VkDevice handler);

    std::string name() const override { return "VK_QCOM_fragment_density_map_offset"; }
    static std::string str() { return "VK_QCOM_fragment_density_map_offset"; }
    void init(VkDevice handler) override;
public:
};//class VkQcomFragmentDensityMapOffset

#endif //VK_QCOM_fragment_density_map_offset

#if defined(VK_AMD_shader_info)

class VkAmdShaderInfo final : public DeviceExtensionBase { 
public:
    VkAmdShaderInfo() = default;
    VkAmdShaderInfo(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_info"; }
    static std::string str() { return "VK_AMD_shader_info"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD = {};
};//class VkAmdShaderInfo

#endif //VK_AMD_shader_info

#if defined(VK_NV_linear_color_attachment)

class VkNvLinearColorAttachment final : public DeviceExtensionBase { 
public:
    VkNvLinearColorAttachment() = default;
    VkNvLinearColorAttachment(VkDevice handler);

    std::string name() const override { return "VK_NV_linear_color_attachment"; }
    static std::string str() { return "VK_NV_linear_color_attachment"; }
    void init(VkDevice handler) override;
public:
};//class VkNvLinearColorAttachment

#endif //VK_NV_linear_color_attachment

#if defined(VK_KHR_dynamic_rendering)

class VkKhrDynamicRendering final : public DeviceExtensionBase { 
public:
    VkKhrDynamicRendering() = default;
    VkKhrDynamicRendering(VkDevice handler);

    std::string name() const override { return "VK_KHR_dynamic_rendering"; }
    static std::string str() { return "VK_KHR_dynamic_rendering"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdBeginRenderingKHR vkCmdBeginRenderingKHR = {};
    PFN_vkCmdEndRenderingKHR vkCmdEndRenderingKHR = {};
};//class VkKhrDynamicRendering

#endif //VK_KHR_dynamic_rendering

#if defined(VK_AMD_shader_image_load_store_lod)

class VkAmdShaderImageLoadStoreLod final : public DeviceExtensionBase { 
public:
    VkAmdShaderImageLoadStoreLod() = default;
    VkAmdShaderImageLoadStoreLod(VkDevice handler);

    std::string name() const override { return "VK_AMD_shader_image_load_store_lod"; }
    static std::string str() { return "VK_AMD_shader_image_load_store_lod"; }
    void init(VkDevice handler) override;
public:
};//class VkAmdShaderImageLoadStoreLod

#endif //VK_AMD_shader_image_load_store_lod

#if defined(VK_NV_corner_sampled_image)

class VkNvCornerSampledImage final : public DeviceExtensionBase { 
public:
    VkNvCornerSampledImage() = default;
    VkNvCornerSampledImage(VkDevice handler);

    std::string name() const override { return "VK_NV_corner_sampled_image"; }
    static std::string str() { return "VK_NV_corner_sampled_image"; }
    void init(VkDevice handler) override;
public:
};//class VkNvCornerSampledImage

#endif //VK_NV_corner_sampled_image

#if defined(VK_KHR_multiview)

class VkKhrMultiview final : public DeviceExtensionBase { 
public:
    VkKhrMultiview() = default;
    VkKhrMultiview(VkDevice handler);

    std::string name() const override { return "VK_KHR_multiview"; }
    static std::string str() { return "VK_KHR_multiview"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrMultiview

#endif //VK_KHR_multiview

#if defined(VK_IMG_format_pvrtc)

class VkImgFormatPvrtc final : public DeviceExtensionBase { 
public:
    VkImgFormatPvrtc() = default;
    VkImgFormatPvrtc(VkDevice handler);

    std::string name() const override { return "VK_IMG_format_pvrtc"; }
    static std::string str() { return "VK_IMG_format_pvrtc"; }
    void init(VkDevice handler) override;
public:
};//class VkImgFormatPvrtc

#endif //VK_IMG_format_pvrtc

#if defined(VK_NV_external_memory)

class VkNvExternalMemory final : public DeviceExtensionBase { 
public:
    VkNvExternalMemory() = default;
    VkNvExternalMemory(VkDevice handler);

    std::string name() const override { return "VK_NV_external_memory"; }
    static std::string str() { return "VK_NV_external_memory"; }
    void init(VkDevice handler) override;
public:
};//class VkNvExternalMemory

#endif //VK_NV_external_memory

#if defined(VK_NV_external_memory_win32)

class VkNvExternalMemoryWin32 final : public DeviceExtensionBase { 
public:
    VkNvExternalMemoryWin32() = default;
    VkNvExternalMemoryWin32(VkDevice handler);

    std::string name() const override { return "VK_NV_external_memory_win32"; }
    static std::string str() { return "VK_NV_external_memory_win32"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV = {};
};//class VkNvExternalMemoryWin32

#endif //VK_NV_external_memory_win32

#if defined(VK_NV_win32_keyed_mutex)

class VkNvWin32KeyedMutex final : public DeviceExtensionBase { 
public:
    VkNvWin32KeyedMutex() = default;
    VkNvWin32KeyedMutex(VkDevice handler);

    std::string name() const override { return "VK_NV_win32_keyed_mutex"; }
    static std::string str() { return "VK_NV_win32_keyed_mutex"; }
    void init(VkDevice handler) override;
public:
};//class VkNvWin32KeyedMutex

#endif //VK_NV_win32_keyed_mutex

#if defined(VK_KHR_device_group)

class VkKhrDeviceGroup final : public DeviceExtensionBase { 
public:
    VkKhrDeviceGroup() = default;
    VkKhrDeviceGroup(VkDevice handler);

    std::string name() const override { return "VK_KHR_device_group"; }
    static std::string str() { return "VK_KHR_device_group"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR = {};
    PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR = {};
    PFN_vkCmdSetDeviceMaskKHR vkCmdSetDeviceMaskKHR = {};
    PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR = {};
    PFN_vkCmdDispatchBaseKHR vkCmdDispatchBaseKHR = {};
    PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR = {};
    PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR vkGetDeviceGroupPeerMemoryFeaturesKHR = {};
};//class VkKhrDeviceGroup

#endif //VK_KHR_device_group

#if defined(VK_KHR_shader_draw_parameters)

class VkKhrShaderDrawParameters final : public DeviceExtensionBase { 
public:
    VkKhrShaderDrawParameters() = default;
    VkKhrShaderDrawParameters(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_draw_parameters"; }
    static std::string str() { return "VK_KHR_shader_draw_parameters"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderDrawParameters

#endif //VK_KHR_shader_draw_parameters

#if defined(VK_EXT_shader_subgroup_ballot)

class VkExtShaderSubgroupBallot final : public DeviceExtensionBase { 
public:
    VkExtShaderSubgroupBallot() = default;
    VkExtShaderSubgroupBallot(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_subgroup_ballot"; }
    static std::string str() { return "VK_EXT_shader_subgroup_ballot"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderSubgroupBallot

#endif //VK_EXT_shader_subgroup_ballot

#if defined(VK_EXT_shader_subgroup_vote)

class VkExtShaderSubgroupVote final : public DeviceExtensionBase { 
public:
    VkExtShaderSubgroupVote() = default;
    VkExtShaderSubgroupVote(VkDevice handler);

    std::string name() const override { return "VK_EXT_shader_subgroup_vote"; }
    static std::string str() { return "VK_EXT_shader_subgroup_vote"; }
    void init(VkDevice handler) override;
public:
};//class VkExtShaderSubgroupVote

#endif //VK_EXT_shader_subgroup_vote

#if defined(VK_EXT_texture_compression_astc_hdr)

class VkExtTextureCompressionAstcHdr final : public DeviceExtensionBase { 
public:
    VkExtTextureCompressionAstcHdr() = default;
    VkExtTextureCompressionAstcHdr(VkDevice handler);

    std::string name() const override { return "VK_EXT_texture_compression_astc_hdr"; }
    static std::string str() { return "VK_EXT_texture_compression_astc_hdr"; }
    void init(VkDevice handler) override;
public:
};//class VkExtTextureCompressionAstcHdr

#endif //VK_EXT_texture_compression_astc_hdr

#if defined(VK_EXT_astc_decode_mode)

class VkExtAstcDecodeMode final : public DeviceExtensionBase { 
public:
    VkExtAstcDecodeMode() = default;
    VkExtAstcDecodeMode(VkDevice handler);

    std::string name() const override { return "VK_EXT_astc_decode_mode"; }
    static std::string str() { return "VK_EXT_astc_decode_mode"; }
    void init(VkDevice handler) override;
public:
};//class VkExtAstcDecodeMode

#endif //VK_EXT_astc_decode_mode

#if defined(VK_IMG_extension_69)

class VkImgExtension69 final : public DeviceExtensionBase { 
public:
    VkImgExtension69() = default;
    VkImgExtension69(VkDevice handler);

    std::string name() const override { return "VK_IMG_extension_69"; }
    static std::string str() { return "VK_IMG_extension_69"; }
    void init(VkDevice handler) override;
public:
};//class VkImgExtension69

#endif //VK_IMG_extension_69

#if defined(VK_KHR_maintenance1)

class VkKhrMaintenance1 final : public DeviceExtensionBase { 
public:
    VkKhrMaintenance1() = default;
    VkKhrMaintenance1(VkDevice handler);

    std::string name() const override { return "VK_KHR_maintenance1"; }
    static std::string str() { return "VK_KHR_maintenance1"; }
    void init(VkDevice handler) override;
public:
    PFN_vkTrimCommandPoolKHR vkTrimCommandPoolKHR = {};
};//class VkKhrMaintenance1

#endif //VK_KHR_maintenance1

#if defined(VK_KHR_external_memory)

class VkKhrExternalMemory final : public DeviceExtensionBase { 
public:
    VkKhrExternalMemory() = default;
    VkKhrExternalMemory(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_memory"; }
    static std::string str() { return "VK_KHR_external_memory"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExternalMemory

#endif //VK_KHR_external_memory

#if defined(VK_KHR_external_memory_win32)

class VkKhrExternalMemoryWin32 final : public DeviceExtensionBase { 
public:
    VkKhrExternalMemoryWin32() = default;
    VkKhrExternalMemoryWin32(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_memory_win32"; }
    static std::string str() { return "VK_KHR_external_memory_win32"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR = {};
    PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR = {};
};//class VkKhrExternalMemoryWin32

#endif //VK_KHR_external_memory_win32

#if defined(VK_KHR_external_memory_fd)

class VkKhrExternalMemoryFd final : public DeviceExtensionBase { 
public:
    VkKhrExternalMemoryFd() = default;
    VkKhrExternalMemoryFd(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_memory_fd"; }
    static std::string str() { return "VK_KHR_external_memory_fd"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR = {};
    PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR = {};
};//class VkKhrExternalMemoryFd

#endif //VK_KHR_external_memory_fd

#if defined(VK_KHR_win32_keyed_mutex)

class VkKhrWin32KeyedMutex final : public DeviceExtensionBase { 
public:
    VkKhrWin32KeyedMutex() = default;
    VkKhrWin32KeyedMutex(VkDevice handler);

    std::string name() const override { return "VK_KHR_win32_keyed_mutex"; }
    static std::string str() { return "VK_KHR_win32_keyed_mutex"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrWin32KeyedMutex

#endif //VK_KHR_win32_keyed_mutex

#if defined(VK_KHR_external_semaphore)

class VkKhrExternalSemaphore final : public DeviceExtensionBase { 
public:
    VkKhrExternalSemaphore() = default;
    VkKhrExternalSemaphore(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_semaphore"; }
    static std::string str() { return "VK_KHR_external_semaphore"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrExternalSemaphore

#endif //VK_KHR_external_semaphore

#if defined(VK_KHR_external_semaphore_win32)

class VkKhrExternalSemaphoreWin32 final : public DeviceExtensionBase { 
public:
    VkKhrExternalSemaphoreWin32() = default;
    VkKhrExternalSemaphoreWin32(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_semaphore_win32"; }
    static std::string str() { return "VK_KHR_external_semaphore_win32"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR = {};
    PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR = {};
};//class VkKhrExternalSemaphoreWin32

#endif //VK_KHR_external_semaphore_win32

#if defined(VK_KHR_external_semaphore_fd)

class VkKhrExternalSemaphoreFd final : public DeviceExtensionBase { 
public:
    VkKhrExternalSemaphoreFd() = default;
    VkKhrExternalSemaphoreFd(VkDevice handler);

    std::string name() const override { return "VK_KHR_external_semaphore_fd"; }
    static std::string str() { return "VK_KHR_external_semaphore_fd"; }
    void init(VkDevice handler) override;
public:
    PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR = {};
    PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR = {};
};//class VkKhrExternalSemaphoreFd

#endif //VK_KHR_external_semaphore_fd

#if defined(VK_KHR_push_descriptor)

class VkKhrPushDescriptor final : public DeviceExtensionBase { 
public:
    VkKhrPushDescriptor() = default;
    VkKhrPushDescriptor(VkDevice handler);

    std::string name() const override { return "VK_KHR_push_descriptor"; }
    static std::string str() { return "VK_KHR_push_descriptor"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR = {};
    PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR = {};
};//class VkKhrPushDescriptor

#endif //VK_KHR_push_descriptor

#if defined(VK_EXT_conditional_rendering)

class VkExtConditionalRendering final : public DeviceExtensionBase { 
public:
    VkExtConditionalRendering() = default;
    VkExtConditionalRendering(VkDevice handler);

    std::string name() const override { return "VK_EXT_conditional_rendering"; }
    static std::string str() { return "VK_EXT_conditional_rendering"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT = {};
    PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT = {};
};//class VkExtConditionalRendering

#endif //VK_EXT_conditional_rendering

#if defined(VK_KHR_shader_float16_int8)

class VkKhrShaderFloat16Int8 final : public DeviceExtensionBase { 
public:
    VkKhrShaderFloat16Int8() = default;
    VkKhrShaderFloat16Int8(VkDevice handler);

    std::string name() const override { return "VK_KHR_shader_float16_int8"; }
    static std::string str() { return "VK_KHR_shader_float16_int8"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrShaderFloat16Int8

#endif //VK_KHR_shader_float16_int8

#if defined(VK_KHR_16bit_storage)

class VkKhr16bitStorage final : public DeviceExtensionBase { 
public:
    VkKhr16bitStorage() = default;
    VkKhr16bitStorage(VkDevice handler);

    std::string name() const override { return "VK_KHR_16bit_storage"; }
    static std::string str() { return "VK_KHR_16bit_storage"; }
    void init(VkDevice handler) override;
public:
};//class VkKhr16bitStorage

#endif //VK_KHR_16bit_storage

#if defined(VK_KHR_incremental_present)

class VkKhrIncrementalPresent final : public DeviceExtensionBase { 
public:
    VkKhrIncrementalPresent() = default;
    VkKhrIncrementalPresent(VkDevice handler);

    std::string name() const override { return "VK_KHR_incremental_present"; }
    static std::string str() { return "VK_KHR_incremental_present"; }
    void init(VkDevice handler) override;
public:
};//class VkKhrIncrementalPresent

#endif //VK_KHR_incremental_present

#if defined(VK_KHR_descriptor_update_template)

class VkKhrDescriptorUpdateTemplate final : public DeviceExtensionBase { 
public:
    VkKhrDescriptorUpdateTemplate() = default;
    VkKhrDescriptorUpdateTemplate(VkDevice handler);

    std::string name() const override { return "VK_KHR_descriptor_update_template"; }
    static std::string str() { return "VK_KHR_descriptor_update_template"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCreateDescriptorUpdateTemplateKHR vkCreateDescriptorUpdateTemplateKHR = {};
    PFN_vkDestroyDescriptorUpdateTemplateKHR vkDestroyDescriptorUpdateTemplateKHR = {};
    PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR = {};
    PFN_vkUpdateDescriptorSetWithTemplateKHR vkUpdateDescriptorSetWithTemplateKHR = {};
};//class VkKhrDescriptorUpdateTemplate

#endif //VK_KHR_descriptor_update_template

#if defined(VK_NVX_device_generated_commands)

class VkNvxDeviceGeneratedCommands final : public DeviceExtensionBase { 
public:
    VkNvxDeviceGeneratedCommands() = default;
    VkNvxDeviceGeneratedCommands(VkDevice handler);

    std::string name() const override { return "VK_NVX_device_generated_commands"; }
    static std::string str() { return "VK_NVX_device_generated_commands"; }
    void init(VkDevice handler) override;
public:
};//class VkNvxDeviceGeneratedCommands

#endif //VK_NVX_device_generated_commands

#if defined(VK_NV_clip_space_w_scaling)

class VkNvClipSpaceWScaling final : public DeviceExtensionBase { 
public:
    VkNvClipSpaceWScaling() = default;
    VkNvClipSpaceWScaling(VkDevice handler);

    std::string name() const override { return "VK_NV_clip_space_w_scaling"; }
    static std::string str() { return "VK_NV_clip_space_w_scaling"; }
    void init(VkDevice handler) override;
public:
    PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV = {};
};//class VkNvClipSpaceWScaling

#endif //VK_NV_clip_space_w_scaling

#if defined(VK_EXT_display_control)

class VkExtDisplayControl final : public DeviceExtensionBase { 
public:
    VkExtDisplayControl() = default;
    VkExtDisplayControl(VkDevice handler);

    std::string name() const override { return "VK_EXT_display_control"; }
    static std::string str() { return "VK_EXT_display_control"; }
    void init(VkDevice handler) override;
public:
    PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT = {};
    PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT = {};
    PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT = {};
    PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT = {};
};//class VkExtDisplayControl

#endif //VK_EXT_display_control

#if defined(VK_GOOGLE_display_timing)

class VkGoogleDisplayTiming final : public DeviceExtensionBase { 
public:
    VkGoogleDisplayTiming() = default;
    VkGoogleDisplayTiming(VkDevice handler);

    std::string name() const override { return "VK_GOOGLE_display_timing"; }
    static std::string str() { return "VK_GOOGLE_display_timing"; }
    void init(VkDevice handler) override;
public:
    PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE = {};
    PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE = {};
};//class VkGoogleDisplayTiming

#endif //VK_GOOGLE_display_timing

#if defined(VK_NV_sample_mask_override_coverage)

class VkNvSampleMaskOverrideCoverage final : public DeviceExtensionBase { 
public:
    VkNvSampleMaskOverrideCoverage() = default;
    VkNvSampleMaskOverrideCoverage(VkDevice handler);

    std::string name() const override { return "VK_NV_sample_mask_override_coverage"; }
    static std::string str() { return "VK_NV_sample_mask_override_coverage"; }
    void init(VkDevice handler) override;
public:
};//class VkNvSampleMaskOverrideCoverage

#endif //VK_NV_sample_mask_override_coverage

#if defined(VK_NV_geometry_shader_passthrough)

class VkNvGeometryShaderPassthrough final : public DeviceExtensionBase { 
public:
    VkNvGeometryShaderPassthrough() = default;
    VkNvGeometryShaderPassthrough(VkDevice handler);

    std::string name() const override { return "VK_NV_geometry_shader_passthrough"; }
    static std::string str() { return "VK_NV_geometry_shader_passthrough"; }
    void init(VkDevice handler) override;
public:
};//class VkNvGeometryShaderPassthrough

#endif //VK_NV_geometry_shader_passthrough

#if defined(VK_NV_viewport_array2)

class VkNvViewportArray2 final : public DeviceExtensionBase { 
public:
    VkNvViewportArray2() = default;
    VkNvViewportArray2(VkDevice handler);

    std::string name() const override { return "VK_NV_viewport_array2"; }
    static std::string str() { return "VK_NV_viewport_array2"; }
    void init(VkDevice handler) override;
public:
};//class VkNvViewportArray2

#endif //VK_NV_viewport_array2

#if defined(VK_NVX_multiview_per_view_attributes)

class VkNvxMultiviewPerViewAttributes final : public DeviceExtensionBase { 
public:
    VkNvxMultiviewPerViewAttributes() = default;
    VkNvxMultiviewPerViewAttributes(VkDevice handler);

    std::string name() const override { return "VK_NVX_multiview_per_view_attributes"; }
    static std::string str() { return "VK_NVX_multiview_per_view_attributes"; }
    void init(VkDevice handler) override;
public:
};//class VkNvxMultiviewPerViewAttributes

#endif //VK_NVX_multiview_per_view_attributes

#if defined(VK_NV_viewport_swizzle)

class VkNvViewportSwizzle final : public DeviceExtensionBase { 
public:
    VkNvViewportSwizzle() = default;
    VkNvViewportSwizzle(VkDevice handler);

    std::string name() const override { return "VK_NV_viewport_swizzle"; }
    static std::string str() { return "VK_NV_viewport_swizzle"; }
    void init(VkDevice handler) override;
public:
};//class VkNvViewportSwizzle

#endif //VK_NV_viewport_swizzle

std::unique_ptr<DeviceExtensionBase> makeDeviceExtension(const std::string &name, VkDevice handle);


}//namespace HLGK

