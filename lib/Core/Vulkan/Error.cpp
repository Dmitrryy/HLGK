//
// Created by danil on 23.02.2022.
//

#include <vulkan/vulkan.h>
#include <string>

namespace HLGK {

    std::string vkErrorStr(VkResult cod) {
        std::string res = "UNKNOWN";

#define CASE_TO_STR(name)   \
        case name:          \
            res = #name;    \
            break;
        switch (cod)
        {
            CASE_TO_STR(VK_SUCCESS)
            CASE_TO_STR(VK_NOT_READY)
            CASE_TO_STR(VK_TIMEOUT)
            CASE_TO_STR(VK_EVENT_SET)
            CASE_TO_STR(VK_EVENT_RESET)
            CASE_TO_STR(VK_INCOMPLETE)
            CASE_TO_STR(VK_ERROR_OUT_OF_HOST_MEMORY)
            CASE_TO_STR(VK_ERROR_OUT_OF_DEVICE_MEMORY)
            CASE_TO_STR(VK_ERROR_INITIALIZATION_FAILED)
            CASE_TO_STR(VK_ERROR_DEVICE_LOST)
            CASE_TO_STR(VK_ERROR_MEMORY_MAP_FAILED)
            CASE_TO_STR(VK_ERROR_LAYER_NOT_PRESENT)
            CASE_TO_STR(VK_ERROR_EXTENSION_NOT_PRESENT)
            CASE_TO_STR(VK_ERROR_FEATURE_NOT_PRESENT)
            CASE_TO_STR(VK_ERROR_INCOMPATIBLE_DRIVER)
            CASE_TO_STR(VK_ERROR_TOO_MANY_OBJECTS)
            CASE_TO_STR(VK_ERROR_FORMAT_NOT_SUPPORTED)
            CASE_TO_STR(VK_ERROR_FRAGMENTED_POOL)
            CASE_TO_STR(VK_ERROR_UNKNOWN)
            CASE_TO_STR(VK_ERROR_OUT_OF_POOL_MEMORY)
            CASE_TO_STR(VK_ERROR_INVALID_EXTERNAL_HANDLE)
            CASE_TO_STR(VK_ERROR_FRAGMENTATION)
            CASE_TO_STR(VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS)
            CASE_TO_STR(VK_ERROR_SURFACE_LOST_KHR)
            CASE_TO_STR(VK_ERROR_NATIVE_WINDOW_IN_USE_KHR)
            CASE_TO_STR(VK_SUBOPTIMAL_KHR)
            CASE_TO_STR(VK_ERROR_OUT_OF_DATE_KHR)
            CASE_TO_STR(VK_ERROR_INCOMPATIBLE_DISPLAY_KHR)
            CASE_TO_STR(VK_ERROR_VALIDATION_FAILED_EXT)
            CASE_TO_STR(VK_ERROR_INVALID_SHADER_NV)
            CASE_TO_STR(VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT)
            CASE_TO_STR(VK_ERROR_NOT_PERMITTED_EXT)
            CASE_TO_STR(VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT)
            //CASE_TO_STR(VK_RESULT_RANGE_SIZE)
            CASE_TO_STR(VK_RESULT_MAX_ENUM)
        }
#undef CASE_TO_STR
        return res;
    }

}