#pragma once

#include <vulkan/vulkan.h>
#include <memory>
#include <HLGK/Core/Vulkan/ExtensionBase.hpp>
namespace HLGK {

#if defined(VK_KHR_surface)

class VkKhrSurface final : public InstanceExtensionBase { 
public:
    VkKhrSurface() = default;
    VkKhrSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_surface"; }
    static std::string str() { return "VK_KHR_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR = {};
    PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR = {};
    PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR = {};
    PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR = {};
    PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR = {};
};//class VkKhrSurface

#endif //VK_KHR_surface

#if defined(VK_KHR_win32_surface)

class VkKhrWin32Surface final : public InstanceExtensionBase { 
public:
    VkKhrWin32Surface() = default;
    VkKhrWin32Surface(VkInstance handler);

    std::string name() const override { return "VK_KHR_win32_surface"; }
    static std::string str() { return "VK_KHR_win32_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR = {};
    PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR = {};
};//class VkKhrWin32Surface

#endif //VK_KHR_win32_surface

#if defined(VK_EXT_swapchain_colorspace)

class VkExtSwapchainColorspace final : public InstanceExtensionBase { 
public:
    VkExtSwapchainColorspace() = default;
    VkExtSwapchainColorspace(VkInstance handler);

    std::string name() const override { return "VK_EXT_swapchain_colorspace"; }
    static std::string str() { return "VK_EXT_swapchain_colorspace"; }
    void init(VkInstance handler) override;
public:
};//class VkExtSwapchainColorspace

#endif //VK_EXT_swapchain_colorspace

#if defined(VK_KHR_external_fence_capabilities)

class VkKhrExternalFenceCapabilities final : public InstanceExtensionBase { 
public:
    VkKhrExternalFenceCapabilities() = default;
    VkKhrExternalFenceCapabilities(VkInstance handler);

    std::string name() const override { return "VK_KHR_external_fence_capabilities"; }
    static std::string str() { return "VK_KHR_external_fence_capabilities"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR vkGetPhysicalDeviceExternalFencePropertiesKHR = {};
};//class VkKhrExternalFenceCapabilities

#endif //VK_KHR_external_fence_capabilities

#if defined(VK_EXT_debug_report)

class VkExtDebugReport final : public InstanceExtensionBase { 
public:
    VkExtDebugReport() = default;
    VkExtDebugReport(VkInstance handler);

    std::string name() const override { return "VK_EXT_debug_report"; }
    static std::string str() { return "VK_EXT_debug_report"; }
    void init(VkInstance handler) override;
public:
    PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT = {};
    PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT = {};
    PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT = {};
};//class VkExtDebugReport

#endif //VK_EXT_debug_report

#if defined(VK_KHR_get_surface_capabilities2)

class VkKhrGetSurfaceCapabilities2 final : public InstanceExtensionBase { 
public:
    VkKhrGetSurfaceCapabilities2() = default;
    VkKhrGetSurfaceCapabilities2(VkInstance handler);

    std::string name() const override { return "VK_KHR_get_surface_capabilities2"; }
    static std::string str() { return "VK_KHR_get_surface_capabilities2"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR = {};
    PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR = {};
};//class VkKhrGetSurfaceCapabilities2

#endif //VK_KHR_get_surface_capabilities2

#if defined(VK_KHR_get_display_properties2)

class VkKhrGetDisplayProperties2 final : public InstanceExtensionBase { 
public:
    VkKhrGetDisplayProperties2() = default;
    VkKhrGetDisplayProperties2(VkInstance handler);

    std::string name() const override { return "VK_KHR_get_display_properties2"; }
    static std::string str() { return "VK_KHR_get_display_properties2"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR = {};
    PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR = {};
    PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR = {};
    PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR = {};
};//class VkKhrGetDisplayProperties2

#endif //VK_KHR_get_display_properties2

#if defined(VK_MVK_ios_surface)

class VkMvkIosSurface final : public InstanceExtensionBase { 
public:
    VkMvkIosSurface() = default;
    VkMvkIosSurface(VkInstance handler);

    std::string name() const override { return "VK_MVK_ios_surface"; }
    static std::string str() { return "VK_MVK_ios_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK = {};
};//class VkMvkIosSurface

#endif //VK_MVK_ios_surface

#if defined(VK_MVK_macos_surface)

class VkMvkMacosSurface final : public InstanceExtensionBase { 
public:
    VkMvkMacosSurface() = default;
    VkMvkMacosSurface(VkInstance handler);

    std::string name() const override { return "VK_MVK_macos_surface"; }
    static std::string str() { return "VK_MVK_macos_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK = {};
};//class VkMvkMacosSurface

#endif //VK_MVK_macos_surface

#if defined(VK_MVK_moltenvk)

class VkMvkMoltenvk final : public InstanceExtensionBase { 
public:
    VkMvkMoltenvk() = default;
    VkMvkMoltenvk(VkInstance handler);

    std::string name() const override { return "VK_MVK_moltenvk"; }
    static std::string str() { return "VK_MVK_moltenvk"; }
    void init(VkInstance handler) override;
public:
};//class VkMvkMoltenvk

#endif //VK_MVK_moltenvk

#if defined(VK_EXT_debug_utils)

class VkExtDebugUtils final : public InstanceExtensionBase { 
public:
    VkExtDebugUtils() = default;
    VkExtDebugUtils(VkInstance handler);

    std::string name() const override { return "VK_EXT_debug_utils"; }
    static std::string str() { return "VK_EXT_debug_utils"; }
    void init(VkInstance handler) override;
public:
    PFN_vkQueueInsertDebugUtilsLabelEXT vkQueueInsertDebugUtilsLabelEXT = {};
    PFN_vkQueueBeginDebugUtilsLabelEXT vkQueueBeginDebugUtilsLabelEXT = {};
    PFN_vkCmdInsertDebugUtilsLabelEXT vkCmdInsertDebugUtilsLabelEXT = {};
    PFN_vkSetDebugUtilsObjectTagEXT vkSetDebugUtilsObjectTagEXT = {};
    PFN_vkCmdBeginDebugUtilsLabelEXT vkCmdBeginDebugUtilsLabelEXT = {};
    PFN_vkCmdEndDebugUtilsLabelEXT vkCmdEndDebugUtilsLabelEXT = {};
    PFN_vkCreateDebugUtilsMessengerEXT vkCreateDebugUtilsMessengerEXT = {};
    PFN_vkDestroyDebugUtilsMessengerEXT vkDestroyDebugUtilsMessengerEXT = {};
    PFN_vkQueueEndDebugUtilsLabelEXT vkQueueEndDebugUtilsLabelEXT = {};
    PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT = {};
    PFN_vkSubmitDebugUtilsMessageEXT vkSubmitDebugUtilsMessageEXT = {};
};//class VkExtDebugUtils

#endif //VK_EXT_debug_utils

#if defined(VK_FUCHSIA_imagepipe_surface)

class VkFuchsiaImagepipeSurface final : public InstanceExtensionBase { 
public:
    VkFuchsiaImagepipeSurface() = default;
    VkFuchsiaImagepipeSurface(VkInstance handler);

    std::string name() const override { return "VK_FUCHSIA_imagepipe_surface"; }
    static std::string str() { return "VK_FUCHSIA_imagepipe_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateImagePipeSurfaceFUCHSIA vkCreateImagePipeSurfaceFUCHSIA = {};
};//class VkFuchsiaImagepipeSurface

#endif //VK_FUCHSIA_imagepipe_surface

#if defined(VK_EXT_metal_surface)

class VkExtMetalSurface final : public InstanceExtensionBase { 
public:
    VkExtMetalSurface() = default;
    VkExtMetalSurface(VkInstance handler);

    std::string name() const override { return "VK_EXT_metal_surface"; }
    static std::string str() { return "VK_EXT_metal_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateMetalSurfaceEXT vkCreateMetalSurfaceEXT = {};
};//class VkExtMetalSurface

#endif //VK_EXT_metal_surface

#if defined(VK_KHR_surface_protected_capabilities)

class VkKhrSurfaceProtectedCapabilities final : public InstanceExtensionBase { 
public:
    VkKhrSurfaceProtectedCapabilities() = default;
    VkKhrSurfaceProtectedCapabilities(VkInstance handler);

    std::string name() const override { return "VK_KHR_surface_protected_capabilities"; }
    static std::string str() { return "VK_KHR_surface_protected_capabilities"; }
    void init(VkInstance handler) override;
public:
};//class VkKhrSurfaceProtectedCapabilities

#endif //VK_KHR_surface_protected_capabilities

#if defined(VK_EXT_validation_features)

class VkExtValidationFeatures final : public InstanceExtensionBase { 
public:
    VkExtValidationFeatures() = default;
    VkExtValidationFeatures(VkInstance handler);

    std::string name() const override { return "VK_EXT_validation_features"; }
    static std::string str() { return "VK_EXT_validation_features"; }
    void init(VkInstance handler) override;
public:
};//class VkExtValidationFeatures

#endif //VK_EXT_validation_features

#if defined(VK_EXT_headless_surface)

class VkExtHeadlessSurface final : public InstanceExtensionBase { 
public:
    VkExtHeadlessSurface() = default;
    VkExtHeadlessSurface(VkInstance handler);

    std::string name() const override { return "VK_EXT_headless_surface"; }
    static std::string str() { return "VK_EXT_headless_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateHeadlessSurfaceEXT vkCreateHeadlessSurfaceEXT = {};
};//class VkExtHeadlessSurface

#endif //VK_EXT_headless_surface

#if defined(VK_KHR_extension_275)

class VkKhrExtension275 final : public InstanceExtensionBase { 
public:
    VkKhrExtension275() = default;
    VkKhrExtension275(VkInstance handler);

    std::string name() const override { return "VK_KHR_extension_275"; }
    static std::string str() { return "VK_KHR_extension_275"; }
    void init(VkInstance handler) override;
public:
};//class VkKhrExtension275

#endif //VK_KHR_extension_275

#if defined(VK_EXT_acquire_drm_display)

class VkExtAcquireDrmDisplay final : public InstanceExtensionBase { 
public:
    VkExtAcquireDrmDisplay() = default;
    VkExtAcquireDrmDisplay(VkInstance handler);

    std::string name() const override { return "VK_EXT_acquire_drm_display"; }
    static std::string str() { return "VK_EXT_acquire_drm_display"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetDrmDisplayEXT vkGetDrmDisplayEXT = {};
    PFN_vkAcquireDrmDisplayEXT vkAcquireDrmDisplayEXT = {};
};//class VkExtAcquireDrmDisplay

#endif //VK_EXT_acquire_drm_display

#if defined(VK_KHR_display)

class VkKhrDisplay final : public InstanceExtensionBase { 
public:
    VkKhrDisplay() = default;
    VkKhrDisplay(VkInstance handler);

    std::string name() const override { return "VK_KHR_display"; }
    static std::string str() { return "VK_KHR_display"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR = {};
    PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR = {};
    PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR = {};
    PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR = {};
    PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR = {};
    PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR = {};
    PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR = {};
};//class VkKhrDisplay

#endif //VK_KHR_display

#if defined(VK_EXT_directfb_surface)

class VkExtDirectfbSurface final : public InstanceExtensionBase { 
public:
    VkExtDirectfbSurface() = default;
    VkExtDirectfbSurface(VkInstance handler);

    std::string name() const override { return "VK_EXT_directfb_surface"; }
    static std::string str() { return "VK_EXT_directfb_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateDirectFBSurfaceEXT vkCreateDirectFBSurfaceEXT = {};
    PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT vkGetPhysicalDeviceDirectFBPresentationSupportEXT = {};
};//class VkExtDirectfbSurface

#endif //VK_EXT_directfb_surface

#if defined(VK_QNX_screen_surface)

class VkQnxScreenSurface final : public InstanceExtensionBase { 
public:
    VkQnxScreenSurface() = default;
    VkQnxScreenSurface(VkInstance handler);

    std::string name() const override { return "VK_QNX_screen_surface"; }
    static std::string str() { return "VK_QNX_screen_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX vkGetPhysicalDeviceScreenPresentationSupportQNX = {};
    PFN_vkCreateScreenSurfaceQNX vkCreateScreenSurfaceQNX = {};
};//class VkQnxScreenSurface

#endif //VK_QNX_screen_surface

#if defined(VK_EXT_extension_384)

class VkExtExtension384 final : public InstanceExtensionBase { 
public:
    VkExtExtension384() = default;
    VkExtExtension384(VkInstance handler);

    std::string name() const override { return "VK_EXT_extension_384"; }
    static std::string str() { return "VK_EXT_extension_384"; }
    void init(VkInstance handler) override;
public:
};//class VkExtExtension384

#endif //VK_EXT_extension_384

#if defined(VK_MESA_extension_385)

class VkMesaExtension385 final : public InstanceExtensionBase { 
public:
    VkMesaExtension385() = default;
    VkMesaExtension385(VkInstance handler);

    std::string name() const override { return "VK_MESA_extension_385"; }
    static std::string str() { return "VK_MESA_extension_385"; }
    void init(VkInstance handler) override;
public:
};//class VkMesaExtension385

#endif //VK_MESA_extension_385

#if defined(VK_GOOGLE_surfaceless_query)

class VkGoogleSurfacelessQuery final : public InstanceExtensionBase { 
public:
    VkGoogleSurfacelessQuery() = default;
    VkGoogleSurfacelessQuery(VkInstance handler);

    std::string name() const override { return "VK_GOOGLE_surfaceless_query"; }
    static std::string str() { return "VK_GOOGLE_surfaceless_query"; }
    void init(VkInstance handler) override;
public:
};//class VkGoogleSurfacelessQuery

#endif //VK_GOOGLE_surfaceless_query

#if defined(VK_KHR_xlib_surface)

class VkKhrXlibSurface final : public InstanceExtensionBase { 
public:
    VkKhrXlibSurface() = default;
    VkKhrXlibSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_xlib_surface"; }
    static std::string str() { return "VK_KHR_xlib_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR = {};
    PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR = {};
};//class VkKhrXlibSurface

#endif //VK_KHR_xlib_surface

#if defined(VK_GGP_stream_descriptor_surface)

class VkGgpStreamDescriptorSurface final : public InstanceExtensionBase { 
public:
    VkGgpStreamDescriptorSurface() = default;
    VkGgpStreamDescriptorSurface(VkInstance handler);

    std::string name() const override { return "VK_GGP_stream_descriptor_surface"; }
    static std::string str() { return "VK_GGP_stream_descriptor_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateStreamDescriptorSurfaceGGP vkCreateStreamDescriptorSurfaceGGP = {};
};//class VkGgpStreamDescriptorSurface

#endif //VK_GGP_stream_descriptor_surface

#if defined(VK_NV_external_memory_capabilities)

class VkNvExternalMemoryCapabilities final : public InstanceExtensionBase { 
public:
    VkNvExternalMemoryCapabilities() = default;
    VkNvExternalMemoryCapabilities(VkInstance handler);

    std::string name() const override { return "VK_NV_external_memory_capabilities"; }
    static std::string str() { return "VK_NV_external_memory_capabilities"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV = {};
};//class VkNvExternalMemoryCapabilities

#endif //VK_NV_external_memory_capabilities

#if defined(VK_KHR_xcb_surface)

class VkKhrXcbSurface final : public InstanceExtensionBase { 
public:
    VkKhrXcbSurface() = default;
    VkKhrXcbSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_xcb_surface"; }
    static std::string str() { return "VK_KHR_xcb_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR = {};
    PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR = {};
};//class VkKhrXcbSurface

#endif //VK_KHR_xcb_surface

#if defined(VK_KHR_get_physical_device_properties2)

class VkKhrGetPhysicalDeviceProperties2 final : public InstanceExtensionBase { 
public:
    VkKhrGetPhysicalDeviceProperties2() = default;
    VkKhrGetPhysicalDeviceProperties2(VkInstance handler);

    std::string name() const override { return "VK_KHR_get_physical_device_properties2"; }
    static std::string str() { return "VK_KHR_get_physical_device_properties2"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceProperties2KHR vkGetPhysicalDeviceProperties2KHR = {};
    PFN_vkGetPhysicalDeviceFormatProperties2KHR vkGetPhysicalDeviceFormatProperties2KHR = {};
    PFN_vkGetPhysicalDeviceFeatures2KHR vkGetPhysicalDeviceFeatures2KHR = {};
    PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR vkGetPhysicalDeviceSparseImageFormatProperties2KHR = {};
    PFN_vkGetPhysicalDeviceImageFormatProperties2KHR vkGetPhysicalDeviceImageFormatProperties2KHR = {};
    PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR vkGetPhysicalDeviceQueueFamilyProperties2KHR = {};
    PFN_vkGetPhysicalDeviceMemoryProperties2KHR vkGetPhysicalDeviceMemoryProperties2KHR = {};
};//class VkKhrGetPhysicalDeviceProperties2

#endif //VK_KHR_get_physical_device_properties2

#if defined(VK_EXT_validation_flags)

class VkExtValidationFlags final : public InstanceExtensionBase { 
public:
    VkExtValidationFlags() = default;
    VkExtValidationFlags(VkInstance handler);

    std::string name() const override { return "VK_EXT_validation_flags"; }
    static std::string str() { return "VK_EXT_validation_flags"; }
    void init(VkInstance handler) override;
public:
};//class VkExtValidationFlags

#endif //VK_EXT_validation_flags

#if defined(VK_NN_vi_surface)

class VkNnViSurface final : public InstanceExtensionBase { 
public:
    VkNnViSurface() = default;
    VkNnViSurface(VkInstance handler);

    std::string name() const override { return "VK_NN_vi_surface"; }
    static std::string str() { return "VK_NN_vi_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN = {};
};//class VkNnViSurface

#endif //VK_NN_vi_surface

#if defined(VK_KHR_wayland_surface)

class VkKhrWaylandSurface final : public InstanceExtensionBase { 
public:
    VkKhrWaylandSurface() = default;
    VkKhrWaylandSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_wayland_surface"; }
    static std::string str() { return "VK_KHR_wayland_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR = {};
    PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR = {};
};//class VkKhrWaylandSurface

#endif //VK_KHR_wayland_surface

#if defined(VK_KHR_device_group_creation)

class VkKhrDeviceGroupCreation final : public InstanceExtensionBase { 
public:
    VkKhrDeviceGroupCreation() = default;
    VkKhrDeviceGroupCreation(VkInstance handler);

    std::string name() const override { return "VK_KHR_device_group_creation"; }
    static std::string str() { return "VK_KHR_device_group_creation"; }
    void init(VkInstance handler) override;
public:
    PFN_vkEnumeratePhysicalDeviceGroupsKHR vkEnumeratePhysicalDeviceGroupsKHR = {};
};//class VkKhrDeviceGroupCreation

#endif //VK_KHR_device_group_creation

#if defined(VK_KHR_external_memory_capabilities)

class VkKhrExternalMemoryCapabilities final : public InstanceExtensionBase { 
public:
    VkKhrExternalMemoryCapabilities() = default;
    VkKhrExternalMemoryCapabilities(VkInstance handler);

    std::string name() const override { return "VK_KHR_external_memory_capabilities"; }
    static std::string str() { return "VK_KHR_external_memory_capabilities"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR vkGetPhysicalDeviceExternalBufferPropertiesKHR = {};
};//class VkKhrExternalMemoryCapabilities

#endif //VK_KHR_external_memory_capabilities

#if defined(VK_KHR_external_semaphore_capabilities)

class VkKhrExternalSemaphoreCapabilities final : public InstanceExtensionBase { 
public:
    VkKhrExternalSemaphoreCapabilities() = default;
    VkKhrExternalSemaphoreCapabilities(VkInstance handler);

    std::string name() const override { return "VK_KHR_external_semaphore_capabilities"; }
    static std::string str() { return "VK_KHR_external_semaphore_capabilities"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = {};
};//class VkKhrExternalSemaphoreCapabilities

#endif //VK_KHR_external_semaphore_capabilities

#if defined(VK_KHR_mir_surface)

class VkKhrMirSurface final : public InstanceExtensionBase { 
public:
    VkKhrMirSurface() = default;
    VkKhrMirSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_mir_surface"; }
    static std::string str() { return "VK_KHR_mir_surface"; }
    void init(VkInstance handler) override;
public:
};//class VkKhrMirSurface

#endif //VK_KHR_mir_surface

#if defined(VK_EXT_direct_mode_display)

class VkExtDirectModeDisplay final : public InstanceExtensionBase { 
public:
    VkExtDirectModeDisplay() = default;
    VkExtDirectModeDisplay(VkInstance handler);

    std::string name() const override { return "VK_EXT_direct_mode_display"; }
    static std::string str() { return "VK_EXT_direct_mode_display"; }
    void init(VkInstance handler) override;
public:
    PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT = {};
};//class VkExtDirectModeDisplay

#endif //VK_EXT_direct_mode_display

#if defined(VK_KHR_android_surface)

class VkKhrAndroidSurface final : public InstanceExtensionBase { 
public:
    VkKhrAndroidSurface() = default;
    VkKhrAndroidSurface(VkInstance handler);

    std::string name() const override { return "VK_KHR_android_surface"; }
    static std::string str() { return "VK_KHR_android_surface"; }
    void init(VkInstance handler) override;
public:
    PFN_vkCreateAndroidSurfaceKHR vkCreateAndroidSurfaceKHR = {};
};//class VkKhrAndroidSurface

#endif //VK_KHR_android_surface

#if defined(VK_EXT_acquire_xlib_display)

class VkExtAcquireXlibDisplay final : public InstanceExtensionBase { 
public:
    VkExtAcquireXlibDisplay() = default;
    VkExtAcquireXlibDisplay(VkInstance handler);

    std::string name() const override { return "VK_EXT_acquire_xlib_display"; }
    static std::string str() { return "VK_EXT_acquire_xlib_display"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT = {};
    PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT = {};
};//class VkExtAcquireXlibDisplay

#endif //VK_EXT_acquire_xlib_display

#if defined(VK_EXT_display_surface_counter)

class VkExtDisplaySurfaceCounter final : public InstanceExtensionBase { 
public:
    VkExtDisplaySurfaceCounter() = default;
    VkExtDisplaySurfaceCounter(VkInstance handler);

    std::string name() const override { return "VK_EXT_display_surface_counter"; }
    static std::string str() { return "VK_EXT_display_surface_counter"; }
    void init(VkInstance handler) override;
public:
    PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT = {};
};//class VkExtDisplaySurfaceCounter

#endif //VK_EXT_display_surface_counter

std::unique_ptr<InstanceExtensionBase> makeInstanceExtension(const std::string &name, VkInstance handle);


}//namespace HLGK

