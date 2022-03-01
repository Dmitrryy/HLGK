//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Image.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>

#include <algorithm>

namespace HLGK {

    SwapChain::SwapChain(const LogicalDevice &device
                , const VkSwapchainCreateInfoKHR &createInfo)
                : m_device(device)
                , m_createInfo(createInfo) {
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkCreateSwapchainKHR, &createInfo, nullptr, &m_swapChain));

        uint32_t count = 0;
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, nullptr));
        std::vector<VkImage> swapChainImagesTmp(count);
        m_swapChainImages.reserve(count);
        VK_CHECK_RESULT(callDeviceProcAddr(m_device, vkGetSwapchainImagesKHR, m_swapChain, &count, swapChainImagesTmp.data()));

        std::transform(swapChainImagesTmp.begin(), swapChainImagesTmp.end()
                        , std::back_inserter(m_swapChainImages)
                        , [this](VkImage im) {
            return Image(this->m_device, im, false);
        });
    }

    SwapChain::~SwapChain() {
        callDeviceProcAddr(m_device, vkDestroySwapchainKHR, m_swapChain, nullptr);
    }

}// namespace HLGK