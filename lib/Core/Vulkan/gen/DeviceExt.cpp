#include <HLGK/Core/Vulkan/gen/DeviceExt.hpp>

namespace HLGK {

#if defined(VK_EXT_discard_rectangles)

    VkExtDiscardRectangles::VkExtDiscardRectangles(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDiscardRectangles::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetDiscardRectangleEXT = getProcAddr<PFN_vkCmdSetDiscardRectangleEXT>("vkCmdSetDiscardRectangleEXT");
    }

#endif //VK_EXT_discard_rectangles

#if defined(VK_EXT_conservative_rasterization)

    VkExtConservativeRasterization::VkExtConservativeRasterization(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtConservativeRasterization::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_conservative_rasterization

#if defined(VK_EXT_depth_clip_enable)

    VkExtDepthClipEnable::VkExtDepthClipEnable(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDepthClipEnable::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_depth_clip_enable

#if defined(VK_EXT_hdr_metadata)

    VkExtHdrMetadata::VkExtHdrMetadata(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtHdrMetadata::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkSetHdrMetadataEXT = getProcAddr<PFN_vkSetHdrMetadataEXT>("vkSetHdrMetadataEXT");
    }

#endif //VK_EXT_hdr_metadata

#if defined(VK_KHR_imageless_framebuffer)

    VkKhrImagelessFramebuffer::VkKhrImagelessFramebuffer(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrImagelessFramebuffer::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_imageless_framebuffer

#if defined(VK_ANDROID_native_buffer)

    VkAndroidNativeBuffer::VkAndroidNativeBuffer(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAndroidNativeBuffer::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkQueueSignalReleaseImageANDROID = getProcAddr<PFN_vkQueueSignalReleaseImageANDROID>("vkQueueSignalReleaseImageANDROID");
        vkAcquireImageANDROID = getProcAddr<PFN_vkAcquireImageANDROID>("vkAcquireImageANDROID");
        vkGetSwapchainGrallocUsage2ANDROID = getProcAddr<PFN_vkGetSwapchainGrallocUsage2ANDROID>("vkGetSwapchainGrallocUsage2ANDROID");
        vkGetSwapchainGrallocUsageANDROID = getProcAddr<PFN_vkGetSwapchainGrallocUsageANDROID>("vkGetSwapchainGrallocUsageANDROID");
    }

#endif //VK_ANDROID_native_buffer

#if defined(VK_KHR_create_renderpass2)

    VkKhrCreateRenderpass2::VkKhrCreateRenderpass2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrCreateRenderpass2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdEndRenderPass2KHR = getProcAddr<PFN_vkCmdEndRenderPass2KHR>("vkCmdEndRenderPass2KHR");
        vkCreateRenderPass2KHR = getProcAddr<PFN_vkCreateRenderPass2KHR>("vkCreateRenderPass2KHR");
        vkCmdNextSubpass2KHR = getProcAddr<PFN_vkCmdNextSubpass2KHR>("vkCmdNextSubpass2KHR");
        vkCmdBeginRenderPass2KHR = getProcAddr<PFN_vkCmdBeginRenderPass2KHR>("vkCmdBeginRenderPass2KHR");
    }

#endif //VK_KHR_create_renderpass2

#if defined(VK_KHR_shared_presentable_image)

    VkKhrSharedPresentableImage::VkKhrSharedPresentableImage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSharedPresentableImage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetSwapchainStatusKHR = getProcAddr<PFN_vkGetSwapchainStatusKHR>("vkGetSwapchainStatusKHR");
    }

#endif //VK_KHR_shared_presentable_image

#if defined(VK_KHR_external_fence)

    VkKhrExternalFence::VkKhrExternalFence(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalFence::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_external_fence

#if defined(VK_KHR_external_fence_win32)

    VkKhrExternalFenceWin32::VkKhrExternalFenceWin32(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalFenceWin32::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkImportFenceWin32HandleKHR = getProcAddr<PFN_vkImportFenceWin32HandleKHR>("vkImportFenceWin32HandleKHR");
        vkGetFenceWin32HandleKHR = getProcAddr<PFN_vkGetFenceWin32HandleKHR>("vkGetFenceWin32HandleKHR");
    }

#endif //VK_KHR_external_fence_win32

#if defined(VK_KHR_external_fence_fd)

    VkKhrExternalFenceFd::VkKhrExternalFenceFd(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalFenceFd::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkImportFenceFdKHR = getProcAddr<PFN_vkImportFenceFdKHR>("vkImportFenceFdKHR");
        vkGetFenceFdKHR = getProcAddr<PFN_vkGetFenceFdKHR>("vkGetFenceFdKHR");
    }

#endif //VK_KHR_external_fence_fd

#if defined(VK_KHR_performance_query)

    VkKhrPerformanceQuery::VkKhrPerformanceQuery(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPerformanceQuery::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = getProcAddr<PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR>("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
        vkAcquireProfilingLockKHR = getProcAddr<PFN_vkAcquireProfilingLockKHR>("vkAcquireProfilingLockKHR");
        vkReleaseProfilingLockKHR = getProcAddr<PFN_vkReleaseProfilingLockKHR>("vkReleaseProfilingLockKHR");
        vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = getProcAddr<PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR>("vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    }

#endif //VK_KHR_performance_query

#if defined(VK_KHR_maintenance2)

    VkKhrMaintenance2::VkKhrMaintenance2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMaintenance2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_maintenance2

#if defined(VK_KHR_variable_pointers)

    VkKhrVariablePointers::VkKhrVariablePointers(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrVariablePointers::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_variable_pointers

#if defined(VK_EXT_external_memory_dma_buf)

    VkExtExternalMemoryDmaBuf::VkExtExternalMemoryDmaBuf(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExternalMemoryDmaBuf::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_external_memory_dma_buf

#if defined(VK_EXT_queue_family_foreign)

    VkExtQueueFamilyForeign::VkExtQueueFamilyForeign(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtQueueFamilyForeign::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_queue_family_foreign

#if defined(VK_KHR_dedicated_allocation)

    VkKhrDedicatedAllocation::VkKhrDedicatedAllocation(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDedicatedAllocation::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_dedicated_allocation

#if defined(VK_NV_glsl_shader)

    VkNvGlslShader::VkNvGlslShader(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvGlslShader::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_glsl_shader

#if defined(VK_ANDROID_external_memory_android_hardware_buffer)

    VkAndroidExternalMemoryAndroidHardwareBuffer::VkAndroidExternalMemoryAndroidHardwareBuffer(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAndroidExternalMemoryAndroidHardwareBuffer::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryAndroidHardwareBufferANDROID = getProcAddr<PFN_vkGetMemoryAndroidHardwareBufferANDROID>("vkGetMemoryAndroidHardwareBufferANDROID");
        vkGetAndroidHardwareBufferPropertiesANDROID = getProcAddr<PFN_vkGetAndroidHardwareBufferPropertiesANDROID>("vkGetAndroidHardwareBufferPropertiesANDROID");
    }

#endif //VK_ANDROID_external_memory_android_hardware_buffer

#if defined(VK_EXT_sampler_filter_minmax)

    VkExtSamplerFilterMinmax::VkExtSamplerFilterMinmax(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtSamplerFilterMinmax::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_sampler_filter_minmax

#if defined(VK_KHR_storage_buffer_storage_class)

    VkKhrStorageBufferStorageClass::VkKhrStorageBufferStorageClass(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrStorageBufferStorageClass::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_storage_buffer_storage_class

#if defined(VK_AMD_gpu_shader_int16)

    VkAmdGpuShaderInt16::VkAmdGpuShaderInt16(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdGpuShaderInt16::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_gpu_shader_int16

#if defined(VK_AMD_mixed_attachment_samples)

    VkAmdMixedAttachmentSamples::VkAmdMixedAttachmentSamples(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdMixedAttachmentSamples::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_mixed_attachment_samples

#if defined(VK_AMD_shader_fragment_mask)

    VkAmdShaderFragmentMask::VkAmdShaderFragmentMask(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderFragmentMask::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_fragment_mask

#if defined(VK_EXT_inline_uniform_block)

    VkExtInlineUniformBlock::VkExtInlineUniformBlock(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtInlineUniformBlock::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_inline_uniform_block

#if defined(VK_EXT_depth_range_unrestricted)

    VkExtDepthRangeUnrestricted::VkExtDepthRangeUnrestricted(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDepthRangeUnrestricted::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_depth_range_unrestricted

#if defined(VK_EXT_shader_stencil_export)

    VkExtShaderStencilExport::VkExtShaderStencilExport(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderStencilExport::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_stencil_export

#if defined(VK_EXT_sample_locations)

    VkExtSampleLocations::VkExtSampleLocations(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtSampleLocations::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceMultisamplePropertiesEXT = getProcAddr<PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT>("vkGetPhysicalDeviceMultisamplePropertiesEXT");
        vkCmdSetSampleLocationsEXT = getProcAddr<PFN_vkCmdSetSampleLocationsEXT>("vkCmdSetSampleLocationsEXT");
    }

#endif //VK_EXT_sample_locations

#if defined(VK_KHR_relaxed_block_layout)

    VkKhrRelaxedBlockLayout::VkKhrRelaxedBlockLayout(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrRelaxedBlockLayout::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_relaxed_block_layout

#if defined(VK_KHR_get_memory_requirements2)

    VkKhrGetMemoryRequirements2::VkKhrGetMemoryRequirements2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrGetMemoryRequirements2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetBufferMemoryRequirements2KHR = getProcAddr<PFN_vkGetBufferMemoryRequirements2KHR>("vkGetBufferMemoryRequirements2KHR");
        vkGetImageMemoryRequirements2KHR = getProcAddr<PFN_vkGetImageMemoryRequirements2KHR>("vkGetImageMemoryRequirements2KHR");
        vkGetImageSparseMemoryRequirements2KHR = getProcAddr<PFN_vkGetImageSparseMemoryRequirements2KHR>("vkGetImageSparseMemoryRequirements2KHR");
    }

#endif //VK_KHR_get_memory_requirements2

#if defined(VK_KHR_image_format_list)

    VkKhrImageFormatList::VkKhrImageFormatList(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrImageFormatList::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_image_format_list

#if defined(VK_EXT_blend_operation_advanced)

    VkExtBlendOperationAdvanced::VkExtBlendOperationAdvanced(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtBlendOperationAdvanced::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_blend_operation_advanced

#if defined(VK_KHR_sampler_mirror_clamp_to_edge)

    VkKhrSamplerMirrorClampToEdge::VkKhrSamplerMirrorClampToEdge(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSamplerMirrorClampToEdge::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_sampler_mirror_clamp_to_edge

#if defined(VK_NV_fragment_coverage_to_color)

    VkNvFragmentCoverageToColor::VkNvFragmentCoverageToColor(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvFragmentCoverageToColor::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_fragment_coverage_to_color

#if defined(VK_KHR_acceleration_structure)

    VkKhrAccelerationStructure::VkKhrAccelerationStructure(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrAccelerationStructure::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdCopyMemoryToAccelerationStructureKHR = getProcAddr<PFN_vkCmdCopyMemoryToAccelerationStructureKHR>("vkCmdCopyMemoryToAccelerationStructureKHR");
        vkDestroyAccelerationStructureKHR = getProcAddr<PFN_vkDestroyAccelerationStructureKHR>("vkDestroyAccelerationStructureKHR");
        vkGetAccelerationStructureBuildSizesKHR = getProcAddr<PFN_vkGetAccelerationStructureBuildSizesKHR>("vkGetAccelerationStructureBuildSizesKHR");
        vkCopyAccelerationStructureKHR = getProcAddr<PFN_vkCopyAccelerationStructureKHR>("vkCopyAccelerationStructureKHR");
        vkGetDeviceAccelerationStructureCompatibilityKHR = getProcAddr<PFN_vkGetDeviceAccelerationStructureCompatibilityKHR>("vkGetDeviceAccelerationStructureCompatibilityKHR");
        vkCreateAccelerationStructureKHR = getProcAddr<PFN_vkCreateAccelerationStructureKHR>("vkCreateAccelerationStructureKHR");
        vkGetAccelerationStructureDeviceAddressKHR = getProcAddr<PFN_vkGetAccelerationStructureDeviceAddressKHR>("vkGetAccelerationStructureDeviceAddressKHR");
        vkCopyAccelerationStructureToMemoryKHR = getProcAddr<PFN_vkCopyAccelerationStructureToMemoryKHR>("vkCopyAccelerationStructureToMemoryKHR");
        vkCmdCopyAccelerationStructureKHR = getProcAddr<PFN_vkCmdCopyAccelerationStructureKHR>("vkCmdCopyAccelerationStructureKHR");
        vkBuildAccelerationStructuresKHR = getProcAddr<PFN_vkBuildAccelerationStructuresKHR>("vkBuildAccelerationStructuresKHR");
        vkCmdBuildAccelerationStructuresKHR = getProcAddr<PFN_vkCmdBuildAccelerationStructuresKHR>("vkCmdBuildAccelerationStructuresKHR");
        vkCmdWriteAccelerationStructuresPropertiesKHR = getProcAddr<PFN_vkCmdWriteAccelerationStructuresPropertiesKHR>("vkCmdWriteAccelerationStructuresPropertiesKHR");
        vkCmdBuildAccelerationStructuresIndirectKHR = getProcAddr<PFN_vkCmdBuildAccelerationStructuresIndirectKHR>("vkCmdBuildAccelerationStructuresIndirectKHR");
        vkCmdCopyAccelerationStructureToMemoryKHR = getProcAddr<PFN_vkCmdCopyAccelerationStructureToMemoryKHR>("vkCmdCopyAccelerationStructureToMemoryKHR");
        vkCopyMemoryToAccelerationStructureKHR = getProcAddr<PFN_vkCopyMemoryToAccelerationStructureKHR>("vkCopyMemoryToAccelerationStructureKHR");
        vkWriteAccelerationStructuresPropertiesKHR = getProcAddr<PFN_vkWriteAccelerationStructuresPropertiesKHR>("vkWriteAccelerationStructuresPropertiesKHR");
    }

#endif //VK_KHR_acceleration_structure

#if defined(VK_NV_framebuffer_mixed_samples)

    VkNvFramebufferMixedSamples::VkNvFramebufferMixedSamples(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvFramebufferMixedSamples::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_framebuffer_mixed_samples

#if defined(VK_NV_fill_rectangle)

    VkNvFillRectangle::VkNvFillRectangle(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvFillRectangle::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_fill_rectangle

#if defined(VK_NV_shader_sm_builtins)

    VkNvShaderSmBuiltins::VkNvShaderSmBuiltins(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvShaderSmBuiltins::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_shader_sm_builtins

#if defined(VK_EXT_post_depth_coverage)

    VkExtPostDepthCoverage::VkExtPostDepthCoverage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPostDepthCoverage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_post_depth_coverage

#if defined(VK_KHR_sampler_ycbcr_conversion)

    VkKhrSamplerYcbcrConversion::VkKhrSamplerYcbcrConversion(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSamplerYcbcrConversion::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkDestroySamplerYcbcrConversionKHR = getProcAddr<PFN_vkDestroySamplerYcbcrConversionKHR>("vkDestroySamplerYcbcrConversionKHR");
        vkCreateSamplerYcbcrConversionKHR = getProcAddr<PFN_vkCreateSamplerYcbcrConversionKHR>("vkCreateSamplerYcbcrConversionKHR");
    }

#endif //VK_KHR_sampler_ycbcr_conversion

#if defined(VK_KHR_bind_memory2)

    VkKhrBindMemory2::VkKhrBindMemory2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrBindMemory2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkBindImageMemory2KHR = getProcAddr<PFN_vkBindImageMemory2KHR>("vkBindImageMemory2KHR");
        vkBindBufferMemory2KHR = getProcAddr<PFN_vkBindBufferMemory2KHR>("vkBindBufferMemory2KHR");
    }

#endif //VK_KHR_bind_memory2

#if defined(VK_EXT_image_drm_format_modifier)

    VkExtImageDrmFormatModifier::VkExtImageDrmFormatModifier(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtImageDrmFormatModifier::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetImageDrmFormatModifierPropertiesEXT = getProcAddr<PFN_vkGetImageDrmFormatModifierPropertiesEXT>("vkGetImageDrmFormatModifierPropertiesEXT");
    }

#endif //VK_EXT_image_drm_format_modifier

#if defined(VK_IMG_filter_cubic)

    VkImgFilterCubic::VkImgFilterCubic(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkImgFilterCubic::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_IMG_filter_cubic

#if defined(VK_EXT_validation_cache)

    VkExtValidationCache::VkExtValidationCache(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtValidationCache::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkMergeValidationCachesEXT = getProcAddr<PFN_vkMergeValidationCachesEXT>("vkMergeValidationCachesEXT");
        vkDestroyValidationCacheEXT = getProcAddr<PFN_vkDestroyValidationCacheEXT>("vkDestroyValidationCacheEXT");
        vkCreateValidationCacheEXT = getProcAddr<PFN_vkCreateValidationCacheEXT>("vkCreateValidationCacheEXT");
        vkGetValidationCacheDataEXT = getProcAddr<PFN_vkGetValidationCacheDataEXT>("vkGetValidationCacheDataEXT");
    }

#endif //VK_EXT_validation_cache

#if defined(VK_EXT_descriptor_indexing)

    VkExtDescriptorIndexing::VkExtDescriptorIndexing(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDescriptorIndexing::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_descriptor_indexing

#if defined(VK_EXT_shader_viewport_index_layer)

    VkExtShaderViewportIndexLayer::VkExtShaderViewportIndexLayer(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderViewportIndexLayer::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_viewport_index_layer

#if defined(VK_KHR_portability_subset)

    VkKhrPortabilitySubset::VkKhrPortabilitySubset(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPortabilitySubset::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_portability_subset

#if defined(VK_NV_shading_rate_image)

    VkNvShadingRateImage::VkNvShadingRateImage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvShadingRateImage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetCoarseSampleOrderNV = getProcAddr<PFN_vkCmdSetCoarseSampleOrderNV>("vkCmdSetCoarseSampleOrderNV");
        vkCmdBindShadingRateImageNV = getProcAddr<PFN_vkCmdBindShadingRateImageNV>("vkCmdBindShadingRateImageNV");
        vkCmdSetViewportShadingRatePaletteNV = getProcAddr<PFN_vkCmdSetViewportShadingRatePaletteNV>("vkCmdSetViewportShadingRatePaletteNV");
    }

#endif //VK_NV_shading_rate_image

#if defined(VK_NV_ray_tracing)

    VkNvRayTracing::VkNvRayTracing(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvRayTracing::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkDestroyAccelerationStructureNV = getProcAddr<PFN_vkDestroyAccelerationStructureNV>("vkDestroyAccelerationStructureNV");
        vkCreateRayTracingPipelinesNV = getProcAddr<PFN_vkCreateRayTracingPipelinesNV>("vkCreateRayTracingPipelinesNV");
        vkGetRayTracingShaderGroupHandlesNV = getProcAddr<PFN_vkGetRayTracingShaderGroupHandlesNV>("vkGetRayTracingShaderGroupHandlesNV");
        vkCmdWriteAccelerationStructuresPropertiesNV = getProcAddr<PFN_vkCmdWriteAccelerationStructuresPropertiesNV>("vkCmdWriteAccelerationStructuresPropertiesNV");
        vkCreateAccelerationStructureNV = getProcAddr<PFN_vkCreateAccelerationStructureNV>("vkCreateAccelerationStructureNV");
        vkCompileDeferredNV = getProcAddr<PFN_vkCompileDeferredNV>("vkCompileDeferredNV");
        vkGetAccelerationStructureHandleNV = getProcAddr<PFN_vkGetAccelerationStructureHandleNV>("vkGetAccelerationStructureHandleNV");
        vkGetAccelerationStructureMemoryRequirementsNV = getProcAddr<PFN_vkGetAccelerationStructureMemoryRequirementsNV>("vkGetAccelerationStructureMemoryRequirementsNV");
        vkCmdCopyAccelerationStructureNV = getProcAddr<PFN_vkCmdCopyAccelerationStructureNV>("vkCmdCopyAccelerationStructureNV");
        vkBindAccelerationStructureMemoryNV = getProcAddr<PFN_vkBindAccelerationStructureMemoryNV>("vkBindAccelerationStructureMemoryNV");
        vkCmdBuildAccelerationStructureNV = getProcAddr<PFN_vkCmdBuildAccelerationStructureNV>("vkCmdBuildAccelerationStructureNV");
        vkCmdTraceRaysNV = getProcAddr<PFN_vkCmdTraceRaysNV>("vkCmdTraceRaysNV");
    }

#endif //VK_NV_ray_tracing

#if defined(VK_NV_representative_fragment_test)

    VkNvRepresentativeFragmentTest::VkNvRepresentativeFragmentTest(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvRepresentativeFragmentTest::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_representative_fragment_test

#if defined(VK_KHR_maintenance3)

    VkKhrMaintenance3::VkKhrMaintenance3(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMaintenance3::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDescriptorSetLayoutSupportKHR = getProcAddr<PFN_vkGetDescriptorSetLayoutSupportKHR>("vkGetDescriptorSetLayoutSupportKHR");
    }

#endif //VK_KHR_maintenance3

#if defined(VK_KHR_draw_indirect_count)

    VkKhrDrawIndirectCount::VkKhrDrawIndirectCount(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDrawIndirectCount::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDrawIndexedIndirectCountKHR = getProcAddr<PFN_vkCmdDrawIndexedIndirectCountKHR>("vkCmdDrawIndexedIndirectCountKHR");
        vkCmdDrawIndirectCountKHR = getProcAddr<PFN_vkCmdDrawIndirectCountKHR>("vkCmdDrawIndirectCountKHR");
    }

#endif //VK_KHR_draw_indirect_count

#if defined(VK_EXT_filter_cubic)

    VkExtFilterCubic::VkExtFilterCubic(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtFilterCubic::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_filter_cubic

#if defined(VK_QCOM_render_pass_shader_resolve)

    VkQcomRenderPassShaderResolve::VkQcomRenderPassShaderResolve(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkQcomRenderPassShaderResolve::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_QCOM_render_pass_shader_resolve

#if defined(VK_EXT_global_priority)

    VkExtGlobalPriority::VkExtGlobalPriority(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtGlobalPriority::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_global_priority

#if defined(VK_KHR_shader_subgroup_extended_types)

    VkKhrShaderSubgroupExtendedTypes::VkKhrShaderSubgroupExtendedTypes(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderSubgroupExtendedTypes::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_subgroup_extended_types

#if defined(VK_KHR_8bit_storage)

    VkKhr8bitStorage::VkKhr8bitStorage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhr8bitStorage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_8bit_storage

#if defined(VK_EXT_external_memory_host)

    VkExtExternalMemoryHost::VkExtExternalMemoryHost(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExternalMemoryHost::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryHostPointerPropertiesEXT = getProcAddr<PFN_vkGetMemoryHostPointerPropertiesEXT>("vkGetMemoryHostPointerPropertiesEXT");
    }

#endif //VK_EXT_external_memory_host

#if defined(VK_AMD_buffer_marker)

    VkAmdBufferMarker::VkAmdBufferMarker(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdBufferMarker::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdWriteBufferMarkerAMD = getProcAddr<PFN_vkCmdWriteBufferMarkerAMD>("vkCmdWriteBufferMarkerAMD");
    }

#endif //VK_AMD_buffer_marker

#if defined(VK_KHR_shader_atomic_int64)

    VkKhrShaderAtomicInt64::VkKhrShaderAtomicInt64(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderAtomicInt64::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_atomic_int64

#if defined(VK_KHR_shader_clock)

    VkKhrShaderClock::VkKhrShaderClock(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderClock::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_clock

#if defined(VK_AMD_pipeline_compiler_control)

    VkAmdPipelineCompilerControl::VkAmdPipelineCompilerControl(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdPipelineCompilerControl::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_pipeline_compiler_control

#if defined(VK_EXT_calibrated_timestamps)

    VkExtCalibratedTimestamps::VkExtCalibratedTimestamps(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtCalibratedTimestamps::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetCalibratedTimestampsEXT = getProcAddr<PFN_vkGetCalibratedTimestampsEXT>("vkGetCalibratedTimestampsEXT");
        vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = getProcAddr<PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT>("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
    }

#endif //VK_EXT_calibrated_timestamps

#if defined(VK_AMD_shader_core_properties)

    VkAmdShaderCoreProperties::VkAmdShaderCoreProperties(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderCoreProperties::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_core_properties

#if defined(VK_EXT_video_decode_h265)

    VkExtVideoDecodeH265::VkExtVideoDecodeH265(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVideoDecodeH265::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_video_decode_h265

#if defined(VK_KHR_global_priority)

    VkKhrGlobalPriority::VkKhrGlobalPriority(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrGlobalPriority::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_global_priority

#if defined(VK_AMD_rasterization_order)

    VkAmdRasterizationOrder::VkAmdRasterizationOrder(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdRasterizationOrder::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_rasterization_order

#if defined(VK_AMD_memory_overallocation_behavior)

    VkAmdMemoryOverallocationBehavior::VkAmdMemoryOverallocationBehavior(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdMemoryOverallocationBehavior::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_memory_overallocation_behavior

#if defined(VK_EXT_vertex_attribute_divisor)

    VkExtVertexAttributeDivisor::VkExtVertexAttributeDivisor(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVertexAttributeDivisor::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_vertex_attribute_divisor

#if defined(VK_GGP_frame_token)

    VkGgpFrameToken::VkGgpFrameToken(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkGgpFrameToken::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_GGP_frame_token

#if defined(VK_EXT_pipeline_creation_feedback)

    VkExtPipelineCreationFeedback::VkExtPipelineCreationFeedback(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPipelineCreationFeedback::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_pipeline_creation_feedback

#if defined(VK_KHR_driver_properties)

    VkKhrDriverProperties::VkKhrDriverProperties(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDriverProperties::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_driver_properties

#if defined(VK_KHR_shader_float_controls)

    VkKhrShaderFloatControls::VkKhrShaderFloatControls(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderFloatControls::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_float_controls

#if defined(VK_NV_shader_subgroup_partitioned)

    VkNvShaderSubgroupPartitioned::VkNvShaderSubgroupPartitioned(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvShaderSubgroupPartitioned::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_shader_subgroup_partitioned

#if defined(VK_KHR_swapchain)

    VkKhrSwapchain::VkKhrSwapchain(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSwapchain::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetSwapchainImagesKHR = getProcAddr<PFN_vkGetSwapchainImagesKHR>("vkGetSwapchainImagesKHR");
        vkCreateSwapchainKHR = getProcAddr<PFN_vkCreateSwapchainKHR>("vkCreateSwapchainKHR");
        vkGetPhysicalDevicePresentRectanglesKHR = getProcAddr<PFN_vkGetPhysicalDevicePresentRectanglesKHR>("vkGetPhysicalDevicePresentRectanglesKHR");
        vkDestroySwapchainKHR = getProcAddr<PFN_vkDestroySwapchainKHR>("vkDestroySwapchainKHR");
        vkQueuePresentKHR = getProcAddr<PFN_vkQueuePresentKHR>("vkQueuePresentKHR");
        vkGetDeviceGroupSurfacePresentModesKHR = getProcAddr<PFN_vkGetDeviceGroupSurfacePresentModesKHR>("vkGetDeviceGroupSurfacePresentModesKHR");
        vkAcquireNextImageKHR = getProcAddr<PFN_vkAcquireNextImageKHR>("vkAcquireNextImageKHR");
        vkAcquireNextImage2KHR = getProcAddr<PFN_vkAcquireNextImage2KHR>("vkAcquireNextImage2KHR");
        vkGetDeviceGroupPresentCapabilitiesKHR = getProcAddr<PFN_vkGetDeviceGroupPresentCapabilitiesKHR>("vkGetDeviceGroupPresentCapabilitiesKHR");
    }

#endif //VK_KHR_swapchain

#if defined(VK_KHR_depth_stencil_resolve)

    VkKhrDepthStencilResolve::VkKhrDepthStencilResolve(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDepthStencilResolve::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_depth_stencil_resolve

#if defined(VK_KHR_swapchain_mutable_format)

    VkKhrSwapchainMutableFormat::VkKhrSwapchainMutableFormat(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSwapchainMutableFormat::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_swapchain_mutable_format

#if defined(VK_NV_compute_shader_derivatives)

    VkNvComputeShaderDerivatives::VkNvComputeShaderDerivatives(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvComputeShaderDerivatives::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_compute_shader_derivatives

#if defined(VK_NV_mesh_shader)

    VkNvMeshShader::VkNvMeshShader(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvMeshShader::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDrawMeshTasksIndirectCountNV = getProcAddr<PFN_vkCmdDrawMeshTasksIndirectCountNV>("vkCmdDrawMeshTasksIndirectCountNV");
        vkCmdDrawMeshTasksNV = getProcAddr<PFN_vkCmdDrawMeshTasksNV>("vkCmdDrawMeshTasksNV");
        vkCmdDrawMeshTasksIndirectNV = getProcAddr<PFN_vkCmdDrawMeshTasksIndirectNV>("vkCmdDrawMeshTasksIndirectNV");
    }

#endif //VK_NV_mesh_shader

#if defined(VK_NV_fragment_shader_barycentric)

    VkNvFragmentShaderBarycentric::VkNvFragmentShaderBarycentric(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvFragmentShaderBarycentric::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_fragment_shader_barycentric

#if defined(VK_NV_shader_image_footprint)

    VkNvShaderImageFootprint::VkNvShaderImageFootprint(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvShaderImageFootprint::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_shader_image_footprint

#if defined(VK_NV_scissor_exclusive)

    VkNvScissorExclusive::VkNvScissorExclusive(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvScissorExclusive::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetExclusiveScissorNV = getProcAddr<PFN_vkCmdSetExclusiveScissorNV>("vkCmdSetExclusiveScissorNV");
    }

#endif //VK_NV_scissor_exclusive

#if defined(VK_NV_device_diagnostic_checkpoints)

    VkNvDeviceDiagnosticCheckpoints::VkNvDeviceDiagnosticCheckpoints(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvDeviceDiagnosticCheckpoints::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetCheckpointNV = getProcAddr<PFN_vkCmdSetCheckpointNV>("vkCmdSetCheckpointNV");
        vkGetQueueCheckpointDataNV = getProcAddr<PFN_vkGetQueueCheckpointDataNV>("vkGetQueueCheckpointDataNV");
    }

#endif //VK_NV_device_diagnostic_checkpoints

#if defined(VK_KHR_timeline_semaphore)

    VkKhrTimelineSemaphore::VkKhrTimelineSemaphore(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrTimelineSemaphore::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkWaitSemaphoresKHR = getProcAddr<PFN_vkWaitSemaphoresKHR>("vkWaitSemaphoresKHR");
        vkGetSemaphoreCounterValueKHR = getProcAddr<PFN_vkGetSemaphoreCounterValueKHR>("vkGetSemaphoreCounterValueKHR");
        vkSignalSemaphoreKHR = getProcAddr<PFN_vkSignalSemaphoreKHR>("vkSignalSemaphoreKHR");
    }

#endif //VK_KHR_timeline_semaphore

#if defined(VK_KHR_extension_209)

    VkKhrExtension209::VkKhrExtension209(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExtension209::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_extension_209

#if defined(VK_AMD_shader_trinary_minmax)

    VkAmdShaderTrinaryMinmax::VkAmdShaderTrinaryMinmax(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderTrinaryMinmax::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_trinary_minmax

#if defined(VK_INTEL_shader_integer_functions2)

    VkIntelShaderIntegerFunctions2::VkIntelShaderIntegerFunctions2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkIntelShaderIntegerFunctions2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_INTEL_shader_integer_functions2

#if defined(VK_INTEL_performance_query)

    VkIntelPerformanceQuery::VkIntelPerformanceQuery(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkIntelPerformanceQuery::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkQueueSetPerformanceConfigurationINTEL = getProcAddr<PFN_vkQueueSetPerformanceConfigurationINTEL>("vkQueueSetPerformanceConfigurationINTEL");
        vkAcquirePerformanceConfigurationINTEL = getProcAddr<PFN_vkAcquirePerformanceConfigurationINTEL>("vkAcquirePerformanceConfigurationINTEL");
        vkReleasePerformanceConfigurationINTEL = getProcAddr<PFN_vkReleasePerformanceConfigurationINTEL>("vkReleasePerformanceConfigurationINTEL");
        vkInitializePerformanceApiINTEL = getProcAddr<PFN_vkInitializePerformanceApiINTEL>("vkInitializePerformanceApiINTEL");
        vkGetPerformanceParameterINTEL = getProcAddr<PFN_vkGetPerformanceParameterINTEL>("vkGetPerformanceParameterINTEL");
        vkUninitializePerformanceApiINTEL = getProcAddr<PFN_vkUninitializePerformanceApiINTEL>("vkUninitializePerformanceApiINTEL");
        vkCmdSetPerformanceStreamMarkerINTEL = getProcAddr<PFN_vkCmdSetPerformanceStreamMarkerINTEL>("vkCmdSetPerformanceStreamMarkerINTEL");
        vkCmdSetPerformanceMarkerINTEL = getProcAddr<PFN_vkCmdSetPerformanceMarkerINTEL>("vkCmdSetPerformanceMarkerINTEL");
        vkCmdSetPerformanceOverrideINTEL = getProcAddr<PFN_vkCmdSetPerformanceOverrideINTEL>("vkCmdSetPerformanceOverrideINTEL");
    }

#endif //VK_INTEL_performance_query

#if defined(VK_KHR_vulkan_memory_model)

    VkKhrVulkanMemoryModel::VkKhrVulkanMemoryModel(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrVulkanMemoryModel::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_vulkan_memory_model

#if defined(VK_EXT_pci_bus_info)

    VkExtPciBusInfo::VkExtPciBusInfo(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPciBusInfo::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_pci_bus_info

#if defined(VK_AMD_display_native_hdr)

    VkAmdDisplayNativeHdr::VkAmdDisplayNativeHdr(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdDisplayNativeHdr::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkSetLocalDimmingAMD = getProcAddr<PFN_vkSetLocalDimmingAMD>("vkSetLocalDimmingAMD");
    }

#endif //VK_AMD_display_native_hdr

#if defined(VK_KHR_shader_terminate_invocation)

    VkKhrShaderTerminateInvocation::VkKhrShaderTerminateInvocation(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderTerminateInvocation::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_terminate_invocation

#if defined(VK_EXT_fragment_density_map)

    VkExtFragmentDensityMap::VkExtFragmentDensityMap(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtFragmentDensityMap::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_fragment_density_map

#if defined(VK_AMD_shader_explicit_vertex_parameter)

    VkAmdShaderExplicitVertexParameter::VkAmdShaderExplicitVertexParameter(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderExplicitVertexParameter::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_explicit_vertex_parameter

#if defined(VK_EXT_scalar_block_layout)

    VkExtScalarBlockLayout::VkExtScalarBlockLayout(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtScalarBlockLayout::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_scalar_block_layout

#if defined(VK_GOOGLE_hlsl_functionality1)

    VkGoogleHlslFunctionality1::VkGoogleHlslFunctionality1(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkGoogleHlslFunctionality1::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_GOOGLE_hlsl_functionality1

#if defined(VK_GOOGLE_decorate_string)

    VkGoogleDecorateString::VkGoogleDecorateString(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkGoogleDecorateString::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_GOOGLE_decorate_string

#if defined(VK_EXT_subgroup_size_control)

    VkExtSubgroupSizeControl::VkExtSubgroupSizeControl(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtSubgroupSizeControl::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_subgroup_size_control

#if defined(VK_KHR_fragment_shading_rate)

    VkKhrFragmentShadingRate::VkKhrFragmentShadingRate(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrFragmentShadingRate::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetFragmentShadingRateKHR = getProcAddr<PFN_vkCmdSetFragmentShadingRateKHR>("vkCmdSetFragmentShadingRateKHR");
        vkGetPhysicalDeviceFragmentShadingRatesKHR = getProcAddr<PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR>("vkGetPhysicalDeviceFragmentShadingRatesKHR");
    }

#endif //VK_KHR_fragment_shading_rate

#if defined(VK_AMD_shader_core_properties2)

    VkAmdShaderCoreProperties2::VkAmdShaderCoreProperties2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderCoreProperties2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_core_properties2

#if defined(VK_EXT_debug_marker)

    VkExtDebugMarker::VkExtDebugMarker(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDebugMarker::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDebugMarkerBeginEXT = getProcAddr<PFN_vkCmdDebugMarkerBeginEXT>("vkCmdDebugMarkerBeginEXT");
        vkCmdDebugMarkerEndEXT = getProcAddr<PFN_vkCmdDebugMarkerEndEXT>("vkCmdDebugMarkerEndEXT");
        vkCmdDebugMarkerInsertEXT = getProcAddr<PFN_vkCmdDebugMarkerInsertEXT>("vkCmdDebugMarkerInsertEXT");
        vkDebugMarkerSetObjectTagEXT = getProcAddr<PFN_vkDebugMarkerSetObjectTagEXT>("vkDebugMarkerSetObjectTagEXT");
        vkDebugMarkerSetObjectNameEXT = getProcAddr<PFN_vkDebugMarkerSetObjectNameEXT>("vkDebugMarkerSetObjectNameEXT");
    }

#endif //VK_EXT_debug_marker

#if defined(VK_AMD_device_coherent_memory)

    VkAmdDeviceCoherentMemory::VkAmdDeviceCoherentMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdDeviceCoherentMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_device_coherent_memory

#if defined(VK_EXT_shader_image_atomic_int64)

    VkExtShaderImageAtomicInt64::VkExtShaderImageAtomicInt64(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderImageAtomicInt64::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_image_atomic_int64

#if defined(VK_KHR_spirv_1_4)

    VkKhrSpirv14::VkKhrSpirv14(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSpirv14::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_spirv_1_4

#if defined(VK_EXT_memory_budget)

    VkExtMemoryBudget::VkExtMemoryBudget(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtMemoryBudget::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_memory_budget

#if defined(VK_EXT_memory_priority)

    VkExtMemoryPriority::VkExtMemoryPriority(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtMemoryPriority::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_memory_priority

#if defined(VK_KHR_video_queue)

    VkKhrVideoQueue::VkKhrVideoQueue(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrVideoQueue::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceVideoFormatPropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR>("vkGetPhysicalDeviceVideoFormatPropertiesKHR");
        vkCmdEndVideoCodingKHR = getProcAddr<PFN_vkCmdEndVideoCodingKHR>("vkCmdEndVideoCodingKHR");
        vkCmdBeginVideoCodingKHR = getProcAddr<PFN_vkCmdBeginVideoCodingKHR>("vkCmdBeginVideoCodingKHR");
        vkUpdateVideoSessionParametersKHR = getProcAddr<PFN_vkUpdateVideoSessionParametersKHR>("vkUpdateVideoSessionParametersKHR");
        vkCreateVideoSessionParametersKHR = getProcAddr<PFN_vkCreateVideoSessionParametersKHR>("vkCreateVideoSessionParametersKHR");
        vkBindVideoSessionMemoryKHR = getProcAddr<PFN_vkBindVideoSessionMemoryKHR>("vkBindVideoSessionMemoryKHR");
        vkCreateVideoSessionKHR = getProcAddr<PFN_vkCreateVideoSessionKHR>("vkCreateVideoSessionKHR");
        vkGetVideoSessionMemoryRequirementsKHR = getProcAddr<PFN_vkGetVideoSessionMemoryRequirementsKHR>("vkGetVideoSessionMemoryRequirementsKHR");
        vkGetPhysicalDeviceVideoCapabilitiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR>("vkGetPhysicalDeviceVideoCapabilitiesKHR");
        vkDestroyVideoSessionKHR = getProcAddr<PFN_vkDestroyVideoSessionKHR>("vkDestroyVideoSessionKHR");
        vkDestroyVideoSessionParametersKHR = getProcAddr<PFN_vkDestroyVideoSessionParametersKHR>("vkDestroyVideoSessionParametersKHR");
        vkCmdControlVideoCodingKHR = getProcAddr<PFN_vkCmdControlVideoCodingKHR>("vkCmdControlVideoCodingKHR");
    }

#endif //VK_KHR_video_queue

#if defined(VK_NV_dedicated_allocation_image_aliasing)

    VkNvDedicatedAllocationImageAliasing::VkNvDedicatedAllocationImageAliasing(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvDedicatedAllocationImageAliasing::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_dedicated_allocation_image_aliasing

#if defined(VK_KHR_separate_depth_stencil_layouts)

    VkKhrSeparateDepthStencilLayouts::VkKhrSeparateDepthStencilLayouts(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSeparateDepthStencilLayouts::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_separate_depth_stencil_layouts

#if defined(VK_EXT_buffer_device_address)

    VkExtBufferDeviceAddress::VkExtBufferDeviceAddress(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtBufferDeviceAddress::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetBufferDeviceAddressEXT = getProcAddr<PFN_vkGetBufferDeviceAddressEXT>("vkGetBufferDeviceAddressEXT");
    }

#endif //VK_EXT_buffer_device_address

#if defined(VK_EXT_tooling_info)

    VkExtToolingInfo::VkExtToolingInfo(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtToolingInfo::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceToolPropertiesEXT = getProcAddr<PFN_vkGetPhysicalDeviceToolPropertiesEXT>("vkGetPhysicalDeviceToolPropertiesEXT");
    }

#endif //VK_EXT_tooling_info

#if defined(VK_EXT_separate_stencil_usage)

    VkExtSeparateStencilUsage::VkExtSeparateStencilUsage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtSeparateStencilUsage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_separate_stencil_usage

#if defined(VK_KHR_present_wait)

    VkKhrPresentWait::VkKhrPresentWait(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPresentWait::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkWaitForPresentKHR = getProcAddr<PFN_vkWaitForPresentKHR>("vkWaitForPresentKHR");
    }

#endif //VK_KHR_present_wait

#if defined(VK_KHR_video_decode_queue)

    VkKhrVideoDecodeQueue::VkKhrVideoDecodeQueue(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrVideoDecodeQueue::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDecodeVideoKHR = getProcAddr<PFN_vkCmdDecodeVideoKHR>("vkCmdDecodeVideoKHR");
    }

#endif //VK_KHR_video_decode_queue

#if defined(VK_NV_cooperative_matrix)

    VkNvCooperativeMatrix::VkNvCooperativeMatrix(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvCooperativeMatrix::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = getProcAddr<PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV>("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
    }

#endif //VK_NV_cooperative_matrix

#if defined(VK_NV_coverage_reduction_mode)

    VkNvCoverageReductionMode::VkNvCoverageReductionMode(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvCoverageReductionMode::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = getProcAddr<PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV>("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
    }

#endif //VK_NV_coverage_reduction_mode

#if defined(VK_EXT_fragment_shader_interlock)

    VkExtFragmentShaderInterlock::VkExtFragmentShaderInterlock(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtFragmentShaderInterlock::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_fragment_shader_interlock

#if defined(VK_EXT_ycbcr_image_arrays)

    VkExtYcbcrImageArrays::VkExtYcbcrImageArrays(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtYcbcrImageArrays::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_ycbcr_image_arrays

#if defined(VK_KHR_uniform_buffer_standard_layout)

    VkKhrUniformBufferStandardLayout::VkKhrUniformBufferStandardLayout(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrUniformBufferStandardLayout::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_uniform_buffer_standard_layout

#if defined(VK_EXT_provoking_vertex)

    VkExtProvokingVertex::VkExtProvokingVertex(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtProvokingVertex::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_provoking_vertex

#if defined(VK_EXT_full_screen_exclusive)

    VkExtFullScreenExclusive::VkExtFullScreenExclusive(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtFullScreenExclusive::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkAcquireFullScreenExclusiveModeEXT = getProcAddr<PFN_vkAcquireFullScreenExclusiveModeEXT>("vkAcquireFullScreenExclusiveModeEXT");
        vkGetPhysicalDeviceSurfacePresentModes2EXT = getProcAddr<PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT>("vkGetPhysicalDeviceSurfacePresentModes2EXT");
        vkGetDeviceGroupSurfacePresentModes2EXT = getProcAddr<PFN_vkGetDeviceGroupSurfacePresentModes2EXT>("vkGetDeviceGroupSurfacePresentModes2EXT");
        vkReleaseFullScreenExclusiveModeEXT = getProcAddr<PFN_vkReleaseFullScreenExclusiveModeEXT>("vkReleaseFullScreenExclusiveModeEXT");
    }

#endif //VK_EXT_full_screen_exclusive

#if defined(VK_KHR_buffer_device_address)

    VkKhrBufferDeviceAddress::VkKhrBufferDeviceAddress(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrBufferDeviceAddress::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDeviceMemoryOpaqueCaptureAddressKHR = getProcAddr<PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR>("vkGetDeviceMemoryOpaqueCaptureAddressKHR");
        vkGetBufferDeviceAddressKHR = getProcAddr<PFN_vkGetBufferDeviceAddressKHR>("vkGetBufferDeviceAddressKHR");
        vkGetBufferOpaqueCaptureAddressKHR = getProcAddr<PFN_vkGetBufferOpaqueCaptureAddressKHR>("vkGetBufferOpaqueCaptureAddressKHR");
    }

#endif //VK_KHR_buffer_device_address

#if defined(VK_AMD_gcn_shader)

    VkAmdGcnShader::VkAmdGcnShader(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdGcnShader::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_gcn_shader

#if defined(VK_EXT_line_rasterization)

    VkExtLineRasterization::VkExtLineRasterization(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtLineRasterization::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetLineStippleEXT = getProcAddr<PFN_vkCmdSetLineStippleEXT>("vkCmdSetLineStippleEXT");
    }

#endif //VK_EXT_line_rasterization

#if defined(VK_EXT_shader_atomic_float)

    VkExtShaderAtomicFloat::VkExtShaderAtomicFloat(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderAtomicFloat::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_atomic_float

#if defined(VK_EXT_host_query_reset)

    VkExtHostQueryReset::VkExtHostQueryReset(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtHostQueryReset::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkResetQueryPoolEXT = getProcAddr<PFN_vkResetQueryPoolEXT>("vkResetQueryPoolEXT");
    }

#endif //VK_EXT_host_query_reset

#if defined(VK_EXT_index_type_uint8)

    VkExtIndexTypeUint8::VkExtIndexTypeUint8(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtIndexTypeUint8::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_index_type_uint8

#if defined(VK_EXT_extension_267)

    VkExtExtension267::VkExtExtension267(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension267::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_267

#if defined(VK_EXT_extended_dynamic_state)

    VkExtExtendedDynamicState::VkExtExtendedDynamicState(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtendedDynamicState::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetCullModeEXT = getProcAddr<PFN_vkCmdSetCullModeEXT>("vkCmdSetCullModeEXT");
        vkCmdSetDepthTestEnableEXT = getProcAddr<PFN_vkCmdSetDepthTestEnableEXT>("vkCmdSetDepthTestEnableEXT");
        vkCmdSetViewportWithCountEXT = getProcAddr<PFN_vkCmdSetViewportWithCountEXT>("vkCmdSetViewportWithCountEXT");
        vkCmdSetStencilTestEnableEXT = getProcAddr<PFN_vkCmdSetStencilTestEnableEXT>("vkCmdSetStencilTestEnableEXT");
        vkCmdSetDepthWriteEnableEXT = getProcAddr<PFN_vkCmdSetDepthWriteEnableEXT>("vkCmdSetDepthWriteEnableEXT");
        vkCmdSetScissorWithCountEXT = getProcAddr<PFN_vkCmdSetScissorWithCountEXT>("vkCmdSetScissorWithCountEXT");
        vkCmdSetStencilOpEXT = getProcAddr<PFN_vkCmdSetStencilOpEXT>("vkCmdSetStencilOpEXT");
        vkCmdSetPrimitiveTopologyEXT = getProcAddr<PFN_vkCmdSetPrimitiveTopologyEXT>("vkCmdSetPrimitiveTopologyEXT");
        vkCmdSetDepthCompareOpEXT = getProcAddr<PFN_vkCmdSetDepthCompareOpEXT>("vkCmdSetDepthCompareOpEXT");
        vkCmdBindVertexBuffers2EXT = getProcAddr<PFN_vkCmdBindVertexBuffers2EXT>("vkCmdBindVertexBuffers2EXT");
        vkCmdSetDepthBoundsTestEnableEXT = getProcAddr<PFN_vkCmdSetDepthBoundsTestEnableEXT>("vkCmdSetDepthBoundsTestEnableEXT");
        vkCmdSetFrontFaceEXT = getProcAddr<PFN_vkCmdSetFrontFaceEXT>("vkCmdSetFrontFaceEXT");
    }

#endif //VK_EXT_extended_dynamic_state

#if defined(VK_KHR_deferred_host_operations)

    VkKhrDeferredHostOperations::VkKhrDeferredHostOperations(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDeferredHostOperations::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkDestroyDeferredOperationKHR = getProcAddr<PFN_vkDestroyDeferredOperationKHR>("vkDestroyDeferredOperationKHR");
        vkGetDeferredOperationResultKHR = getProcAddr<PFN_vkGetDeferredOperationResultKHR>("vkGetDeferredOperationResultKHR");
        vkGetDeferredOperationMaxConcurrencyKHR = getProcAddr<PFN_vkGetDeferredOperationMaxConcurrencyKHR>("vkGetDeferredOperationMaxConcurrencyKHR");
        vkDeferredOperationJoinKHR = getProcAddr<PFN_vkDeferredOperationJoinKHR>("vkDeferredOperationJoinKHR");
        vkCreateDeferredOperationKHR = getProcAddr<PFN_vkCreateDeferredOperationKHR>("vkCreateDeferredOperationKHR");
    }

#endif //VK_KHR_deferred_host_operations

#if defined(VK_NV_dedicated_allocation)

    VkNvDedicatedAllocation::VkNvDedicatedAllocation(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvDedicatedAllocation::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_dedicated_allocation

#if defined(VK_KHR_pipeline_executable_properties)

    VkKhrPipelineExecutableProperties::VkKhrPipelineExecutableProperties(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPipelineExecutableProperties::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPipelineExecutableInternalRepresentationsKHR = getProcAddr<PFN_vkGetPipelineExecutableInternalRepresentationsKHR>("vkGetPipelineExecutableInternalRepresentationsKHR");
        vkGetPipelineExecutablePropertiesKHR = getProcAddr<PFN_vkGetPipelineExecutablePropertiesKHR>("vkGetPipelineExecutablePropertiesKHR");
        vkGetPipelineExecutableStatisticsKHR = getProcAddr<PFN_vkGetPipelineExecutableStatisticsKHR>("vkGetPipelineExecutableStatisticsKHR");
    }

#endif //VK_KHR_pipeline_executable_properties

#if defined(VK_INTEL_extension_271)

    VkIntelExtension271::VkIntelExtension271(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkIntelExtension271::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_INTEL_extension_271

#if defined(VK_INTEL_extension_272)

    VkIntelExtension272::VkIntelExtension272(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkIntelExtension272::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_INTEL_extension_272

#if defined(VK_INTEL_extension_273)

    VkIntelExtension273::VkIntelExtension273(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkIntelExtension273::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_INTEL_extension_273

#if defined(VK_EXT_shader_atomic_float2)

    VkExtShaderAtomicFloat2::VkExtShaderAtomicFloat2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderAtomicFloat2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_atomic_float2

#if defined(VK_KHR_extension_276)

    VkKhrExtension276::VkKhrExtension276(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExtension276::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_extension_276

#if defined(VK_EXT_shader_demote_to_helper_invocation)

    VkExtShaderDemoteToHelperInvocation::VkExtShaderDemoteToHelperInvocation(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderDemoteToHelperInvocation::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_demote_to_helper_invocation

#if defined(VK_NV_device_generated_commands)

    VkNvDeviceGeneratedCommands::VkNvDeviceGeneratedCommands(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvDeviceGeneratedCommands::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetGeneratedCommandsMemoryRequirementsNV = getProcAddr<PFN_vkGetGeneratedCommandsMemoryRequirementsNV>("vkGetGeneratedCommandsMemoryRequirementsNV");
        vkDestroyIndirectCommandsLayoutNV = getProcAddr<PFN_vkDestroyIndirectCommandsLayoutNV>("vkDestroyIndirectCommandsLayoutNV");
        vkCmdExecuteGeneratedCommandsNV = getProcAddr<PFN_vkCmdExecuteGeneratedCommandsNV>("vkCmdExecuteGeneratedCommandsNV");
        vkCmdBindPipelineShaderGroupNV = getProcAddr<PFN_vkCmdBindPipelineShaderGroupNV>("vkCmdBindPipelineShaderGroupNV");
        vkCreateIndirectCommandsLayoutNV = getProcAddr<PFN_vkCreateIndirectCommandsLayoutNV>("vkCreateIndirectCommandsLayoutNV");
        vkCmdPreprocessGeneratedCommandsNV = getProcAddr<PFN_vkCmdPreprocessGeneratedCommandsNV>("vkCmdPreprocessGeneratedCommandsNV");
    }

#endif //VK_NV_device_generated_commands

#if defined(VK_NV_inherited_viewport_scissor)

    VkNvInheritedViewportScissor::VkNvInheritedViewportScissor(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvInheritedViewportScissor::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_inherited_viewport_scissor

#if defined(VK_KHR_extension_280)

    VkKhrExtension280::VkKhrExtension280(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExtension280::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_extension_280

#if defined(VK_KHR_shader_integer_dot_product)

    VkKhrShaderIntegerDotProduct::VkKhrShaderIntegerDotProduct(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderIntegerDotProduct::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_integer_dot_product

#if defined(VK_EXT_texel_buffer_alignment)

    VkExtTexelBufferAlignment::VkExtTexelBufferAlignment(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtTexelBufferAlignment::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_texel_buffer_alignment

#if defined(VK_QCOM_render_pass_transform)

    VkQcomRenderPassTransform::VkQcomRenderPassTransform(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkQcomRenderPassTransform::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_QCOM_render_pass_transform

#if defined(VK_EXT_extension_284)

    VkExtExtension284::VkExtExtension284(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension284::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_284

#if defined(VK_EXT_device_memory_report)

    VkExtDeviceMemoryReport::VkExtDeviceMemoryReport(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDeviceMemoryReport::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_device_memory_report

#if defined(VK_EXT_robustness2)

    VkExtRobustness2::VkExtRobustness2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtRobustness2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_robustness2

#if defined(VK_EXT_custom_border_color)

    VkExtCustomBorderColor::VkExtCustomBorderColor(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtCustomBorderColor::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_custom_border_color

#if defined(VK_EXT_transform_feedback)

    VkExtTransformFeedback::VkExtTransformFeedback(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtTransformFeedback::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdBindTransformFeedbackBuffersEXT = getProcAddr<PFN_vkCmdBindTransformFeedbackBuffersEXT>("vkCmdBindTransformFeedbackBuffersEXT");
        vkCmdDrawIndirectByteCountEXT = getProcAddr<PFN_vkCmdDrawIndirectByteCountEXT>("vkCmdDrawIndirectByteCountEXT");
        vkCmdBeginQueryIndexedEXT = getProcAddr<PFN_vkCmdBeginQueryIndexedEXT>("vkCmdBeginQueryIndexedEXT");
        vkCmdEndTransformFeedbackEXT = getProcAddr<PFN_vkCmdEndTransformFeedbackEXT>("vkCmdEndTransformFeedbackEXT");
        vkCmdBeginTransformFeedbackEXT = getProcAddr<PFN_vkCmdBeginTransformFeedbackEXT>("vkCmdBeginTransformFeedbackEXT");
        vkCmdEndQueryIndexedEXT = getProcAddr<PFN_vkCmdEndQueryIndexedEXT>("vkCmdEndQueryIndexedEXT");
    }

#endif //VK_EXT_transform_feedback

#if defined(VK_GOOGLE_user_type)

    VkGoogleUserType::VkGoogleUserType(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkGoogleUserType::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_GOOGLE_user_type

#if defined(VK_KHR_pipeline_library)

    VkKhrPipelineLibrary::VkKhrPipelineLibrary(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPipelineLibrary::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_pipeline_library

#if defined(VK_KHR_shader_non_semantic_info)

    VkKhrShaderNonSemanticInfo::VkKhrShaderNonSemanticInfo(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderNonSemanticInfo::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_non_semantic_info

#if defined(VK_KHR_present_id)

    VkKhrPresentId::VkKhrPresentId(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPresentId::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_present_id

#if defined(VK_EXT_private_data)

    VkExtPrivateData::VkExtPrivateData(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPrivateData::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreatePrivateDataSlotEXT = getProcAddr<PFN_vkCreatePrivateDataSlotEXT>("vkCreatePrivateDataSlotEXT");
        vkDestroyPrivateDataSlotEXT = getProcAddr<PFN_vkDestroyPrivateDataSlotEXT>("vkDestroyPrivateDataSlotEXT");
        vkGetPrivateDataEXT = getProcAddr<PFN_vkGetPrivateDataEXT>("vkGetPrivateDataEXT");
        vkSetPrivateDataEXT = getProcAddr<PFN_vkSetPrivateDataEXT>("vkSetPrivateDataEXT");
    }

#endif //VK_EXT_private_data

#if defined(VK_EXT_pipeline_creation_cache_control)

    VkExtPipelineCreationCacheControl::VkExtPipelineCreationCacheControl(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPipelineCreationCacheControl::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_pipeline_creation_cache_control

#if defined(VK_NVX_binary_import)

    VkNvxBinaryImport::VkNvxBinaryImport(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvxBinaryImport::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateCuFunctionNVX = getProcAddr<PFN_vkCreateCuFunctionNVX>("vkCreateCuFunctionNVX");
        vkDestroyCuFunctionNVX = getProcAddr<PFN_vkDestroyCuFunctionNVX>("vkDestroyCuFunctionNVX");
        vkCmdCuLaunchKernelNVX = getProcAddr<PFN_vkCmdCuLaunchKernelNVX>("vkCmdCuLaunchKernelNVX");
        vkCreateCuModuleNVX = getProcAddr<PFN_vkCreateCuModuleNVX>("vkCreateCuModuleNVX");
        vkDestroyCuModuleNVX = getProcAddr<PFN_vkDestroyCuModuleNVX>("vkDestroyCuModuleNVX");
    }

#endif //VK_NVX_binary_import

#if defined(VK_KHR_video_encode_queue)

    VkKhrVideoEncodeQueue::VkKhrVideoEncodeQueue(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrVideoEncodeQueue::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdEncodeVideoKHR = getProcAddr<PFN_vkCmdEncodeVideoKHR>("vkCmdEncodeVideoKHR");
    }

#endif //VK_KHR_video_encode_queue

#if defined(VK_NV_device_diagnostics_config)

    VkNvDeviceDiagnosticsConfig::VkNvDeviceDiagnosticsConfig(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvDeviceDiagnosticsConfig::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_device_diagnostics_config

#if defined(VK_QCOM_render_pass_store_ops)

    VkQcomRenderPassStoreOps::VkQcomRenderPassStoreOps(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkQcomRenderPassStoreOps::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_QCOM_render_pass_store_ops

#if defined(VK_NV_extension_308)

    VkNvExtension308::VkNvExtension308(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvExtension308::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_extension_308

#if defined(VK_NVX_image_view_handle)

    VkNvxImageViewHandle::VkNvxImageViewHandle(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvxImageViewHandle::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetImageViewHandleNVX = getProcAddr<PFN_vkGetImageViewHandleNVX>("vkGetImageViewHandleNVX");
        vkGetImageViewAddressNVX = getProcAddr<PFN_vkGetImageViewAddressNVX>("vkGetImageViewAddressNVX");
    }

#endif //VK_NVX_image_view_handle

#if defined(VK_KHR_synchronization2)

    VkKhrSynchronization2::VkKhrSynchronization2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSynchronization2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdWriteTimestamp2KHR = getProcAddr<PFN_vkCmdWriteTimestamp2KHR>("vkCmdWriteTimestamp2KHR");
        vkCmdWaitEvents2KHR = getProcAddr<PFN_vkCmdWaitEvents2KHR>("vkCmdWaitEvents2KHR");
        vkCmdPipelineBarrier2KHR = getProcAddr<PFN_vkCmdPipelineBarrier2KHR>("vkCmdPipelineBarrier2KHR");
        vkCmdSetEvent2KHR = getProcAddr<PFN_vkCmdSetEvent2KHR>("vkCmdSetEvent2KHR");
        vkGetQueueCheckpointData2NV = getProcAddr<PFN_vkGetQueueCheckpointData2NV>("vkGetQueueCheckpointData2NV");
        vkQueueSubmit2KHR = getProcAddr<PFN_vkQueueSubmit2KHR>("vkQueueSubmit2KHR");
        vkCmdResetEvent2KHR = getProcAddr<PFN_vkCmdResetEvent2KHR>("vkCmdResetEvent2KHR");
        vkCmdWriteBufferMarker2AMD = getProcAddr<PFN_vkCmdWriteBufferMarker2AMD>("vkCmdWriteBufferMarker2AMD");
    }

#endif //VK_KHR_synchronization2

#if defined(VK_KHR_shader_subgroup_uniform_control_flow)

    VkKhrShaderSubgroupUniformControlFlow::VkKhrShaderSubgroupUniformControlFlow(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderSubgroupUniformControlFlow::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_subgroup_uniform_control_flow

#if defined(VK_KHR_zero_initialize_workgroup_memory)

    VkKhrZeroInitializeWorkgroupMemory::VkKhrZeroInitializeWorkgroupMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrZeroInitializeWorkgroupMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_zero_initialize_workgroup_memory

#if defined(VK_NV_fragment_shading_rate_enums)

    VkNvFragmentShadingRateEnums::VkNvFragmentShadingRateEnums(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvFragmentShadingRateEnums::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetFragmentShadingRateEnumNV = getProcAddr<PFN_vkCmdSetFragmentShadingRateEnumNV>("vkCmdSetFragmentShadingRateEnumNV");
    }

#endif //VK_NV_fragment_shading_rate_enums

#if defined(VK_NV_ray_tracing_motion_blur)

    VkNvRayTracingMotionBlur::VkNvRayTracingMotionBlur(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvRayTracingMotionBlur::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_ray_tracing_motion_blur

#if defined(VK_EXT_ycbcr_2plane_444_formats)

    VkExtYcbcr2plane444Formats::VkExtYcbcr2plane444Formats(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtYcbcr2plane444Formats::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_ycbcr_2plane_444_formats

#if defined(VK_EXT_fragment_density_map2)

    VkExtFragmentDensityMap2::VkExtFragmentDensityMap2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtFragmentDensityMap2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_fragment_density_map2

#if defined(VK_QCOM_rotated_copy_commands)

    VkQcomRotatedCopyCommands::VkQcomRotatedCopyCommands(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkQcomRotatedCopyCommands::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_QCOM_rotated_copy_commands

#if defined(VK_EXT_image_robustness)

    VkExtImageRobustness::VkExtImageRobustness(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtImageRobustness::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_image_robustness

#if defined(VK_KHR_workgroup_memory_explicit_layout)

    VkKhrWorkgroupMemoryExplicitLayout::VkKhrWorkgroupMemoryExplicitLayout(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrWorkgroupMemoryExplicitLayout::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_workgroup_memory_explicit_layout

#if defined(VK_KHR_copy_commands2)

    VkKhrCopyCommands2::VkKhrCopyCommands2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrCopyCommands2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdBlitImage2KHR = getProcAddr<PFN_vkCmdBlitImage2KHR>("vkCmdBlitImage2KHR");
        vkCmdCopyImageToBuffer2KHR = getProcAddr<PFN_vkCmdCopyImageToBuffer2KHR>("vkCmdCopyImageToBuffer2KHR");
        vkCmdResolveImage2KHR = getProcAddr<PFN_vkCmdResolveImage2KHR>("vkCmdResolveImage2KHR");
        vkCmdCopyBufferToImage2KHR = getProcAddr<PFN_vkCmdCopyBufferToImage2KHR>("vkCmdCopyBufferToImage2KHR");
        vkCmdCopyBuffer2KHR = getProcAddr<PFN_vkCmdCopyBuffer2KHR>("vkCmdCopyBuffer2KHR");
        vkCmdCopyImage2KHR = getProcAddr<PFN_vkCmdCopyImage2KHR>("vkCmdCopyImage2KHR");
    }

#endif //VK_KHR_copy_commands2

#if defined(VK_AMD_draw_indirect_count)

    VkAmdDrawIndirectCount::VkAmdDrawIndirectCount(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdDrawIndirectCount::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDrawIndexedIndirectCountAMD = getProcAddr<PFN_vkCmdDrawIndexedIndirectCountAMD>("vkCmdDrawIndexedIndirectCountAMD");
        vkCmdDrawIndirectCountAMD = getProcAddr<PFN_vkCmdDrawIndirectCountAMD>("vkCmdDrawIndirectCountAMD");
    }

#endif //VK_AMD_draw_indirect_count

#if defined(VK_EXT_4444_formats)

    VkExt4444Formats::VkExt4444Formats(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExt4444Formats::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_4444_formats

#if defined(VK_ARM_rasterization_order_attachment_access)

    VkArmRasterizationOrderAttachmentAccess::VkArmRasterizationOrderAttachmentAccess(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkArmRasterizationOrderAttachmentAccess::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_ARM_rasterization_order_attachment_access

#if defined(VK_EXT_rgba10x6_formats)

    VkExtRgba10x6Formats::VkExtRgba10x6Formats(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtRgba10x6Formats::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_rgba10x6_formats

#if defined(VK_NV_acquire_winrt_display)

    VkNvAcquireWinrtDisplay::VkNvAcquireWinrtDisplay(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvAcquireWinrtDisplay::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetWinrtDisplayNV = getProcAddr<PFN_vkGetWinrtDisplayNV>("vkGetWinrtDisplayNV");
        vkAcquireWinrtDisplayNV = getProcAddr<PFN_vkAcquireWinrtDisplayNV>("vkAcquireWinrtDisplayNV");
    }

#endif //VK_NV_acquire_winrt_display

#if defined(VK_KHR_ray_tracing_pipeline)

    VkKhrRayTracingPipeline::VkKhrRayTracingPipeline(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrRayTracingPipeline::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdTraceRaysIndirectKHR = getProcAddr<PFN_vkCmdTraceRaysIndirectKHR>("vkCmdTraceRaysIndirectKHR");
        vkCreateRayTracingPipelinesKHR = getProcAddr<PFN_vkCreateRayTracingPipelinesKHR>("vkCreateRayTracingPipelinesKHR");
        vkCmdSetRayTracingPipelineStackSizeKHR = getProcAddr<PFN_vkCmdSetRayTracingPipelineStackSizeKHR>("vkCmdSetRayTracingPipelineStackSizeKHR");
        vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = getProcAddr<PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR>("vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
        vkGetRayTracingShaderGroupStackSizeKHR = getProcAddr<PFN_vkGetRayTracingShaderGroupStackSizeKHR>("vkGetRayTracingShaderGroupStackSizeKHR");
        vkCmdTraceRaysKHR = getProcAddr<PFN_vkCmdTraceRaysKHR>("vkCmdTraceRaysKHR");
        vkGetRayTracingShaderGroupHandlesKHR = getProcAddr<PFN_vkGetRayTracingShaderGroupHandlesKHR>("vkGetRayTracingShaderGroupHandlesKHR");
    }

#endif //VK_KHR_ray_tracing_pipeline

#if defined(VK_KHR_ray_query)

    VkKhrRayQuery::VkKhrRayQuery(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrRayQuery::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_ray_query

#if defined(VK_VALVE_mutable_descriptor_type)

    VkValveMutableDescriptorType::VkValveMutableDescriptorType(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkValveMutableDescriptorType::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_VALVE_mutable_descriptor_type

#if defined(VK_EXT_vertex_input_dynamic_state)

    VkExtVertexInputDynamicState::VkExtVertexInputDynamicState(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVertexInputDynamicState::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetVertexInputEXT = getProcAddr<PFN_vkCmdSetVertexInputEXT>("vkCmdSetVertexInputEXT");
    }

#endif //VK_EXT_vertex_input_dynamic_state

#if defined(VK_EXT_physical_device_drm)

    VkExtPhysicalDeviceDrm::VkExtPhysicalDeviceDrm(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPhysicalDeviceDrm::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_physical_device_drm

#if defined(VK_EXT_depth_clip_control)

    VkExtDepthClipControl::VkExtDepthClipControl(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDepthClipControl::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_depth_clip_control

#if defined(VK_EXT_primitive_topology_list_restart)

    VkExtPrimitiveTopologyListRestart::VkExtPrimitiveTopologyListRestart(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPrimitiveTopologyListRestart::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_primitive_topology_list_restart

#if defined(VK_AMD_negative_viewport_height)

    VkAmdNegativeViewportHeight::VkAmdNegativeViewportHeight(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdNegativeViewportHeight::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_negative_viewport_height

#if defined(VK_KHR_format_feature_flags2)

    VkKhrFormatFeatureFlags2::VkKhrFormatFeatureFlags2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrFormatFeatureFlags2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_format_feature_flags2

#if defined(VK_FUCHSIA_external_memory)

    VkFuchsiaExternalMemory::VkFuchsiaExternalMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkFuchsiaExternalMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryZirconHandlePropertiesFUCHSIA = getProcAddr<PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA>("vkGetMemoryZirconHandlePropertiesFUCHSIA");
        vkGetMemoryZirconHandleFUCHSIA = getProcAddr<PFN_vkGetMemoryZirconHandleFUCHSIA>("vkGetMemoryZirconHandleFUCHSIA");
    }

#endif //VK_FUCHSIA_external_memory

#if defined(VK_FUCHSIA_external_semaphore)

    VkFuchsiaExternalSemaphore::VkFuchsiaExternalSemaphore(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkFuchsiaExternalSemaphore::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetSemaphoreZirconHandleFUCHSIA = getProcAddr<PFN_vkGetSemaphoreZirconHandleFUCHSIA>("vkGetSemaphoreZirconHandleFUCHSIA");
        vkImportSemaphoreZirconHandleFUCHSIA = getProcAddr<PFN_vkImportSemaphoreZirconHandleFUCHSIA>("vkImportSemaphoreZirconHandleFUCHSIA");
    }

#endif //VK_FUCHSIA_external_semaphore

#if defined(VK_FUCHSIA_buffer_collection)

    VkFuchsiaBufferCollection::VkFuchsiaBufferCollection(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkFuchsiaBufferCollection::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetBufferCollectionPropertiesFUCHSIA = getProcAddr<PFN_vkGetBufferCollectionPropertiesFUCHSIA>("vkGetBufferCollectionPropertiesFUCHSIA");
        vkDestroyBufferCollectionFUCHSIA = getProcAddr<PFN_vkDestroyBufferCollectionFUCHSIA>("vkDestroyBufferCollectionFUCHSIA");
        vkCreateBufferCollectionFUCHSIA = getProcAddr<PFN_vkCreateBufferCollectionFUCHSIA>("vkCreateBufferCollectionFUCHSIA");
        vkSetBufferCollectionImageConstraintsFUCHSIA = getProcAddr<PFN_vkSetBufferCollectionImageConstraintsFUCHSIA>("vkSetBufferCollectionImageConstraintsFUCHSIA");
        vkSetBufferCollectionBufferConstraintsFUCHSIA = getProcAddr<PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA>("vkSetBufferCollectionBufferConstraintsFUCHSIA");
    }

#endif //VK_FUCHSIA_buffer_collection

#if defined(VK_AMD_gpu_shader_half_float)

    VkAmdGpuShaderHalfFloat::VkAmdGpuShaderHalfFloat(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdGpuShaderHalfFloat::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_gpu_shader_half_float

#if defined(VK_HUAWEI_subpass_shading)

    VkHuaweiSubpassShading::VkHuaweiSubpassShading(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkHuaweiSubpassShading::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = getProcAddr<PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI>("vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
        vkCmdSubpassShadingHUAWEI = getProcAddr<PFN_vkCmdSubpassShadingHUAWEI>("vkCmdSubpassShadingHUAWEI");
    }

#endif //VK_HUAWEI_subpass_shading

#if defined(VK_HUAWEI_invocation_mask)

    VkHuaweiInvocationMask::VkHuaweiInvocationMask(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkHuaweiInvocationMask::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdBindInvocationMaskHUAWEI = getProcAddr<PFN_vkCmdBindInvocationMaskHUAWEI>("vkCmdBindInvocationMaskHUAWEI");
    }

#endif //VK_HUAWEI_invocation_mask

#if defined(VK_NV_external_memory_rdma)

    VkNvExternalMemoryRdma::VkNvExternalMemoryRdma(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvExternalMemoryRdma::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryRemoteAddressNV = getProcAddr<PFN_vkGetMemoryRemoteAddressNV>("vkGetMemoryRemoteAddressNV");
    }

#endif //VK_NV_external_memory_rdma

#if defined(VK_EXT_extended_dynamic_state2)

    VkExtExtendedDynamicState2::VkExtExtendedDynamicState2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtendedDynamicState2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetPatchControlPointsEXT = getProcAddr<PFN_vkCmdSetPatchControlPointsEXT>("vkCmdSetPatchControlPointsEXT");
        vkCmdSetLogicOpEXT = getProcAddr<PFN_vkCmdSetLogicOpEXT>("vkCmdSetLogicOpEXT");
        vkCmdSetPrimitiveRestartEnableEXT = getProcAddr<PFN_vkCmdSetPrimitiveRestartEnableEXT>("vkCmdSetPrimitiveRestartEnableEXT");
        vkCmdSetRasterizerDiscardEnableEXT = getProcAddr<PFN_vkCmdSetRasterizerDiscardEnableEXT>("vkCmdSetRasterizerDiscardEnableEXT");
        vkCmdSetDepthBiasEnableEXT = getProcAddr<PFN_vkCmdSetDepthBiasEnableEXT>("vkCmdSetDepthBiasEnableEXT");
    }

#endif //VK_EXT_extended_dynamic_state2

#if defined(VK_AMD_shader_ballot)

    VkAmdShaderBallot::VkAmdShaderBallot(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderBallot::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_ballot

#if defined(VK_EXT_color_write_enable)

    VkExtColorWriteEnable::VkExtColorWriteEnable(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtColorWriteEnable::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetColorWriteEnableEXT = getProcAddr<PFN_vkCmdSetColorWriteEnableEXT>("vkCmdSetColorWriteEnableEXT");
    }

#endif //VK_EXT_color_write_enable

#if defined(VK_EXT_global_priority_query)

    VkExtGlobalPriorityQuery::VkExtGlobalPriorityQuery(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtGlobalPriorityQuery::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_global_priority_query

#if defined(VK_EXT_video_encode_h264)

    VkExtVideoEncodeH264::VkExtVideoEncodeH264(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVideoEncodeH264::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_video_encode_h264

#if defined(VK_EXT_image_view_min_lod)

    VkExtImageViewMinLod::VkExtImageViewMinLod(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtImageViewMinLod::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_image_view_min_lod

#if defined(VK_EXT_multi_draw)

    VkExtMultiDraw::VkExtMultiDraw(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtMultiDraw::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdDrawMultiIndexedEXT = getProcAddr<PFN_vkCmdDrawMultiIndexedEXT>("vkCmdDrawMultiIndexedEXT");
        vkCmdDrawMultiEXT = getProcAddr<PFN_vkCmdDrawMultiEXT>("vkCmdDrawMultiEXT");
    }

#endif //VK_EXT_multi_draw

#if defined(VK_EXT_extension_394)

    VkExtExtension394::VkExtExtension394(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension394::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_394

#if defined(VK_KHR_display_swapchain)

    VkKhrDisplaySwapchain::VkKhrDisplaySwapchain(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDisplaySwapchain::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateSharedSwapchainsKHR = getProcAddr<PFN_vkCreateSharedSwapchainsKHR>("vkCreateSharedSwapchainsKHR");
    }

#endif //VK_KHR_display_swapchain

#if defined(VK_EXT_video_encode_h265)

    VkExtVideoEncodeH265::VkExtVideoEncodeH265(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVideoEncodeH265::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_video_encode_h265

#if defined(VK_EXT_load_store_op_none)

    VkExtLoadStoreOpNone::VkExtLoadStoreOpNone(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtLoadStoreOpNone::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_load_store_op_none

#if defined(VK_EXT_video_decode_h264)

    VkExtVideoDecodeH264::VkExtVideoDecodeH264(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtVideoDecodeH264::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_video_decode_h264

#if defined(VK_EXT_border_color_swizzle)

    VkExtBorderColorSwizzle::VkExtBorderColorSwizzle(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtBorderColorSwizzle::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_border_color_swizzle

#if defined(VK_EXT_pageable_device_local_memory)

    VkExtPageableDeviceLocalMemory::VkExtPageableDeviceLocalMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtPageableDeviceLocalMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkSetDeviceMemoryPriorityEXT = getProcAddr<PFN_vkSetDeviceMemoryPriorityEXT>("vkSetDeviceMemoryPriorityEXT");
    }

#endif //VK_EXT_pageable_device_local_memory

#if defined(VK_KHR_maintenance4)

    VkKhrMaintenance4::VkKhrMaintenance4(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMaintenance4::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDeviceImageMemoryRequirementsKHR = getProcAddr<PFN_vkGetDeviceImageMemoryRequirementsKHR>("vkGetDeviceImageMemoryRequirementsKHR");
        vkGetDeviceImageSparseMemoryRequirementsKHR = getProcAddr<PFN_vkGetDeviceImageSparseMemoryRequirementsKHR>("vkGetDeviceImageSparseMemoryRequirementsKHR");
        vkGetDeviceBufferMemoryRequirementsKHR = getProcAddr<PFN_vkGetDeviceBufferMemoryRequirementsKHR>("vkGetDeviceBufferMemoryRequirementsKHR");
    }

#endif //VK_KHR_maintenance4

#if defined(VK_EXT_extension_419)

    VkExtExtension419::VkExtExtension419(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension419::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_419

#if defined(VK_AMD_texture_gather_bias_lod)

    VkAmdTextureGatherBiasLod::VkAmdTextureGatherBiasLod(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdTextureGatherBiasLod::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_texture_gather_bias_lod

#if defined(VK_EXT_extension_420)

    VkExtExtension420::VkExtExtension420(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension420::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_420

#if defined(VK_QCOM_fragment_density_map_offset)

    VkQcomFragmentDensityMapOffset::VkQcomFragmentDensityMapOffset(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkQcomFragmentDensityMapOffset::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_QCOM_fragment_density_map_offset

#if defined(VK_AMD_shader_info)

    VkAmdShaderInfo::VkAmdShaderInfo(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderInfo::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetShaderInfoAMD = getProcAddr<PFN_vkGetShaderInfoAMD>("vkGetShaderInfoAMD");
    }

#endif //VK_AMD_shader_info

#if defined(VK_NV_linear_color_attachment)

    VkNvLinearColorAttachment::VkNvLinearColorAttachment(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvLinearColorAttachment::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_linear_color_attachment

#if defined(VK_KHR_dynamic_rendering)

    VkKhrDynamicRendering::VkKhrDynamicRendering(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDynamicRendering::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdBeginRenderingKHR = getProcAddr<PFN_vkCmdBeginRenderingKHR>("vkCmdBeginRenderingKHR");
        vkCmdEndRenderingKHR = getProcAddr<PFN_vkCmdEndRenderingKHR>("vkCmdEndRenderingKHR");
    }

#endif //VK_KHR_dynamic_rendering

#if defined(VK_AMD_shader_image_load_store_lod)

    VkAmdShaderImageLoadStoreLod::VkAmdShaderImageLoadStoreLod(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkAmdShaderImageLoadStoreLod::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_AMD_shader_image_load_store_lod

#if defined(VK_NV_corner_sampled_image)

    VkNvCornerSampledImage::VkNvCornerSampledImage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvCornerSampledImage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_corner_sampled_image

#if defined(VK_KHR_multiview)

    VkKhrMultiview::VkKhrMultiview(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMultiview::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_multiview

#if defined(VK_IMG_format_pvrtc)

    VkImgFormatPvrtc::VkImgFormatPvrtc(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkImgFormatPvrtc::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_IMG_format_pvrtc

#if defined(VK_NV_external_memory)

    VkNvExternalMemory::VkNvExternalMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvExternalMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_external_memory

#if defined(VK_NV_external_memory_win32)

    VkNvExternalMemoryWin32::VkNvExternalMemoryWin32(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvExternalMemoryWin32::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryWin32HandleNV = getProcAddr<PFN_vkGetMemoryWin32HandleNV>("vkGetMemoryWin32HandleNV");
    }

#endif //VK_NV_external_memory_win32

#if defined(VK_NV_win32_keyed_mutex)

    VkNvWin32KeyedMutex::VkNvWin32KeyedMutex(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvWin32KeyedMutex::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_win32_keyed_mutex

#if defined(VK_KHR_device_group)

    VkKhrDeviceGroup::VkKhrDeviceGroup(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDeviceGroup::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDevicePresentRectanglesKHR = getProcAddr<PFN_vkGetPhysicalDevicePresentRectanglesKHR>("vkGetPhysicalDevicePresentRectanglesKHR");
        vkGetDeviceGroupSurfacePresentModesKHR = getProcAddr<PFN_vkGetDeviceGroupSurfacePresentModesKHR>("vkGetDeviceGroupSurfacePresentModesKHR");
        vkCmdSetDeviceMaskKHR = getProcAddr<PFN_vkCmdSetDeviceMaskKHR>("vkCmdSetDeviceMaskKHR");
        vkAcquireNextImage2KHR = getProcAddr<PFN_vkAcquireNextImage2KHR>("vkAcquireNextImage2KHR");
        vkCmdDispatchBaseKHR = getProcAddr<PFN_vkCmdDispatchBaseKHR>("vkCmdDispatchBaseKHR");
        vkGetDeviceGroupPresentCapabilitiesKHR = getProcAddr<PFN_vkGetDeviceGroupPresentCapabilitiesKHR>("vkGetDeviceGroupPresentCapabilitiesKHR");
        vkGetDeviceGroupPeerMemoryFeaturesKHR = getProcAddr<PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR>("vkGetDeviceGroupPeerMemoryFeaturesKHR");
    }

#endif //VK_KHR_device_group

#if defined(VK_KHR_shader_draw_parameters)

    VkKhrShaderDrawParameters::VkKhrShaderDrawParameters(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderDrawParameters::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_draw_parameters

#if defined(VK_EXT_shader_subgroup_ballot)

    VkExtShaderSubgroupBallot::VkExtShaderSubgroupBallot(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderSubgroupBallot::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_subgroup_ballot

#if defined(VK_EXT_shader_subgroup_vote)

    VkExtShaderSubgroupVote::VkExtShaderSubgroupVote(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtShaderSubgroupVote::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_shader_subgroup_vote

#if defined(VK_EXT_texture_compression_astc_hdr)

    VkExtTextureCompressionAstcHdr::VkExtTextureCompressionAstcHdr(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtTextureCompressionAstcHdr::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_texture_compression_astc_hdr

#if defined(VK_EXT_astc_decode_mode)

    VkExtAstcDecodeMode::VkExtAstcDecodeMode(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtAstcDecodeMode::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_astc_decode_mode

#if defined(VK_IMG_extension_69)

    VkImgExtension69::VkImgExtension69(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkImgExtension69::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_IMG_extension_69

#if defined(VK_KHR_maintenance1)

    VkKhrMaintenance1::VkKhrMaintenance1(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMaintenance1::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkTrimCommandPoolKHR = getProcAddr<PFN_vkTrimCommandPoolKHR>("vkTrimCommandPoolKHR");
    }

#endif //VK_KHR_maintenance1

#if defined(VK_KHR_external_memory)

    VkKhrExternalMemory::VkKhrExternalMemory(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalMemory::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_external_memory

#if defined(VK_KHR_external_memory_win32)

    VkKhrExternalMemoryWin32::VkKhrExternalMemoryWin32(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalMemoryWin32::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryWin32HandleKHR = getProcAddr<PFN_vkGetMemoryWin32HandleKHR>("vkGetMemoryWin32HandleKHR");
        vkGetMemoryWin32HandlePropertiesKHR = getProcAddr<PFN_vkGetMemoryWin32HandlePropertiesKHR>("vkGetMemoryWin32HandlePropertiesKHR");
    }

#endif //VK_KHR_external_memory_win32

#if defined(VK_KHR_external_memory_fd)

    VkKhrExternalMemoryFd::VkKhrExternalMemoryFd(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalMemoryFd::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetMemoryFdKHR = getProcAddr<PFN_vkGetMemoryFdKHR>("vkGetMemoryFdKHR");
        vkGetMemoryFdPropertiesKHR = getProcAddr<PFN_vkGetMemoryFdPropertiesKHR>("vkGetMemoryFdPropertiesKHR");
    }

#endif //VK_KHR_external_memory_fd

#if defined(VK_KHR_win32_keyed_mutex)

    VkKhrWin32KeyedMutex::VkKhrWin32KeyedMutex(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrWin32KeyedMutex::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_win32_keyed_mutex

#if defined(VK_KHR_external_semaphore)

    VkKhrExternalSemaphore::VkKhrExternalSemaphore(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalSemaphore::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_external_semaphore

#if defined(VK_KHR_external_semaphore_win32)

    VkKhrExternalSemaphoreWin32::VkKhrExternalSemaphoreWin32(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalSemaphoreWin32::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetSemaphoreWin32HandleKHR = getProcAddr<PFN_vkGetSemaphoreWin32HandleKHR>("vkGetSemaphoreWin32HandleKHR");
        vkImportSemaphoreWin32HandleKHR = getProcAddr<PFN_vkImportSemaphoreWin32HandleKHR>("vkImportSemaphoreWin32HandleKHR");
    }

#endif //VK_KHR_external_semaphore_win32

#if defined(VK_KHR_external_semaphore_fd)

    VkKhrExternalSemaphoreFd::VkKhrExternalSemaphoreFd(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalSemaphoreFd::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkImportSemaphoreFdKHR = getProcAddr<PFN_vkImportSemaphoreFdKHR>("vkImportSemaphoreFdKHR");
        vkGetSemaphoreFdKHR = getProcAddr<PFN_vkGetSemaphoreFdKHR>("vkGetSemaphoreFdKHR");
    }

#endif //VK_KHR_external_semaphore_fd

#if defined(VK_KHR_push_descriptor)

    VkKhrPushDescriptor::VkKhrPushDescriptor(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrPushDescriptor::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdPushDescriptorSetKHR = getProcAddr<PFN_vkCmdPushDescriptorSetKHR>("vkCmdPushDescriptorSetKHR");
        vkCmdPushDescriptorSetWithTemplateKHR = getProcAddr<PFN_vkCmdPushDescriptorSetWithTemplateKHR>("vkCmdPushDescriptorSetWithTemplateKHR");
    }

#endif //VK_KHR_push_descriptor

#if defined(VK_EXT_conditional_rendering)

    VkExtConditionalRendering::VkExtConditionalRendering(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtConditionalRendering::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdEndConditionalRenderingEXT = getProcAddr<PFN_vkCmdEndConditionalRenderingEXT>("vkCmdEndConditionalRenderingEXT");
        vkCmdBeginConditionalRenderingEXT = getProcAddr<PFN_vkCmdBeginConditionalRenderingEXT>("vkCmdBeginConditionalRenderingEXT");
    }

#endif //VK_EXT_conditional_rendering

#if defined(VK_KHR_shader_float16_int8)

    VkKhrShaderFloat16Int8::VkKhrShaderFloat16Int8(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrShaderFloat16Int8::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_shader_float16_int8

#if defined(VK_KHR_16bit_storage)

    VkKhr16bitStorage::VkKhr16bitStorage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhr16bitStorage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_16bit_storage

#if defined(VK_KHR_incremental_present)

    VkKhrIncrementalPresent::VkKhrIncrementalPresent(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrIncrementalPresent::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_incremental_present

#if defined(VK_KHR_descriptor_update_template)

    VkKhrDescriptorUpdateTemplate::VkKhrDescriptorUpdateTemplate(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDescriptorUpdateTemplate::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateDescriptorUpdateTemplateKHR = getProcAddr<PFN_vkCreateDescriptorUpdateTemplateKHR>("vkCreateDescriptorUpdateTemplateKHR");
        vkDestroyDescriptorUpdateTemplateKHR = getProcAddr<PFN_vkDestroyDescriptorUpdateTemplateKHR>("vkDestroyDescriptorUpdateTemplateKHR");
        vkCmdPushDescriptorSetWithTemplateKHR = getProcAddr<PFN_vkCmdPushDescriptorSetWithTemplateKHR>("vkCmdPushDescriptorSetWithTemplateKHR");
        vkUpdateDescriptorSetWithTemplateKHR = getProcAddr<PFN_vkUpdateDescriptorSetWithTemplateKHR>("vkUpdateDescriptorSetWithTemplateKHR");
    }

#endif //VK_KHR_descriptor_update_template

#if defined(VK_NVX_device_generated_commands)

    VkNvxDeviceGeneratedCommands::VkNvxDeviceGeneratedCommands(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvxDeviceGeneratedCommands::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NVX_device_generated_commands

#if defined(VK_NV_clip_space_w_scaling)

    VkNvClipSpaceWScaling::VkNvClipSpaceWScaling(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvClipSpaceWScaling::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCmdSetViewportWScalingNV = getProcAddr<PFN_vkCmdSetViewportWScalingNV>("vkCmdSetViewportWScalingNV");
    }

#endif //VK_NV_clip_space_w_scaling

#if defined(VK_EXT_display_control)

    VkExtDisplayControl::VkExtDisplayControl(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDisplayControl::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkRegisterDeviceEventEXT = getProcAddr<PFN_vkRegisterDeviceEventEXT>("vkRegisterDeviceEventEXT");
        vkDisplayPowerControlEXT = getProcAddr<PFN_vkDisplayPowerControlEXT>("vkDisplayPowerControlEXT");
        vkGetSwapchainCounterEXT = getProcAddr<PFN_vkGetSwapchainCounterEXT>("vkGetSwapchainCounterEXT");
        vkRegisterDisplayEventEXT = getProcAddr<PFN_vkRegisterDisplayEventEXT>("vkRegisterDisplayEventEXT");
    }

#endif //VK_EXT_display_control

#if defined(VK_GOOGLE_display_timing)

    VkGoogleDisplayTiming::VkGoogleDisplayTiming(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkGoogleDisplayTiming::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPastPresentationTimingGOOGLE = getProcAddr<PFN_vkGetPastPresentationTimingGOOGLE>("vkGetPastPresentationTimingGOOGLE");
        vkGetRefreshCycleDurationGOOGLE = getProcAddr<PFN_vkGetRefreshCycleDurationGOOGLE>("vkGetRefreshCycleDurationGOOGLE");
    }

#endif //VK_GOOGLE_display_timing

#if defined(VK_NV_sample_mask_override_coverage)

    VkNvSampleMaskOverrideCoverage::VkNvSampleMaskOverrideCoverage(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvSampleMaskOverrideCoverage::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_sample_mask_override_coverage

#if defined(VK_NV_geometry_shader_passthrough)

    VkNvGeometryShaderPassthrough::VkNvGeometryShaderPassthrough(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvGeometryShaderPassthrough::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_geometry_shader_passthrough

#if defined(VK_NV_viewport_array2)

    VkNvViewportArray2::VkNvViewportArray2(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvViewportArray2::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_viewport_array2

#if defined(VK_NVX_multiview_per_view_attributes)

    VkNvxMultiviewPerViewAttributes::VkNvxMultiviewPerViewAttributes(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvxMultiviewPerViewAttributes::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NVX_multiview_per_view_attributes

#if defined(VK_NV_viewport_swizzle)

    VkNvViewportSwizzle::VkNvViewportSwizzle(VkDevice handler)
        : DeviceExtensionBase(handler) {
        init(handler);
    }

    void VkNvViewportSwizzle::init(VkDevice handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_NV_viewport_swizzle

std::unique_ptr<DeviceExtensionBase> makeDeviceExtension(const std::string &name, VkDevice handle)
{
    #if defined(VK_EXT_discard_rectangles)
    if("VK_EXT_discard_rectangles" == name) { return std::make_unique<VkExtDiscardRectangles>(handle); }
    #endif
    #if defined(VK_EXT_conservative_rasterization)
    if("VK_EXT_conservative_rasterization" == name) { return std::make_unique<VkExtConservativeRasterization>(handle); }
    #endif
    #if defined(VK_EXT_depth_clip_enable)
    if("VK_EXT_depth_clip_enable" == name) { return std::make_unique<VkExtDepthClipEnable>(handle); }
    #endif
    #if defined(VK_EXT_hdr_metadata)
    if("VK_EXT_hdr_metadata" == name) { return std::make_unique<VkExtHdrMetadata>(handle); }
    #endif
    #if defined(VK_KHR_imageless_framebuffer)
    if("VK_KHR_imageless_framebuffer" == name) { return std::make_unique<VkKhrImagelessFramebuffer>(handle); }
    #endif
    #if defined(VK_ANDROID_native_buffer)
    if("VK_ANDROID_native_buffer" == name) { return std::make_unique<VkAndroidNativeBuffer>(handle); }
    #endif
    #if defined(VK_KHR_create_renderpass2)
    if("VK_KHR_create_renderpass2" == name) { return std::make_unique<VkKhrCreateRenderpass2>(handle); }
    #endif
    #if defined(VK_KHR_shared_presentable_image)
    if("VK_KHR_shared_presentable_image" == name) { return std::make_unique<VkKhrSharedPresentableImage>(handle); }
    #endif
    #if defined(VK_KHR_external_fence)
    if("VK_KHR_external_fence" == name) { return std::make_unique<VkKhrExternalFence>(handle); }
    #endif
    #if defined(VK_KHR_external_fence_win32)
    if("VK_KHR_external_fence_win32" == name) { return std::make_unique<VkKhrExternalFenceWin32>(handle); }
    #endif
    #if defined(VK_KHR_external_fence_fd)
    if("VK_KHR_external_fence_fd" == name) { return std::make_unique<VkKhrExternalFenceFd>(handle); }
    #endif
    #if defined(VK_KHR_performance_query)
    if("VK_KHR_performance_query" == name) { return std::make_unique<VkKhrPerformanceQuery>(handle); }
    #endif
    #if defined(VK_KHR_maintenance2)
    if("VK_KHR_maintenance2" == name) { return std::make_unique<VkKhrMaintenance2>(handle); }
    #endif
    #if defined(VK_KHR_variable_pointers)
    if("VK_KHR_variable_pointers" == name) { return std::make_unique<VkKhrVariablePointers>(handle); }
    #endif
    #if defined(VK_EXT_external_memory_dma_buf)
    if("VK_EXT_external_memory_dma_buf" == name) { return std::make_unique<VkExtExternalMemoryDmaBuf>(handle); }
    #endif
    #if defined(VK_EXT_queue_family_foreign)
    if("VK_EXT_queue_family_foreign" == name) { return std::make_unique<VkExtQueueFamilyForeign>(handle); }
    #endif
    #if defined(VK_KHR_dedicated_allocation)
    if("VK_KHR_dedicated_allocation" == name) { return std::make_unique<VkKhrDedicatedAllocation>(handle); }
    #endif
    #if defined(VK_NV_glsl_shader)
    if("VK_NV_glsl_shader" == name) { return std::make_unique<VkNvGlslShader>(handle); }
    #endif
    #if defined(VK_ANDROID_external_memory_android_hardware_buffer)
    if("VK_ANDROID_external_memory_android_hardware_buffer" == name) { return std::make_unique<VkAndroidExternalMemoryAndroidHardwareBuffer>(handle); }
    #endif
    #if defined(VK_EXT_sampler_filter_minmax)
    if("VK_EXT_sampler_filter_minmax" == name) { return std::make_unique<VkExtSamplerFilterMinmax>(handle); }
    #endif
    #if defined(VK_KHR_storage_buffer_storage_class)
    if("VK_KHR_storage_buffer_storage_class" == name) { return std::make_unique<VkKhrStorageBufferStorageClass>(handle); }
    #endif
    #if defined(VK_AMD_gpu_shader_int16)
    if("VK_AMD_gpu_shader_int16" == name) { return std::make_unique<VkAmdGpuShaderInt16>(handle); }
    #endif
    #if defined(VK_AMD_mixed_attachment_samples)
    if("VK_AMD_mixed_attachment_samples" == name) { return std::make_unique<VkAmdMixedAttachmentSamples>(handle); }
    #endif
    #if defined(VK_AMD_shader_fragment_mask)
    if("VK_AMD_shader_fragment_mask" == name) { return std::make_unique<VkAmdShaderFragmentMask>(handle); }
    #endif
    #if defined(VK_EXT_inline_uniform_block)
    if("VK_EXT_inline_uniform_block" == name) { return std::make_unique<VkExtInlineUniformBlock>(handle); }
    #endif
    #if defined(VK_EXT_depth_range_unrestricted)
    if("VK_EXT_depth_range_unrestricted" == name) { return std::make_unique<VkExtDepthRangeUnrestricted>(handle); }
    #endif
    #if defined(VK_EXT_shader_stencil_export)
    if("VK_EXT_shader_stencil_export" == name) { return std::make_unique<VkExtShaderStencilExport>(handle); }
    #endif
    #if defined(VK_EXT_sample_locations)
    if("VK_EXT_sample_locations" == name) { return std::make_unique<VkExtSampleLocations>(handle); }
    #endif
    #if defined(VK_KHR_relaxed_block_layout)
    if("VK_KHR_relaxed_block_layout" == name) { return std::make_unique<VkKhrRelaxedBlockLayout>(handle); }
    #endif
    #if defined(VK_KHR_get_memory_requirements2)
    if("VK_KHR_get_memory_requirements2" == name) { return std::make_unique<VkKhrGetMemoryRequirements2>(handle); }
    #endif
    #if defined(VK_KHR_image_format_list)
    if("VK_KHR_image_format_list" == name) { return std::make_unique<VkKhrImageFormatList>(handle); }
    #endif
    #if defined(VK_EXT_blend_operation_advanced)
    if("VK_EXT_blend_operation_advanced" == name) { return std::make_unique<VkExtBlendOperationAdvanced>(handle); }
    #endif
    #if defined(VK_KHR_sampler_mirror_clamp_to_edge)
    if("VK_KHR_sampler_mirror_clamp_to_edge" == name) { return std::make_unique<VkKhrSamplerMirrorClampToEdge>(handle); }
    #endif
    #if defined(VK_NV_fragment_coverage_to_color)
    if("VK_NV_fragment_coverage_to_color" == name) { return std::make_unique<VkNvFragmentCoverageToColor>(handle); }
    #endif
    #if defined(VK_KHR_acceleration_structure)
    if("VK_KHR_acceleration_structure" == name) { return std::make_unique<VkKhrAccelerationStructure>(handle); }
    #endif
    #if defined(VK_NV_framebuffer_mixed_samples)
    if("VK_NV_framebuffer_mixed_samples" == name) { return std::make_unique<VkNvFramebufferMixedSamples>(handle); }
    #endif
    #if defined(VK_NV_fill_rectangle)
    if("VK_NV_fill_rectangle" == name) { return std::make_unique<VkNvFillRectangle>(handle); }
    #endif
    #if defined(VK_NV_shader_sm_builtins)
    if("VK_NV_shader_sm_builtins" == name) { return std::make_unique<VkNvShaderSmBuiltins>(handle); }
    #endif
    #if defined(VK_EXT_post_depth_coverage)
    if("VK_EXT_post_depth_coverage" == name) { return std::make_unique<VkExtPostDepthCoverage>(handle); }
    #endif
    #if defined(VK_KHR_sampler_ycbcr_conversion)
    if("VK_KHR_sampler_ycbcr_conversion" == name) { return std::make_unique<VkKhrSamplerYcbcrConversion>(handle); }
    #endif
    #if defined(VK_KHR_bind_memory2)
    if("VK_KHR_bind_memory2" == name) { return std::make_unique<VkKhrBindMemory2>(handle); }
    #endif
    #if defined(VK_EXT_image_drm_format_modifier)
    if("VK_EXT_image_drm_format_modifier" == name) { return std::make_unique<VkExtImageDrmFormatModifier>(handle); }
    #endif
    #if defined(VK_IMG_filter_cubic)
    if("VK_IMG_filter_cubic" == name) { return std::make_unique<VkImgFilterCubic>(handle); }
    #endif
    #if defined(VK_EXT_validation_cache)
    if("VK_EXT_validation_cache" == name) { return std::make_unique<VkExtValidationCache>(handle); }
    #endif
    #if defined(VK_EXT_descriptor_indexing)
    if("VK_EXT_descriptor_indexing" == name) { return std::make_unique<VkExtDescriptorIndexing>(handle); }
    #endif
    #if defined(VK_EXT_shader_viewport_index_layer)
    if("VK_EXT_shader_viewport_index_layer" == name) { return std::make_unique<VkExtShaderViewportIndexLayer>(handle); }
    #endif
    #if defined(VK_KHR_portability_subset)
    if("VK_KHR_portability_subset" == name) { return std::make_unique<VkKhrPortabilitySubset>(handle); }
    #endif
    #if defined(VK_NV_shading_rate_image)
    if("VK_NV_shading_rate_image" == name) { return std::make_unique<VkNvShadingRateImage>(handle); }
    #endif
    #if defined(VK_NV_ray_tracing)
    if("VK_NV_ray_tracing" == name) { return std::make_unique<VkNvRayTracing>(handle); }
    #endif
    #if defined(VK_NV_representative_fragment_test)
    if("VK_NV_representative_fragment_test" == name) { return std::make_unique<VkNvRepresentativeFragmentTest>(handle); }
    #endif
    #if defined(VK_KHR_maintenance3)
    if("VK_KHR_maintenance3" == name) { return std::make_unique<VkKhrMaintenance3>(handle); }
    #endif
    #if defined(VK_KHR_draw_indirect_count)
    if("VK_KHR_draw_indirect_count" == name) { return std::make_unique<VkKhrDrawIndirectCount>(handle); }
    #endif
    #if defined(VK_EXT_filter_cubic)
    if("VK_EXT_filter_cubic" == name) { return std::make_unique<VkExtFilterCubic>(handle); }
    #endif
    #if defined(VK_QCOM_render_pass_shader_resolve)
    if("VK_QCOM_render_pass_shader_resolve" == name) { return std::make_unique<VkQcomRenderPassShaderResolve>(handle); }
    #endif
    #if defined(VK_EXT_global_priority)
    if("VK_EXT_global_priority" == name) { return std::make_unique<VkExtGlobalPriority>(handle); }
    #endif
    #if defined(VK_KHR_shader_subgroup_extended_types)
    if("VK_KHR_shader_subgroup_extended_types" == name) { return std::make_unique<VkKhrShaderSubgroupExtendedTypes>(handle); }
    #endif
    #if defined(VK_KHR_8bit_storage)
    if("VK_KHR_8bit_storage" == name) { return std::make_unique<VkKhr8bitStorage>(handle); }
    #endif
    #if defined(VK_EXT_external_memory_host)
    if("VK_EXT_external_memory_host" == name) { return std::make_unique<VkExtExternalMemoryHost>(handle); }
    #endif
    #if defined(VK_AMD_buffer_marker)
    if("VK_AMD_buffer_marker" == name) { return std::make_unique<VkAmdBufferMarker>(handle); }
    #endif
    #if defined(VK_KHR_shader_atomic_int64)
    if("VK_KHR_shader_atomic_int64" == name) { return std::make_unique<VkKhrShaderAtomicInt64>(handle); }
    #endif
    #if defined(VK_KHR_shader_clock)
    if("VK_KHR_shader_clock" == name) { return std::make_unique<VkKhrShaderClock>(handle); }
    #endif
    #if defined(VK_AMD_pipeline_compiler_control)
    if("VK_AMD_pipeline_compiler_control" == name) { return std::make_unique<VkAmdPipelineCompilerControl>(handle); }
    #endif
    #if defined(VK_EXT_calibrated_timestamps)
    if("VK_EXT_calibrated_timestamps" == name) { return std::make_unique<VkExtCalibratedTimestamps>(handle); }
    #endif
    #if defined(VK_AMD_shader_core_properties)
    if("VK_AMD_shader_core_properties" == name) { return std::make_unique<VkAmdShaderCoreProperties>(handle); }
    #endif
    #if defined(VK_EXT_video_decode_h265)
    if("VK_EXT_video_decode_h265" == name) { return std::make_unique<VkExtVideoDecodeH265>(handle); }
    #endif
    #if defined(VK_KHR_global_priority)
    if("VK_KHR_global_priority" == name) { return std::make_unique<VkKhrGlobalPriority>(handle); }
    #endif
    #if defined(VK_AMD_rasterization_order)
    if("VK_AMD_rasterization_order" == name) { return std::make_unique<VkAmdRasterizationOrder>(handle); }
    #endif
    #if defined(VK_AMD_memory_overallocation_behavior)
    if("VK_AMD_memory_overallocation_behavior" == name) { return std::make_unique<VkAmdMemoryOverallocationBehavior>(handle); }
    #endif
    #if defined(VK_EXT_vertex_attribute_divisor)
    if("VK_EXT_vertex_attribute_divisor" == name) { return std::make_unique<VkExtVertexAttributeDivisor>(handle); }
    #endif
    #if defined(VK_GGP_frame_token)
    if("VK_GGP_frame_token" == name) { return std::make_unique<VkGgpFrameToken>(handle); }
    #endif
    #if defined(VK_EXT_pipeline_creation_feedback)
    if("VK_EXT_pipeline_creation_feedback" == name) { return std::make_unique<VkExtPipelineCreationFeedback>(handle); }
    #endif
    #if defined(VK_KHR_driver_properties)
    if("VK_KHR_driver_properties" == name) { return std::make_unique<VkKhrDriverProperties>(handle); }
    #endif
    #if defined(VK_KHR_shader_float_controls)
    if("VK_KHR_shader_float_controls" == name) { return std::make_unique<VkKhrShaderFloatControls>(handle); }
    #endif
    #if defined(VK_NV_shader_subgroup_partitioned)
    if("VK_NV_shader_subgroup_partitioned" == name) { return std::make_unique<VkNvShaderSubgroupPartitioned>(handle); }
    #endif
    #if defined(VK_KHR_swapchain)
    if("VK_KHR_swapchain" == name) { return std::make_unique<VkKhrSwapchain>(handle); }
    #endif
    #if defined(VK_KHR_depth_stencil_resolve)
    if("VK_KHR_depth_stencil_resolve" == name) { return std::make_unique<VkKhrDepthStencilResolve>(handle); }
    #endif
    #if defined(VK_KHR_swapchain_mutable_format)
    if("VK_KHR_swapchain_mutable_format" == name) { return std::make_unique<VkKhrSwapchainMutableFormat>(handle); }
    #endif
    #if defined(VK_NV_compute_shader_derivatives)
    if("VK_NV_compute_shader_derivatives" == name) { return std::make_unique<VkNvComputeShaderDerivatives>(handle); }
    #endif
    #if defined(VK_NV_mesh_shader)
    if("VK_NV_mesh_shader" == name) { return std::make_unique<VkNvMeshShader>(handle); }
    #endif
    #if defined(VK_NV_fragment_shader_barycentric)
    if("VK_NV_fragment_shader_barycentric" == name) { return std::make_unique<VkNvFragmentShaderBarycentric>(handle); }
    #endif
    #if defined(VK_NV_shader_image_footprint)
    if("VK_NV_shader_image_footprint" == name) { return std::make_unique<VkNvShaderImageFootprint>(handle); }
    #endif
    #if defined(VK_NV_scissor_exclusive)
    if("VK_NV_scissor_exclusive" == name) { return std::make_unique<VkNvScissorExclusive>(handle); }
    #endif
    #if defined(VK_NV_device_diagnostic_checkpoints)
    if("VK_NV_device_diagnostic_checkpoints" == name) { return std::make_unique<VkNvDeviceDiagnosticCheckpoints>(handle); }
    #endif
    #if defined(VK_KHR_timeline_semaphore)
    if("VK_KHR_timeline_semaphore" == name) { return std::make_unique<VkKhrTimelineSemaphore>(handle); }
    #endif
    #if defined(VK_KHR_extension_209)
    if("VK_KHR_extension_209" == name) { return std::make_unique<VkKhrExtension209>(handle); }
    #endif
    #if defined(VK_AMD_shader_trinary_minmax)
    if("VK_AMD_shader_trinary_minmax" == name) { return std::make_unique<VkAmdShaderTrinaryMinmax>(handle); }
    #endif
    #if defined(VK_INTEL_shader_integer_functions2)
    if("VK_INTEL_shader_integer_functions2" == name) { return std::make_unique<VkIntelShaderIntegerFunctions2>(handle); }
    #endif
    #if defined(VK_INTEL_performance_query)
    if("VK_INTEL_performance_query" == name) { return std::make_unique<VkIntelPerformanceQuery>(handle); }
    #endif
    #if defined(VK_KHR_vulkan_memory_model)
    if("VK_KHR_vulkan_memory_model" == name) { return std::make_unique<VkKhrVulkanMemoryModel>(handle); }
    #endif
    #if defined(VK_EXT_pci_bus_info)
    if("VK_EXT_pci_bus_info" == name) { return std::make_unique<VkExtPciBusInfo>(handle); }
    #endif
    #if defined(VK_AMD_display_native_hdr)
    if("VK_AMD_display_native_hdr" == name) { return std::make_unique<VkAmdDisplayNativeHdr>(handle); }
    #endif
    #if defined(VK_KHR_shader_terminate_invocation)
    if("VK_KHR_shader_terminate_invocation" == name) { return std::make_unique<VkKhrShaderTerminateInvocation>(handle); }
    #endif
    #if defined(VK_EXT_fragment_density_map)
    if("VK_EXT_fragment_density_map" == name) { return std::make_unique<VkExtFragmentDensityMap>(handle); }
    #endif
    #if defined(VK_AMD_shader_explicit_vertex_parameter)
    if("VK_AMD_shader_explicit_vertex_parameter" == name) { return std::make_unique<VkAmdShaderExplicitVertexParameter>(handle); }
    #endif
    #if defined(VK_EXT_scalar_block_layout)
    if("VK_EXT_scalar_block_layout" == name) { return std::make_unique<VkExtScalarBlockLayout>(handle); }
    #endif
    #if defined(VK_GOOGLE_hlsl_functionality1)
    if("VK_GOOGLE_hlsl_functionality1" == name) { return std::make_unique<VkGoogleHlslFunctionality1>(handle); }
    #endif
    #if defined(VK_GOOGLE_decorate_string)
    if("VK_GOOGLE_decorate_string" == name) { return std::make_unique<VkGoogleDecorateString>(handle); }
    #endif
    #if defined(VK_EXT_subgroup_size_control)
    if("VK_EXT_subgroup_size_control" == name) { return std::make_unique<VkExtSubgroupSizeControl>(handle); }
    #endif
    #if defined(VK_KHR_fragment_shading_rate)
    if("VK_KHR_fragment_shading_rate" == name) { return std::make_unique<VkKhrFragmentShadingRate>(handle); }
    #endif
    #if defined(VK_AMD_shader_core_properties2)
    if("VK_AMD_shader_core_properties2" == name) { return std::make_unique<VkAmdShaderCoreProperties2>(handle); }
    #endif
    #if defined(VK_EXT_debug_marker)
    if("VK_EXT_debug_marker" == name) { return std::make_unique<VkExtDebugMarker>(handle); }
    #endif
    #if defined(VK_AMD_device_coherent_memory)
    if("VK_AMD_device_coherent_memory" == name) { return std::make_unique<VkAmdDeviceCoherentMemory>(handle); }
    #endif
    #if defined(VK_EXT_shader_image_atomic_int64)
    if("VK_EXT_shader_image_atomic_int64" == name) { return std::make_unique<VkExtShaderImageAtomicInt64>(handle); }
    #endif
    #if defined(VK_KHR_spirv_1_4)
    if("VK_KHR_spirv_1_4" == name) { return std::make_unique<VkKhrSpirv14>(handle); }
    #endif
    #if defined(VK_EXT_memory_budget)
    if("VK_EXT_memory_budget" == name) { return std::make_unique<VkExtMemoryBudget>(handle); }
    #endif
    #if defined(VK_EXT_memory_priority)
    if("VK_EXT_memory_priority" == name) { return std::make_unique<VkExtMemoryPriority>(handle); }
    #endif
    #if defined(VK_KHR_video_queue)
    if("VK_KHR_video_queue" == name) { return std::make_unique<VkKhrVideoQueue>(handle); }
    #endif
    #if defined(VK_NV_dedicated_allocation_image_aliasing)
    if("VK_NV_dedicated_allocation_image_aliasing" == name) { return std::make_unique<VkNvDedicatedAllocationImageAliasing>(handle); }
    #endif
    #if defined(VK_KHR_separate_depth_stencil_layouts)
    if("VK_KHR_separate_depth_stencil_layouts" == name) { return std::make_unique<VkKhrSeparateDepthStencilLayouts>(handle); }
    #endif
    #if defined(VK_EXT_buffer_device_address)
    if("VK_EXT_buffer_device_address" == name) { return std::make_unique<VkExtBufferDeviceAddress>(handle); }
    #endif
    #if defined(VK_EXT_tooling_info)
    if("VK_EXT_tooling_info" == name) { return std::make_unique<VkExtToolingInfo>(handle); }
    #endif
    #if defined(VK_EXT_separate_stencil_usage)
    if("VK_EXT_separate_stencil_usage" == name) { return std::make_unique<VkExtSeparateStencilUsage>(handle); }
    #endif
    #if defined(VK_KHR_present_wait)
    if("VK_KHR_present_wait" == name) { return std::make_unique<VkKhrPresentWait>(handle); }
    #endif
    #if defined(VK_KHR_video_decode_queue)
    if("VK_KHR_video_decode_queue" == name) { return std::make_unique<VkKhrVideoDecodeQueue>(handle); }
    #endif
    #if defined(VK_NV_cooperative_matrix)
    if("VK_NV_cooperative_matrix" == name) { return std::make_unique<VkNvCooperativeMatrix>(handle); }
    #endif
    #if defined(VK_NV_coverage_reduction_mode)
    if("VK_NV_coverage_reduction_mode" == name) { return std::make_unique<VkNvCoverageReductionMode>(handle); }
    #endif
    #if defined(VK_EXT_fragment_shader_interlock)
    if("VK_EXT_fragment_shader_interlock" == name) { return std::make_unique<VkExtFragmentShaderInterlock>(handle); }
    #endif
    #if defined(VK_EXT_ycbcr_image_arrays)
    if("VK_EXT_ycbcr_image_arrays" == name) { return std::make_unique<VkExtYcbcrImageArrays>(handle); }
    #endif
    #if defined(VK_KHR_uniform_buffer_standard_layout)
    if("VK_KHR_uniform_buffer_standard_layout" == name) { return std::make_unique<VkKhrUniformBufferStandardLayout>(handle); }
    #endif
    #if defined(VK_EXT_provoking_vertex)
    if("VK_EXT_provoking_vertex" == name) { return std::make_unique<VkExtProvokingVertex>(handle); }
    #endif
    #if defined(VK_EXT_full_screen_exclusive)
    if("VK_EXT_full_screen_exclusive" == name) { return std::make_unique<VkExtFullScreenExclusive>(handle); }
    #endif
    #if defined(VK_KHR_buffer_device_address)
    if("VK_KHR_buffer_device_address" == name) { return std::make_unique<VkKhrBufferDeviceAddress>(handle); }
    #endif
    #if defined(VK_AMD_gcn_shader)
    if("VK_AMD_gcn_shader" == name) { return std::make_unique<VkAmdGcnShader>(handle); }
    #endif
    #if defined(VK_EXT_line_rasterization)
    if("VK_EXT_line_rasterization" == name) { return std::make_unique<VkExtLineRasterization>(handle); }
    #endif
    #if defined(VK_EXT_shader_atomic_float)
    if("VK_EXT_shader_atomic_float" == name) { return std::make_unique<VkExtShaderAtomicFloat>(handle); }
    #endif
    #if defined(VK_EXT_host_query_reset)
    if("VK_EXT_host_query_reset" == name) { return std::make_unique<VkExtHostQueryReset>(handle); }
    #endif
    #if defined(VK_EXT_index_type_uint8)
    if("VK_EXT_index_type_uint8" == name) { return std::make_unique<VkExtIndexTypeUint8>(handle); }
    #endif
    #if defined(VK_EXT_extension_267)
    if("VK_EXT_extension_267" == name) { return std::make_unique<VkExtExtension267>(handle); }
    #endif
    #if defined(VK_EXT_extended_dynamic_state)
    if("VK_EXT_extended_dynamic_state" == name) { return std::make_unique<VkExtExtendedDynamicState>(handle); }
    #endif
    #if defined(VK_KHR_deferred_host_operations)
    if("VK_KHR_deferred_host_operations" == name) { return std::make_unique<VkKhrDeferredHostOperations>(handle); }
    #endif
    #if defined(VK_NV_dedicated_allocation)
    if("VK_NV_dedicated_allocation" == name) { return std::make_unique<VkNvDedicatedAllocation>(handle); }
    #endif
    #if defined(VK_KHR_pipeline_executable_properties)
    if("VK_KHR_pipeline_executable_properties" == name) { return std::make_unique<VkKhrPipelineExecutableProperties>(handle); }
    #endif
    #if defined(VK_INTEL_extension_271)
    if("VK_INTEL_extension_271" == name) { return std::make_unique<VkIntelExtension271>(handle); }
    #endif
    #if defined(VK_INTEL_extension_272)
    if("VK_INTEL_extension_272" == name) { return std::make_unique<VkIntelExtension272>(handle); }
    #endif
    #if defined(VK_INTEL_extension_273)
    if("VK_INTEL_extension_273" == name) { return std::make_unique<VkIntelExtension273>(handle); }
    #endif
    #if defined(VK_EXT_shader_atomic_float2)
    if("VK_EXT_shader_atomic_float2" == name) { return std::make_unique<VkExtShaderAtomicFloat2>(handle); }
    #endif
    #if defined(VK_KHR_extension_276)
    if("VK_KHR_extension_276" == name) { return std::make_unique<VkKhrExtension276>(handle); }
    #endif
    #if defined(VK_EXT_shader_demote_to_helper_invocation)
    if("VK_EXT_shader_demote_to_helper_invocation" == name) { return std::make_unique<VkExtShaderDemoteToHelperInvocation>(handle); }
    #endif
    #if defined(VK_NV_device_generated_commands)
    if("VK_NV_device_generated_commands" == name) { return std::make_unique<VkNvDeviceGeneratedCommands>(handle); }
    #endif
    #if defined(VK_NV_inherited_viewport_scissor)
    if("VK_NV_inherited_viewport_scissor" == name) { return std::make_unique<VkNvInheritedViewportScissor>(handle); }
    #endif
    #if defined(VK_KHR_extension_280)
    if("VK_KHR_extension_280" == name) { return std::make_unique<VkKhrExtension280>(handle); }
    #endif
    #if defined(VK_KHR_shader_integer_dot_product)
    if("VK_KHR_shader_integer_dot_product" == name) { return std::make_unique<VkKhrShaderIntegerDotProduct>(handle); }
    #endif
    #if defined(VK_EXT_texel_buffer_alignment)
    if("VK_EXT_texel_buffer_alignment" == name) { return std::make_unique<VkExtTexelBufferAlignment>(handle); }
    #endif
    #if defined(VK_QCOM_render_pass_transform)
    if("VK_QCOM_render_pass_transform" == name) { return std::make_unique<VkQcomRenderPassTransform>(handle); }
    #endif
    #if defined(VK_EXT_extension_284)
    if("VK_EXT_extension_284" == name) { return std::make_unique<VkExtExtension284>(handle); }
    #endif
    #if defined(VK_EXT_device_memory_report)
    if("VK_EXT_device_memory_report" == name) { return std::make_unique<VkExtDeviceMemoryReport>(handle); }
    #endif
    #if defined(VK_EXT_robustness2)
    if("VK_EXT_robustness2" == name) { return std::make_unique<VkExtRobustness2>(handle); }
    #endif
    #if defined(VK_EXT_custom_border_color)
    if("VK_EXT_custom_border_color" == name) { return std::make_unique<VkExtCustomBorderColor>(handle); }
    #endif
    #if defined(VK_EXT_transform_feedback)
    if("VK_EXT_transform_feedback" == name) { return std::make_unique<VkExtTransformFeedback>(handle); }
    #endif
    #if defined(VK_GOOGLE_user_type)
    if("VK_GOOGLE_user_type" == name) { return std::make_unique<VkGoogleUserType>(handle); }
    #endif
    #if defined(VK_KHR_pipeline_library)
    if("VK_KHR_pipeline_library" == name) { return std::make_unique<VkKhrPipelineLibrary>(handle); }
    #endif
    #if defined(VK_KHR_shader_non_semantic_info)
    if("VK_KHR_shader_non_semantic_info" == name) { return std::make_unique<VkKhrShaderNonSemanticInfo>(handle); }
    #endif
    #if defined(VK_KHR_present_id)
    if("VK_KHR_present_id" == name) { return std::make_unique<VkKhrPresentId>(handle); }
    #endif
    #if defined(VK_EXT_private_data)
    if("VK_EXT_private_data" == name) { return std::make_unique<VkExtPrivateData>(handle); }
    #endif
    #if defined(VK_EXT_pipeline_creation_cache_control)
    if("VK_EXT_pipeline_creation_cache_control" == name) { return std::make_unique<VkExtPipelineCreationCacheControl>(handle); }
    #endif
    #if defined(VK_NVX_binary_import)
    if("VK_NVX_binary_import" == name) { return std::make_unique<VkNvxBinaryImport>(handle); }
    #endif
    #if defined(VK_KHR_video_encode_queue)
    if("VK_KHR_video_encode_queue" == name) { return std::make_unique<VkKhrVideoEncodeQueue>(handle); }
    #endif
    #if defined(VK_NV_device_diagnostics_config)
    if("VK_NV_device_diagnostics_config" == name) { return std::make_unique<VkNvDeviceDiagnosticsConfig>(handle); }
    #endif
    #if defined(VK_QCOM_render_pass_store_ops)
    if("VK_QCOM_render_pass_store_ops" == name) { return std::make_unique<VkQcomRenderPassStoreOps>(handle); }
    #endif
    #if defined(VK_NV_extension_308)
    if("VK_NV_extension_308" == name) { return std::make_unique<VkNvExtension308>(handle); }
    #endif
    #if defined(VK_NVX_image_view_handle)
    if("VK_NVX_image_view_handle" == name) { return std::make_unique<VkNvxImageViewHandle>(handle); }
    #endif
    #if defined(VK_KHR_synchronization2)
    if("VK_KHR_synchronization2" == name) { return std::make_unique<VkKhrSynchronization2>(handle); }
    #endif
    #if defined(VK_KHR_shader_subgroup_uniform_control_flow)
    if("VK_KHR_shader_subgroup_uniform_control_flow" == name) { return std::make_unique<VkKhrShaderSubgroupUniformControlFlow>(handle); }
    #endif
    #if defined(VK_KHR_zero_initialize_workgroup_memory)
    if("VK_KHR_zero_initialize_workgroup_memory" == name) { return std::make_unique<VkKhrZeroInitializeWorkgroupMemory>(handle); }
    #endif
    #if defined(VK_NV_fragment_shading_rate_enums)
    if("VK_NV_fragment_shading_rate_enums" == name) { return std::make_unique<VkNvFragmentShadingRateEnums>(handle); }
    #endif
    #if defined(VK_NV_ray_tracing_motion_blur)
    if("VK_NV_ray_tracing_motion_blur" == name) { return std::make_unique<VkNvRayTracingMotionBlur>(handle); }
    #endif
    #if defined(VK_EXT_ycbcr_2plane_444_formats)
    if("VK_EXT_ycbcr_2plane_444_formats" == name) { return std::make_unique<VkExtYcbcr2plane444Formats>(handle); }
    #endif
    #if defined(VK_EXT_fragment_density_map2)
    if("VK_EXT_fragment_density_map2" == name) { return std::make_unique<VkExtFragmentDensityMap2>(handle); }
    #endif
    #if defined(VK_QCOM_rotated_copy_commands)
    if("VK_QCOM_rotated_copy_commands" == name) { return std::make_unique<VkQcomRotatedCopyCommands>(handle); }
    #endif
    #if defined(VK_EXT_image_robustness)
    if("VK_EXT_image_robustness" == name) { return std::make_unique<VkExtImageRobustness>(handle); }
    #endif
    #if defined(VK_KHR_workgroup_memory_explicit_layout)
    if("VK_KHR_workgroup_memory_explicit_layout" == name) { return std::make_unique<VkKhrWorkgroupMemoryExplicitLayout>(handle); }
    #endif
    #if defined(VK_KHR_copy_commands2)
    if("VK_KHR_copy_commands2" == name) { return std::make_unique<VkKhrCopyCommands2>(handle); }
    #endif
    #if defined(VK_AMD_draw_indirect_count)
    if("VK_AMD_draw_indirect_count" == name) { return std::make_unique<VkAmdDrawIndirectCount>(handle); }
    #endif
    #if defined(VK_EXT_4444_formats)
    if("VK_EXT_4444_formats" == name) { return std::make_unique<VkExt4444Formats>(handle); }
    #endif
    #if defined(VK_ARM_rasterization_order_attachment_access)
    if("VK_ARM_rasterization_order_attachment_access" == name) { return std::make_unique<VkArmRasterizationOrderAttachmentAccess>(handle); }
    #endif
    #if defined(VK_EXT_rgba10x6_formats)
    if("VK_EXT_rgba10x6_formats" == name) { return std::make_unique<VkExtRgba10x6Formats>(handle); }
    #endif
    #if defined(VK_NV_acquire_winrt_display)
    if("VK_NV_acquire_winrt_display" == name) { return std::make_unique<VkNvAcquireWinrtDisplay>(handle); }
    #endif
    #if defined(VK_KHR_ray_tracing_pipeline)
    if("VK_KHR_ray_tracing_pipeline" == name) { return std::make_unique<VkKhrRayTracingPipeline>(handle); }
    #endif
    #if defined(VK_KHR_ray_query)
    if("VK_KHR_ray_query" == name) { return std::make_unique<VkKhrRayQuery>(handle); }
    #endif
    #if defined(VK_VALVE_mutable_descriptor_type)
    if("VK_VALVE_mutable_descriptor_type" == name) { return std::make_unique<VkValveMutableDescriptorType>(handle); }
    #endif
    #if defined(VK_EXT_vertex_input_dynamic_state)
    if("VK_EXT_vertex_input_dynamic_state" == name) { return std::make_unique<VkExtVertexInputDynamicState>(handle); }
    #endif
    #if defined(VK_EXT_physical_device_drm)
    if("VK_EXT_physical_device_drm" == name) { return std::make_unique<VkExtPhysicalDeviceDrm>(handle); }
    #endif
    #if defined(VK_EXT_depth_clip_control)
    if("VK_EXT_depth_clip_control" == name) { return std::make_unique<VkExtDepthClipControl>(handle); }
    #endif
    #if defined(VK_EXT_primitive_topology_list_restart)
    if("VK_EXT_primitive_topology_list_restart" == name) { return std::make_unique<VkExtPrimitiveTopologyListRestart>(handle); }
    #endif
    #if defined(VK_AMD_negative_viewport_height)
    if("VK_AMD_negative_viewport_height" == name) { return std::make_unique<VkAmdNegativeViewportHeight>(handle); }
    #endif
    #if defined(VK_KHR_format_feature_flags2)
    if("VK_KHR_format_feature_flags2" == name) { return std::make_unique<VkKhrFormatFeatureFlags2>(handle); }
    #endif
    #if defined(VK_FUCHSIA_external_memory)
    if("VK_FUCHSIA_external_memory" == name) { return std::make_unique<VkFuchsiaExternalMemory>(handle); }
    #endif
    #if defined(VK_FUCHSIA_external_semaphore)
    if("VK_FUCHSIA_external_semaphore" == name) { return std::make_unique<VkFuchsiaExternalSemaphore>(handle); }
    #endif
    #if defined(VK_FUCHSIA_buffer_collection)
    if("VK_FUCHSIA_buffer_collection" == name) { return std::make_unique<VkFuchsiaBufferCollection>(handle); }
    #endif
    #if defined(VK_AMD_gpu_shader_half_float)
    if("VK_AMD_gpu_shader_half_float" == name) { return std::make_unique<VkAmdGpuShaderHalfFloat>(handle); }
    #endif
    #if defined(VK_HUAWEI_subpass_shading)
    if("VK_HUAWEI_subpass_shading" == name) { return std::make_unique<VkHuaweiSubpassShading>(handle); }
    #endif
    #if defined(VK_HUAWEI_invocation_mask)
    if("VK_HUAWEI_invocation_mask" == name) { return std::make_unique<VkHuaweiInvocationMask>(handle); }
    #endif
    #if defined(VK_NV_external_memory_rdma)
    if("VK_NV_external_memory_rdma" == name) { return std::make_unique<VkNvExternalMemoryRdma>(handle); }
    #endif
    #if defined(VK_EXT_extended_dynamic_state2)
    if("VK_EXT_extended_dynamic_state2" == name) { return std::make_unique<VkExtExtendedDynamicState2>(handle); }
    #endif
    #if defined(VK_AMD_shader_ballot)
    if("VK_AMD_shader_ballot" == name) { return std::make_unique<VkAmdShaderBallot>(handle); }
    #endif
    #if defined(VK_EXT_color_write_enable)
    if("VK_EXT_color_write_enable" == name) { return std::make_unique<VkExtColorWriteEnable>(handle); }
    #endif
    #if defined(VK_EXT_global_priority_query)
    if("VK_EXT_global_priority_query" == name) { return std::make_unique<VkExtGlobalPriorityQuery>(handle); }
    #endif
    #if defined(VK_EXT_video_encode_h264)
    if("VK_EXT_video_encode_h264" == name) { return std::make_unique<VkExtVideoEncodeH264>(handle); }
    #endif
    #if defined(VK_EXT_image_view_min_lod)
    if("VK_EXT_image_view_min_lod" == name) { return std::make_unique<VkExtImageViewMinLod>(handle); }
    #endif
    #if defined(VK_EXT_multi_draw)
    if("VK_EXT_multi_draw" == name) { return std::make_unique<VkExtMultiDraw>(handle); }
    #endif
    #if defined(VK_EXT_extension_394)
    if("VK_EXT_extension_394" == name) { return std::make_unique<VkExtExtension394>(handle); }
    #endif
    #if defined(VK_KHR_display_swapchain)
    if("VK_KHR_display_swapchain" == name) { return std::make_unique<VkKhrDisplaySwapchain>(handle); }
    #endif
    #if defined(VK_EXT_video_encode_h265)
    if("VK_EXT_video_encode_h265" == name) { return std::make_unique<VkExtVideoEncodeH265>(handle); }
    #endif
    #if defined(VK_EXT_load_store_op_none)
    if("VK_EXT_load_store_op_none" == name) { return std::make_unique<VkExtLoadStoreOpNone>(handle); }
    #endif
    #if defined(VK_EXT_video_decode_h264)
    if("VK_EXT_video_decode_h264" == name) { return std::make_unique<VkExtVideoDecodeH264>(handle); }
    #endif
    #if defined(VK_EXT_border_color_swizzle)
    if("VK_EXT_border_color_swizzle" == name) { return std::make_unique<VkExtBorderColorSwizzle>(handle); }
    #endif
    #if defined(VK_EXT_pageable_device_local_memory)
    if("VK_EXT_pageable_device_local_memory" == name) { return std::make_unique<VkExtPageableDeviceLocalMemory>(handle); }
    #endif
    #if defined(VK_KHR_maintenance4)
    if("VK_KHR_maintenance4" == name) { return std::make_unique<VkKhrMaintenance4>(handle); }
    #endif
    #if defined(VK_EXT_extension_419)
    if("VK_EXT_extension_419" == name) { return std::make_unique<VkExtExtension419>(handle); }
    #endif
    #if defined(VK_AMD_texture_gather_bias_lod)
    if("VK_AMD_texture_gather_bias_lod" == name) { return std::make_unique<VkAmdTextureGatherBiasLod>(handle); }
    #endif
    #if defined(VK_EXT_extension_420)
    if("VK_EXT_extension_420" == name) { return std::make_unique<VkExtExtension420>(handle); }
    #endif
    #if defined(VK_QCOM_fragment_density_map_offset)
    if("VK_QCOM_fragment_density_map_offset" == name) { return std::make_unique<VkQcomFragmentDensityMapOffset>(handle); }
    #endif
    #if defined(VK_AMD_shader_info)
    if("VK_AMD_shader_info" == name) { return std::make_unique<VkAmdShaderInfo>(handle); }
    #endif
    #if defined(VK_NV_linear_color_attachment)
    if("VK_NV_linear_color_attachment" == name) { return std::make_unique<VkNvLinearColorAttachment>(handle); }
    #endif
    #if defined(VK_KHR_dynamic_rendering)
    if("VK_KHR_dynamic_rendering" == name) { return std::make_unique<VkKhrDynamicRendering>(handle); }
    #endif
    #if defined(VK_AMD_shader_image_load_store_lod)
    if("VK_AMD_shader_image_load_store_lod" == name) { return std::make_unique<VkAmdShaderImageLoadStoreLod>(handle); }
    #endif
    #if defined(VK_NV_corner_sampled_image)
    if("VK_NV_corner_sampled_image" == name) { return std::make_unique<VkNvCornerSampledImage>(handle); }
    #endif
    #if defined(VK_KHR_multiview)
    if("VK_KHR_multiview" == name) { return std::make_unique<VkKhrMultiview>(handle); }
    #endif
    #if defined(VK_IMG_format_pvrtc)
    if("VK_IMG_format_pvrtc" == name) { return std::make_unique<VkImgFormatPvrtc>(handle); }
    #endif
    #if defined(VK_NV_external_memory)
    if("VK_NV_external_memory" == name) { return std::make_unique<VkNvExternalMemory>(handle); }
    #endif
    #if defined(VK_NV_external_memory_win32)
    if("VK_NV_external_memory_win32" == name) { return std::make_unique<VkNvExternalMemoryWin32>(handle); }
    #endif
    #if defined(VK_NV_win32_keyed_mutex)
    if("VK_NV_win32_keyed_mutex" == name) { return std::make_unique<VkNvWin32KeyedMutex>(handle); }
    #endif
    #if defined(VK_KHR_device_group)
    if("VK_KHR_device_group" == name) { return std::make_unique<VkKhrDeviceGroup>(handle); }
    #endif
    #if defined(VK_KHR_shader_draw_parameters)
    if("VK_KHR_shader_draw_parameters" == name) { return std::make_unique<VkKhrShaderDrawParameters>(handle); }
    #endif
    #if defined(VK_EXT_shader_subgroup_ballot)
    if("VK_EXT_shader_subgroup_ballot" == name) { return std::make_unique<VkExtShaderSubgroupBallot>(handle); }
    #endif
    #if defined(VK_EXT_shader_subgroup_vote)
    if("VK_EXT_shader_subgroup_vote" == name) { return std::make_unique<VkExtShaderSubgroupVote>(handle); }
    #endif
    #if defined(VK_EXT_texture_compression_astc_hdr)
    if("VK_EXT_texture_compression_astc_hdr" == name) { return std::make_unique<VkExtTextureCompressionAstcHdr>(handle); }
    #endif
    #if defined(VK_EXT_astc_decode_mode)
    if("VK_EXT_astc_decode_mode" == name) { return std::make_unique<VkExtAstcDecodeMode>(handle); }
    #endif
    #if defined(VK_IMG_extension_69)
    if("VK_IMG_extension_69" == name) { return std::make_unique<VkImgExtension69>(handle); }
    #endif
    #if defined(VK_KHR_maintenance1)
    if("VK_KHR_maintenance1" == name) { return std::make_unique<VkKhrMaintenance1>(handle); }
    #endif
    #if defined(VK_KHR_external_memory)
    if("VK_KHR_external_memory" == name) { return std::make_unique<VkKhrExternalMemory>(handle); }
    #endif
    #if defined(VK_KHR_external_memory_win32)
    if("VK_KHR_external_memory_win32" == name) { return std::make_unique<VkKhrExternalMemoryWin32>(handle); }
    #endif
    #if defined(VK_KHR_external_memory_fd)
    if("VK_KHR_external_memory_fd" == name) { return std::make_unique<VkKhrExternalMemoryFd>(handle); }
    #endif
    #if defined(VK_KHR_win32_keyed_mutex)
    if("VK_KHR_win32_keyed_mutex" == name) { return std::make_unique<VkKhrWin32KeyedMutex>(handle); }
    #endif
    #if defined(VK_KHR_external_semaphore)
    if("VK_KHR_external_semaphore" == name) { return std::make_unique<VkKhrExternalSemaphore>(handle); }
    #endif
    #if defined(VK_KHR_external_semaphore_win32)
    if("VK_KHR_external_semaphore_win32" == name) { return std::make_unique<VkKhrExternalSemaphoreWin32>(handle); }
    #endif
    #if defined(VK_KHR_external_semaphore_fd)
    if("VK_KHR_external_semaphore_fd" == name) { return std::make_unique<VkKhrExternalSemaphoreFd>(handle); }
    #endif
    #if defined(VK_KHR_push_descriptor)
    if("VK_KHR_push_descriptor" == name) { return std::make_unique<VkKhrPushDescriptor>(handle); }
    #endif
    #if defined(VK_EXT_conditional_rendering)
    if("VK_EXT_conditional_rendering" == name) { return std::make_unique<VkExtConditionalRendering>(handle); }
    #endif
    #if defined(VK_KHR_shader_float16_int8)
    if("VK_KHR_shader_float16_int8" == name) { return std::make_unique<VkKhrShaderFloat16Int8>(handle); }
    #endif
    #if defined(VK_KHR_16bit_storage)
    if("VK_KHR_16bit_storage" == name) { return std::make_unique<VkKhr16bitStorage>(handle); }
    #endif
    #if defined(VK_KHR_incremental_present)
    if("VK_KHR_incremental_present" == name) { return std::make_unique<VkKhrIncrementalPresent>(handle); }
    #endif
    #if defined(VK_KHR_descriptor_update_template)
    if("VK_KHR_descriptor_update_template" == name) { return std::make_unique<VkKhrDescriptorUpdateTemplate>(handle); }
    #endif
    #if defined(VK_NVX_device_generated_commands)
    if("VK_NVX_device_generated_commands" == name) { return std::make_unique<VkNvxDeviceGeneratedCommands>(handle); }
    #endif
    #if defined(VK_NV_clip_space_w_scaling)
    if("VK_NV_clip_space_w_scaling" == name) { return std::make_unique<VkNvClipSpaceWScaling>(handle); }
    #endif
    #if defined(VK_EXT_display_control)
    if("VK_EXT_display_control" == name) { return std::make_unique<VkExtDisplayControl>(handle); }
    #endif
    #if defined(VK_GOOGLE_display_timing)
    if("VK_GOOGLE_display_timing" == name) { return std::make_unique<VkGoogleDisplayTiming>(handle); }
    #endif
    #if defined(VK_NV_sample_mask_override_coverage)
    if("VK_NV_sample_mask_override_coverage" == name) { return std::make_unique<VkNvSampleMaskOverrideCoverage>(handle); }
    #endif
    #if defined(VK_NV_geometry_shader_passthrough)
    if("VK_NV_geometry_shader_passthrough" == name) { return std::make_unique<VkNvGeometryShaderPassthrough>(handle); }
    #endif
    #if defined(VK_NV_viewport_array2)
    if("VK_NV_viewport_array2" == name) { return std::make_unique<VkNvViewportArray2>(handle); }
    #endif
    #if defined(VK_NVX_multiview_per_view_attributes)
    if("VK_NVX_multiview_per_view_attributes" == name) { return std::make_unique<VkNvxMultiviewPerViewAttributes>(handle); }
    #endif
    #if defined(VK_NV_viewport_swizzle)
    if("VK_NV_viewport_swizzle" == name) { return std::make_unique<VkNvViewportSwizzle>(handle); }
    #endif

    return nullptr;
}


}//namespace HLGK

