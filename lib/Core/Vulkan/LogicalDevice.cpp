//
// Created by danil on 23.02.2022.
//

#include <HLGK/Core/Vulkan/Instance.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Queue.hpp>
#include <utility>

#include <HLGK/Core/Vulkan/gen/DeviceExt.hpp>

#include <HLGK/Core/Vulkan/Allocators/vmaAllocator.hpp>

namespace HLGK {

    DeviceCore::~DeviceCore() {
        callDeviceProcAddr(*this, vkDestroyDevice, nullptr);
    }

    DeviceCore::DeviceCore(const Instance &instance, const PhysicalDevice &device,
                           const VkPhysicalDeviceFeatures &features, std::vector<std::string> extensions,
                           const std::vector<VkDeviceQueueCreateInfo> &queues) {
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

    }


    LogicalDevice::LogicalDevice(const Instance &instance, const PhysicalDevice &device
            , const VkPhysicalDeviceFeatures &features_
            , const std::vector< std::string > &extensions_
            , const std::vector< VkDeviceQueueCreateInfo > &queues)
            : DeviceCore(instance, device, features_, extensions_, queues)
            , m_instance(&instance)
            , physicalDevice(device)
            , features(features_) {

        for(auto&& q : queues) {
            for(uint32_t i = 0; i < q.queueCount; ++i) {
                m_queues.try_emplace(std::pair{q.queueFamilyIndex, i}, Queue(*this, q.queueFamilyIndex, i, q.pQueuePriorities[i]));
            }
        }

        std::transform(extensions_.begin(), extensions_.end()
                       , std::inserter(m_extensions, m_extensions.end())
                       , [handler = m_device](const std::string &name) {
            return std::pair(name, makeDeviceExtension(name, handler));
        });
    }


    Queue LogicalDevice::atQueue(uint32_t family, uint32_t index) const {
        return m_queues.at({family, index});
    }

    void LogicalDevice::waitIdle() const {
        VK_CHECK_RESULT(callProcAddrName<PFN_vkDeviceWaitIdle>("vkDeviceWaitIdle"));
    }

    std::unique_ptr<IAllocator> LogicalDevice::createAllocator() {
        return std::make_unique<vmaAllocator>(m_instance->get(), physicalDevice.get(), m_device);
    }

}// namespace HLGK