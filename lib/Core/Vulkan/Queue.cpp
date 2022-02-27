//
// Created by dadro on 28.02.2022.
//

#include <HLGK/Core/Vulkan/Queue.hpp>
#include <HLGK/Core/Vulkan/LogicalDevice.hpp>

#include <stdexcept>

namespace HLGK {

    Queue::Queue(const LogicalDevice &device, uint32_t familyIndex_, uint32_t queueIndex_, float priority_)
            : m_rDevice(device)
            , familyIndex(familyIndex_)
            , queueIndex(queueIndex_)
            , priority(priority_)
            , flags(device.physicalDevice.getProperties().queueFamilyProperties.at(familyIndex).queueFlags){
        callDeviceProcAddr(device, vkGetDeviceQueue, familyIndex, queueIndex, &m_queue);
        if (!m_queue)
            throw std::runtime_error("Invalid queue");
    }

}// namespace HLGK