#include <HLGK/Core/Vulkan/gen/InstanceExt.hpp>

namespace HLGK {

#if defined(VK_KHR_surface)

    VkKhrSurface::VkKhrSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceSurfacePresentModesKHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfacePresentModesKHR>("vkGetPhysicalDeviceSurfacePresentModesKHR");
        vkDestroySurfaceKHR = getProcAddr<PFN_vkDestroySurfaceKHR>("vkDestroySurfaceKHR");
        vkGetPhysicalDeviceSurfaceCapabilitiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR>("vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
        vkGetPhysicalDeviceSurfaceFormatsKHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceFormatsKHR>("vkGetPhysicalDeviceSurfaceFormatsKHR");
        vkGetPhysicalDeviceSurfaceSupportKHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceSupportKHR>("vkGetPhysicalDeviceSurfaceSupportKHR");
    }

#endif //VK_KHR_surface

#if defined(VK_KHR_win32_surface)

    VkKhrWin32Surface::VkKhrWin32Surface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrWin32Surface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceWin32PresentationSupportKHR = getProcAddr<PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR>("vkGetPhysicalDeviceWin32PresentationSupportKHR");
        vkCreateWin32SurfaceKHR = getProcAddr<PFN_vkCreateWin32SurfaceKHR>("vkCreateWin32SurfaceKHR");
    }

#endif //VK_KHR_win32_surface

#if defined(VK_EXT_swapchain_colorspace)

    VkExtSwapchainColorspace::VkExtSwapchainColorspace(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtSwapchainColorspace::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_swapchain_colorspace

#if defined(VK_KHR_external_fence_capabilities)

    VkKhrExternalFenceCapabilities::VkKhrExternalFenceCapabilities(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalFenceCapabilities::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceExternalFencePropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR>("vkGetPhysicalDeviceExternalFencePropertiesKHR");
    }

#endif //VK_KHR_external_fence_capabilities

#if defined(VK_EXT_debug_report)

    VkExtDebugReport::VkExtDebugReport(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDebugReport::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkDebugReportMessageEXT = getProcAddr<PFN_vkDebugReportMessageEXT>("vkDebugReportMessageEXT");
        vkCreateDebugReportCallbackEXT = getProcAddr<PFN_vkCreateDebugReportCallbackEXT>("vkCreateDebugReportCallbackEXT");
        vkDestroyDebugReportCallbackEXT = getProcAddr<PFN_vkDestroyDebugReportCallbackEXT>("vkDestroyDebugReportCallbackEXT");
    }

#endif //VK_EXT_debug_report

#if defined(VK_KHR_get_surface_capabilities2)

    VkKhrGetSurfaceCapabilities2::VkKhrGetSurfaceCapabilities2(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrGetSurfaceCapabilities2::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceSurfaceCapabilities2KHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR>("vkGetPhysicalDeviceSurfaceCapabilities2KHR");
        vkGetPhysicalDeviceSurfaceFormats2KHR = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceFormats2KHR>("vkGetPhysicalDeviceSurfaceFormats2KHR");
    }

#endif //VK_KHR_get_surface_capabilities2

#if defined(VK_KHR_get_display_properties2)

    VkKhrGetDisplayProperties2::VkKhrGetDisplayProperties2(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrGetDisplayProperties2::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDisplayPlaneCapabilities2KHR = getProcAddr<PFN_vkGetDisplayPlaneCapabilities2KHR>("vkGetDisplayPlaneCapabilities2KHR");
        vkGetDisplayModeProperties2KHR = getProcAddr<PFN_vkGetDisplayModeProperties2KHR>("vkGetDisplayModeProperties2KHR");
        vkGetPhysicalDeviceDisplayPlaneProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR>("vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
        vkGetPhysicalDeviceDisplayProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceDisplayProperties2KHR>("vkGetPhysicalDeviceDisplayProperties2KHR");
    }

#endif //VK_KHR_get_display_properties2

#if defined(VK_MVK_ios_surface)

    VkMvkIosSurface::VkMvkIosSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkMvkIosSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateIOSSurfaceMVK = getProcAddr<PFN_vkCreateIOSSurfaceMVK>("vkCreateIOSSurfaceMVK");
    }

#endif //VK_MVK_ios_surface

#if defined(VK_MVK_macos_surface)

    VkMvkMacosSurface::VkMvkMacosSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkMvkMacosSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateMacOSSurfaceMVK = getProcAddr<PFN_vkCreateMacOSSurfaceMVK>("vkCreateMacOSSurfaceMVK");
    }

#endif //VK_MVK_macos_surface

#if defined(VK_MVK_moltenvk)

    VkMvkMoltenvk::VkMvkMoltenvk(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkMvkMoltenvk::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_MVK_moltenvk

#if defined(VK_EXT_debug_utils)

    VkExtDebugUtils::VkExtDebugUtils(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDebugUtils::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkQueueInsertDebugUtilsLabelEXT = getProcAddr<PFN_vkQueueInsertDebugUtilsLabelEXT>("vkQueueInsertDebugUtilsLabelEXT");
        vkQueueBeginDebugUtilsLabelEXT = getProcAddr<PFN_vkQueueBeginDebugUtilsLabelEXT>("vkQueueBeginDebugUtilsLabelEXT");
        vkCmdInsertDebugUtilsLabelEXT = getProcAddr<PFN_vkCmdInsertDebugUtilsLabelEXT>("vkCmdInsertDebugUtilsLabelEXT");
        vkSetDebugUtilsObjectTagEXT = getProcAddr<PFN_vkSetDebugUtilsObjectTagEXT>("vkSetDebugUtilsObjectTagEXT");
        vkCmdBeginDebugUtilsLabelEXT = getProcAddr<PFN_vkCmdBeginDebugUtilsLabelEXT>("vkCmdBeginDebugUtilsLabelEXT");
        vkCmdEndDebugUtilsLabelEXT = getProcAddr<PFN_vkCmdEndDebugUtilsLabelEXT>("vkCmdEndDebugUtilsLabelEXT");
        vkCreateDebugUtilsMessengerEXT = getProcAddr<PFN_vkCreateDebugUtilsMessengerEXT>("vkCreateDebugUtilsMessengerEXT");
        vkDestroyDebugUtilsMessengerEXT = getProcAddr<PFN_vkDestroyDebugUtilsMessengerEXT>("vkDestroyDebugUtilsMessengerEXT");
        vkQueueEndDebugUtilsLabelEXT = getProcAddr<PFN_vkQueueEndDebugUtilsLabelEXT>("vkQueueEndDebugUtilsLabelEXT");
        vkSetDebugUtilsObjectNameEXT = getProcAddr<PFN_vkSetDebugUtilsObjectNameEXT>("vkSetDebugUtilsObjectNameEXT");
        vkSubmitDebugUtilsMessageEXT = getProcAddr<PFN_vkSubmitDebugUtilsMessageEXT>("vkSubmitDebugUtilsMessageEXT");
    }

#endif //VK_EXT_debug_utils

#if defined(VK_FUCHSIA_imagepipe_surface)

    VkFuchsiaImagepipeSurface::VkFuchsiaImagepipeSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkFuchsiaImagepipeSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateImagePipeSurfaceFUCHSIA = getProcAddr<PFN_vkCreateImagePipeSurfaceFUCHSIA>("vkCreateImagePipeSurfaceFUCHSIA");
    }

#endif //VK_FUCHSIA_imagepipe_surface

#if defined(VK_EXT_metal_surface)

    VkExtMetalSurface::VkExtMetalSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtMetalSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateMetalSurfaceEXT = getProcAddr<PFN_vkCreateMetalSurfaceEXT>("vkCreateMetalSurfaceEXT");
    }

#endif //VK_EXT_metal_surface

#if defined(VK_KHR_surface_protected_capabilities)

    VkKhrSurfaceProtectedCapabilities::VkKhrSurfaceProtectedCapabilities(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrSurfaceProtectedCapabilities::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_surface_protected_capabilities

#if defined(VK_EXT_validation_features)

    VkExtValidationFeatures::VkExtValidationFeatures(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtValidationFeatures::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_validation_features

#if defined(VK_EXT_headless_surface)

    VkExtHeadlessSurface::VkExtHeadlessSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtHeadlessSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateHeadlessSurfaceEXT = getProcAddr<PFN_vkCreateHeadlessSurfaceEXT>("vkCreateHeadlessSurfaceEXT");
    }

#endif //VK_EXT_headless_surface

#if defined(VK_KHR_extension_275)

    VkKhrExtension275::VkKhrExtension275(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExtension275::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_extension_275

#if defined(VK_EXT_acquire_drm_display)

    VkExtAcquireDrmDisplay::VkExtAcquireDrmDisplay(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtAcquireDrmDisplay::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetDrmDisplayEXT = getProcAddr<PFN_vkGetDrmDisplayEXT>("vkGetDrmDisplayEXT");
        vkAcquireDrmDisplayEXT = getProcAddr<PFN_vkAcquireDrmDisplayEXT>("vkAcquireDrmDisplayEXT");
    }

#endif //VK_EXT_acquire_drm_display

#if defined(VK_KHR_display)

    VkKhrDisplay::VkKhrDisplay(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDisplay::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateDisplayModeKHR = getProcAddr<PFN_vkCreateDisplayModeKHR>("vkCreateDisplayModeKHR");
        vkGetDisplayPlaneSupportedDisplaysKHR = getProcAddr<PFN_vkGetDisplayPlaneSupportedDisplaysKHR>("vkGetDisplayPlaneSupportedDisplaysKHR");
        vkGetDisplayPlaneCapabilitiesKHR = getProcAddr<PFN_vkGetDisplayPlaneCapabilitiesKHR>("vkGetDisplayPlaneCapabilitiesKHR");
        vkGetPhysicalDeviceDisplayPlanePropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR>("vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
        vkCreateDisplayPlaneSurfaceKHR = getProcAddr<PFN_vkCreateDisplayPlaneSurfaceKHR>("vkCreateDisplayPlaneSurfaceKHR");
        vkGetDisplayModePropertiesKHR = getProcAddr<PFN_vkGetDisplayModePropertiesKHR>("vkGetDisplayModePropertiesKHR");
        vkGetPhysicalDeviceDisplayPropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceDisplayPropertiesKHR>("vkGetPhysicalDeviceDisplayPropertiesKHR");
    }

#endif //VK_KHR_display

#if defined(VK_EXT_directfb_surface)

    VkExtDirectfbSurface::VkExtDirectfbSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDirectfbSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateDirectFBSurfaceEXT = getProcAddr<PFN_vkCreateDirectFBSurfaceEXT>("vkCreateDirectFBSurfaceEXT");
        vkGetPhysicalDeviceDirectFBPresentationSupportEXT = getProcAddr<PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT>("vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
    }

#endif //VK_EXT_directfb_surface

#if defined(VK_QNX_screen_surface)

    VkQnxScreenSurface::VkQnxScreenSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkQnxScreenSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceScreenPresentationSupportQNX = getProcAddr<PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX>("vkGetPhysicalDeviceScreenPresentationSupportQNX");
        vkCreateScreenSurfaceQNX = getProcAddr<PFN_vkCreateScreenSurfaceQNX>("vkCreateScreenSurfaceQNX");
    }

#endif //VK_QNX_screen_surface

#if defined(VK_EXT_extension_384)

    VkExtExtension384::VkExtExtension384(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtExtension384::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_extension_384

#if defined(VK_MESA_extension_385)

    VkMesaExtension385::VkMesaExtension385(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkMesaExtension385::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_MESA_extension_385

#if defined(VK_GOOGLE_surfaceless_query)

    VkGoogleSurfacelessQuery::VkGoogleSurfacelessQuery(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkGoogleSurfacelessQuery::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_GOOGLE_surfaceless_query

#if defined(VK_KHR_xlib_surface)

    VkKhrXlibSurface::VkKhrXlibSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrXlibSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceXlibPresentationSupportKHR = getProcAddr<PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR>("vkGetPhysicalDeviceXlibPresentationSupportKHR");
        vkCreateXlibSurfaceKHR = getProcAddr<PFN_vkCreateXlibSurfaceKHR>("vkCreateXlibSurfaceKHR");
    }

#endif //VK_KHR_xlib_surface

#if defined(VK_GGP_stream_descriptor_surface)

    VkGgpStreamDescriptorSurface::VkGgpStreamDescriptorSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkGgpStreamDescriptorSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateStreamDescriptorSurfaceGGP = getProcAddr<PFN_vkCreateStreamDescriptorSurfaceGGP>("vkCreateStreamDescriptorSurfaceGGP");
    }

#endif //VK_GGP_stream_descriptor_surface

#if defined(VK_NV_external_memory_capabilities)

    VkNvExternalMemoryCapabilities::VkNvExternalMemoryCapabilities(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkNvExternalMemoryCapabilities::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceExternalImageFormatPropertiesNV = getProcAddr<PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV>("vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
    }

#endif //VK_NV_external_memory_capabilities

#if defined(VK_KHR_xcb_surface)

    VkKhrXcbSurface::VkKhrXcbSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrXcbSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceXcbPresentationSupportKHR = getProcAddr<PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR>("vkGetPhysicalDeviceXcbPresentationSupportKHR");
        vkCreateXcbSurfaceKHR = getProcAddr<PFN_vkCreateXcbSurfaceKHR>("vkCreateXcbSurfaceKHR");
    }

#endif //VK_KHR_xcb_surface

#if defined(VK_KHR_get_physical_device_properties2)

    VkKhrGetPhysicalDeviceProperties2::VkKhrGetPhysicalDeviceProperties2(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrGetPhysicalDeviceProperties2::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceProperties2KHR>("vkGetPhysicalDeviceProperties2KHR");
        vkGetPhysicalDeviceFormatProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceFormatProperties2KHR>("vkGetPhysicalDeviceFormatProperties2KHR");
        vkGetPhysicalDeviceFeatures2KHR = getProcAddr<PFN_vkGetPhysicalDeviceFeatures2KHR>("vkGetPhysicalDeviceFeatures2KHR");
        vkGetPhysicalDeviceSparseImageFormatProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR>("vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
        vkGetPhysicalDeviceImageFormatProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceImageFormatProperties2KHR>("vkGetPhysicalDeviceImageFormatProperties2KHR");
        vkGetPhysicalDeviceQueueFamilyProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR>("vkGetPhysicalDeviceQueueFamilyProperties2KHR");
        vkGetPhysicalDeviceMemoryProperties2KHR = getProcAddr<PFN_vkGetPhysicalDeviceMemoryProperties2KHR>("vkGetPhysicalDeviceMemoryProperties2KHR");
    }

#endif //VK_KHR_get_physical_device_properties2

#if defined(VK_EXT_validation_flags)

    VkExtValidationFlags::VkExtValidationFlags(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtValidationFlags::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_EXT_validation_flags

#if defined(VK_NN_vi_surface)

    VkNnViSurface::VkNnViSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkNnViSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateViSurfaceNN = getProcAddr<PFN_vkCreateViSurfaceNN>("vkCreateViSurfaceNN");
    }

#endif //VK_NN_vi_surface

#if defined(VK_KHR_wayland_surface)

    VkKhrWaylandSurface::VkKhrWaylandSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrWaylandSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateWaylandSurfaceKHR = getProcAddr<PFN_vkCreateWaylandSurfaceKHR>("vkCreateWaylandSurfaceKHR");
        vkGetPhysicalDeviceWaylandPresentationSupportKHR = getProcAddr<PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR>("vkGetPhysicalDeviceWaylandPresentationSupportKHR");
    }

#endif //VK_KHR_wayland_surface

#if defined(VK_KHR_device_group_creation)

    VkKhrDeviceGroupCreation::VkKhrDeviceGroupCreation(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrDeviceGroupCreation::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkEnumeratePhysicalDeviceGroupsKHR = getProcAddr<PFN_vkEnumeratePhysicalDeviceGroupsKHR>("vkEnumeratePhysicalDeviceGroupsKHR");
    }

#endif //VK_KHR_device_group_creation

#if defined(VK_KHR_external_memory_capabilities)

    VkKhrExternalMemoryCapabilities::VkKhrExternalMemoryCapabilities(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalMemoryCapabilities::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceExternalBufferPropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR>("vkGetPhysicalDeviceExternalBufferPropertiesKHR");
    }

#endif //VK_KHR_external_memory_capabilities

#if defined(VK_KHR_external_semaphore_capabilities)

    VkKhrExternalSemaphoreCapabilities::VkKhrExternalSemaphoreCapabilities(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrExternalSemaphoreCapabilities::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = getProcAddr<PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR>("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
    }

#endif //VK_KHR_external_semaphore_capabilities

#if defined(VK_KHR_mir_surface)

    VkKhrMirSurface::VkKhrMirSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrMirSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

    }

#endif //VK_KHR_mir_surface

#if defined(VK_EXT_direct_mode_display)

    VkExtDirectModeDisplay::VkExtDirectModeDisplay(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDirectModeDisplay::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkReleaseDisplayEXT = getProcAddr<PFN_vkReleaseDisplayEXT>("vkReleaseDisplayEXT");
    }

#endif //VK_EXT_direct_mode_display

#if defined(VK_KHR_android_surface)

    VkKhrAndroidSurface::VkKhrAndroidSurface(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkKhrAndroidSurface::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkCreateAndroidSurfaceKHR = getProcAddr<PFN_vkCreateAndroidSurfaceKHR>("vkCreateAndroidSurfaceKHR");
    }

#endif //VK_KHR_android_surface

#if defined(VK_EXT_acquire_xlib_display)

    VkExtAcquireXlibDisplay::VkExtAcquireXlibDisplay(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtAcquireXlibDisplay::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetRandROutputDisplayEXT = getProcAddr<PFN_vkGetRandROutputDisplayEXT>("vkGetRandROutputDisplayEXT");
        vkAcquireXlibDisplayEXT = getProcAddr<PFN_vkAcquireXlibDisplayEXT>("vkAcquireXlibDisplayEXT");
    }

#endif //VK_EXT_acquire_xlib_display

#if defined(VK_EXT_display_surface_counter)

    VkExtDisplaySurfaceCounter::VkExtDisplaySurfaceCounter(VkInstance handler)
        : InstanceExtensionBase(handler) {
        init(handler);
    }

    void VkExtDisplaySurfaceCounter::init(VkInstance handler) 
    {
        if (!handler) { return; }
        m_handler = handler;

        vkGetPhysicalDeviceSurfaceCapabilities2EXT = getProcAddr<PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT>("vkGetPhysicalDeviceSurfaceCapabilities2EXT");
    }

#endif //VK_EXT_display_surface_counter

std::unique_ptr<InstanceExtensionBase> makeInstanceExtension(const std::string &name, VkInstance handle)
{
    #if defined(VK_KHR_surface)
    if("VK_KHR_surface" == name) { return std::make_unique<VkKhrSurface>(handle); }
    #endif
    #if defined(VK_KHR_win32_surface)
    if("VK_KHR_win32_surface" == name) { return std::make_unique<VkKhrWin32Surface>(handle); }
    #endif
    #if defined(VK_EXT_swapchain_colorspace)
    if("VK_EXT_swapchain_colorspace" == name) { return std::make_unique<VkExtSwapchainColorspace>(handle); }
    #endif
    #if defined(VK_KHR_external_fence_capabilities)
    if("VK_KHR_external_fence_capabilities" == name) { return std::make_unique<VkKhrExternalFenceCapabilities>(handle); }
    #endif
    #if defined(VK_EXT_debug_report)
    if("VK_EXT_debug_report" == name) { return std::make_unique<VkExtDebugReport>(handle); }
    #endif
    #if defined(VK_KHR_get_surface_capabilities2)
    if("VK_KHR_get_surface_capabilities2" == name) { return std::make_unique<VkKhrGetSurfaceCapabilities2>(handle); }
    #endif
    #if defined(VK_KHR_get_display_properties2)
    if("VK_KHR_get_display_properties2" == name) { return std::make_unique<VkKhrGetDisplayProperties2>(handle); }
    #endif
    #if defined(VK_MVK_ios_surface)
    if("VK_MVK_ios_surface" == name) { return std::make_unique<VkMvkIosSurface>(handle); }
    #endif
    #if defined(VK_MVK_macos_surface)
    if("VK_MVK_macos_surface" == name) { return std::make_unique<VkMvkMacosSurface>(handle); }
    #endif
    #if defined(VK_MVK_moltenvk)
    if("VK_MVK_moltenvk" == name) { return std::make_unique<VkMvkMoltenvk>(handle); }
    #endif
    #if defined(VK_EXT_debug_utils)
    if("VK_EXT_debug_utils" == name) { return std::make_unique<VkExtDebugUtils>(handle); }
    #endif
    #if defined(VK_FUCHSIA_imagepipe_surface)
    if("VK_FUCHSIA_imagepipe_surface" == name) { return std::make_unique<VkFuchsiaImagepipeSurface>(handle); }
    #endif
    #if defined(VK_EXT_metal_surface)
    if("VK_EXT_metal_surface" == name) { return std::make_unique<VkExtMetalSurface>(handle); }
    #endif
    #if defined(VK_KHR_surface_protected_capabilities)
    if("VK_KHR_surface_protected_capabilities" == name) { return std::make_unique<VkKhrSurfaceProtectedCapabilities>(handle); }
    #endif
    #if defined(VK_EXT_validation_features)
    if("VK_EXT_validation_features" == name) { return std::make_unique<VkExtValidationFeatures>(handle); }
    #endif
    #if defined(VK_EXT_headless_surface)
    if("VK_EXT_headless_surface" == name) { return std::make_unique<VkExtHeadlessSurface>(handle); }
    #endif
    #if defined(VK_KHR_extension_275)
    if("VK_KHR_extension_275" == name) { return std::make_unique<VkKhrExtension275>(handle); }
    #endif
    #if defined(VK_EXT_acquire_drm_display)
    if("VK_EXT_acquire_drm_display" == name) { return std::make_unique<VkExtAcquireDrmDisplay>(handle); }
    #endif
    #if defined(VK_KHR_display)
    if("VK_KHR_display" == name) { return std::make_unique<VkKhrDisplay>(handle); }
    #endif
    #if defined(VK_EXT_directfb_surface)
    if("VK_EXT_directfb_surface" == name) { return std::make_unique<VkExtDirectfbSurface>(handle); }
    #endif
    #if defined(VK_QNX_screen_surface)
    if("VK_QNX_screen_surface" == name) { return std::make_unique<VkQnxScreenSurface>(handle); }
    #endif
    #if defined(VK_EXT_extension_384)
    if("VK_EXT_extension_384" == name) { return std::make_unique<VkExtExtension384>(handle); }
    #endif
    #if defined(VK_MESA_extension_385)
    if("VK_MESA_extension_385" == name) { return std::make_unique<VkMesaExtension385>(handle); }
    #endif
    #if defined(VK_GOOGLE_surfaceless_query)
    if("VK_GOOGLE_surfaceless_query" == name) { return std::make_unique<VkGoogleSurfacelessQuery>(handle); }
    #endif
    #if defined(VK_KHR_xlib_surface)
    if("VK_KHR_xlib_surface" == name) { return std::make_unique<VkKhrXlibSurface>(handle); }
    #endif
    #if defined(VK_GGP_stream_descriptor_surface)
    if("VK_GGP_stream_descriptor_surface" == name) { return std::make_unique<VkGgpStreamDescriptorSurface>(handle); }
    #endif
    #if defined(VK_NV_external_memory_capabilities)
    if("VK_NV_external_memory_capabilities" == name) { return std::make_unique<VkNvExternalMemoryCapabilities>(handle); }
    #endif
    #if defined(VK_KHR_xcb_surface)
    if("VK_KHR_xcb_surface" == name) { return std::make_unique<VkKhrXcbSurface>(handle); }
    #endif
    #if defined(VK_KHR_get_physical_device_properties2)
    if("VK_KHR_get_physical_device_properties2" == name) { return std::make_unique<VkKhrGetPhysicalDeviceProperties2>(handle); }
    #endif
    #if defined(VK_EXT_validation_flags)
    if("VK_EXT_validation_flags" == name) { return std::make_unique<VkExtValidationFlags>(handle); }
    #endif
    #if defined(VK_NN_vi_surface)
    if("VK_NN_vi_surface" == name) { return std::make_unique<VkNnViSurface>(handle); }
    #endif
    #if defined(VK_KHR_wayland_surface)
    if("VK_KHR_wayland_surface" == name) { return std::make_unique<VkKhrWaylandSurface>(handle); }
    #endif
    #if defined(VK_KHR_device_group_creation)
    if("VK_KHR_device_group_creation" == name) { return std::make_unique<VkKhrDeviceGroupCreation>(handle); }
    #endif
    #if defined(VK_KHR_external_memory_capabilities)
    if("VK_KHR_external_memory_capabilities" == name) { return std::make_unique<VkKhrExternalMemoryCapabilities>(handle); }
    #endif
    #if defined(VK_KHR_external_semaphore_capabilities)
    if("VK_KHR_external_semaphore_capabilities" == name) { return std::make_unique<VkKhrExternalSemaphoreCapabilities>(handle); }
    #endif
    #if defined(VK_KHR_mir_surface)
    if("VK_KHR_mir_surface" == name) { return std::make_unique<VkKhrMirSurface>(handle); }
    #endif
    #if defined(VK_EXT_direct_mode_display)
    if("VK_EXT_direct_mode_display" == name) { return std::make_unique<VkExtDirectModeDisplay>(handle); }
    #endif
    #if defined(VK_KHR_android_surface)
    if("VK_KHR_android_surface" == name) { return std::make_unique<VkKhrAndroidSurface>(handle); }
    #endif
    #if defined(VK_EXT_acquire_xlib_display)
    if("VK_EXT_acquire_xlib_display" == name) { return std::make_unique<VkExtAcquireXlibDisplay>(handle); }
    #endif
    #if defined(VK_EXT_display_surface_counter)
    if("VK_EXT_display_surface_counter" == name) { return std::make_unique<VkExtDisplaySurfaceCounter>(handle); }
    #endif

    return nullptr;
}


}//namespace HLGK

