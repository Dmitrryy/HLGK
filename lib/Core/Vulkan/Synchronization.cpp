//
// Created by dadro on 04.03.2022.
//

#include <HLGK/Core/Vulkan/Synchronization.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>

#include <cassert>
#include <algorithm>


namespace HLGK {

    Semaphore::Semaphore(const LogicalDevice &device, VkSemaphoreCreateFlags flags /*= 0*/)
            : m_device(&device) {
        VkSemaphoreCreateInfo semaphoreInfo{};
        semaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        semaphoreInfo.flags = flags;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateSemaphore, &semaphoreInfo, nullptr, &m_semaphore));
    }

    Semaphore::Semaphore(Semaphore &&that) noexcept {
        *this = std::move(that);
    }
    Semaphore &Semaphore::operator=(Semaphore &&that) noexcept {
        std::swap(m_device, that.m_device);
        std::swap(m_semaphore, that.m_semaphore);
        return *this;
    }

    Semaphore::~Semaphore() {
        if (m_device) {
            callDeviceProcAddr(*m_device, vkDestroySemaphore, m_semaphore, nullptr);
        }
    }

    ///=---------------------------------------------Fence----------------------------------------------
    Fence::Fence(const LogicalDevice &device, VkFenceCreateFlags flags /*= 0*/)
        : m_device(&device) {
        VkFenceCreateInfo fenceInfo{};
        fenceInfo.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
        fenceInfo.flags = flags;

        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkCreateFence, &fenceInfo, nullptr, &m_fence));
    }

    Fence::Fence(Fence &&that) noexcept {
        *this = std::move(that);
    }
    Fence &Fence::operator=(Fence &&that) noexcept {
        std::swap(m_device, that.m_device);
        std::swap(m_fence, that.m_fence);
        return *this;
    }

    Fence::~Fence() {
        if(m_device) {
            callDeviceProcAddr(*m_device, vkDestroyFence, m_fence, nullptr);
        }
    }

    void Fence::wait(uint64_t timeout /*= UINT64_MAX*/) const {
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkWaitForFences, 1, &m_fence, VK_TRUE, timeout));
    }

    void Fence::reset() const {
        VK_CHECK_RESULT(callDeviceProcAddr(*m_device, vkResetFences, 1, &m_fence));
    }


    /*static*/ void Fence::wait(const std::vector<Fence> &fences, VkBool32 waitAll, uint64_t timeout) {
        if(fences.empty())
            return ;

        std::vector< VkFence > vkFences;
        vkFences.reserve(fences.size());
        std::transform(fences.begin(), fences.end(), std::back_inserter(vkFences)
                       , [](const Fence &f) {
            return f.m_fence;
        });
        VK_CHECK_RESULT(callDeviceProcAddr(*fences.at(0).m_device, vkWaitForFences, vkFences.size(), vkFences.data(), VK_TRUE, timeout));
    }

    /*static*/ void Fence::reset(const std::vector<Fence> &fences) {
        if(fences.empty())
            return ;

        std::vector< VkFence > vkFences;
        vkFences.reserve(fences.size());
        std::transform(fences.begin(), fences.end(), std::back_inserter(vkFences)
                , [](const Fence &f) {
                    return f.m_fence;
                });
        VK_CHECK_RESULT(callDeviceProcAddr(*fences.at(0).m_device, vkResetFences, vkFences.size(), vkFences.data()));
    }

}//namespace HLGK