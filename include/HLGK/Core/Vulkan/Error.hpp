//
// Created by danil on 22.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>
#include <string>
#include <stdexcept>


namespace HLGK {

    std::string vkErrorStr(VkResult cod);

#define VK_CHECK_RESULT(exp) {                                          \
        VkResult vk_check_res = (exp);                                  \
        if (vk_check_res != VK_SUCCESS)                                 \
            throw std::runtime_error(HLGK::vkErrorStr(vk_check_res));         \
    }
}// namespace HLGK
