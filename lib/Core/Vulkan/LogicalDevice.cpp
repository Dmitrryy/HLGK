//
// Created by danil on 23.02.2022.
//

#include <HLGK/Core/Vulkan/Instance.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Queue.hpp>
#include <utility>

namespace HLGK {

    LogicalDevice::LogicalDevice(const Instance &instance, const PhysicalDevice &device
            , const VkPhysicalDeviceFeatures &features_
            , std::vector< std::string > extensions_
            , const std::vector< VkDeviceQueueCreateInfo > &queues)
            : physicalDevice(device)
            , features(features_)
            , extensions(std::move(extensions_)) {
        std::vector< const char * > extC;
        extC.reserve(extensions.size());
        std::transform(extensions.begin(), extensions.end()
                , std::back_inserter(extC)
                , [](const auto& ext) { return ext.c_str(); });

        // TODO flags
        VkDeviceCreateInfo createInfo {
                .sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
                .queueCreateInfoCount = static_cast<uint32_t>(queues.size()),
                .pQueueCreateInfos = queues.data(),
                .enabledExtensionCount = static_cast<uint32_t>(extC.size()),
                .ppEnabledExtensionNames = extC.data(),
                .pEnabledFeatures = &features
        };
        VK_CHECK_RESULT(callInstanceProcAddr(instance, vkCreateDevice, device.get(), &createInfo, nullptr, &m_device));

        for(auto&& q : queues) {
            for(uint32_t i = 0; i < q.queueCount; ++i) {
                m_queues.try_emplace(std::pair{q.queueFamilyIndex, i}, Queue(*this, q.queueFamilyIndex, i, q.pQueuePriorities[i]));
            }
        }
    }

    LogicalDevice::~LogicalDevice() {
        callDeviceProcAddr(*this, vkDestroyDevice, nullptr);
    }

    Queue LogicalDevice::atQueue(uint32_t family, uint32_t index) const {
        return m_queues.at({family, index});
    }

}// namespace HLGK