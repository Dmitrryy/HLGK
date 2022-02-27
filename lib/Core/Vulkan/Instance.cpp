/****************************************************************************************
*
*   Instance.cpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Core/Vulkan/Instance.hpp>
#include <algorithm>

namespace HLGK
{

    Instance::Instance(const VkApplicationInfo &appInfo
                     , const std::vector< std::string > &extensions /*= {}*/
                     , const std::vector< std::string > &layers /*= {}*/
                     , const VkDebugUtilsMessengerCreateInfoEXT &DUMCI /*= {}*/)
    {
        std::vector< const char * > extC, layersC;
        std::transform(extensions.begin(), extensions.end()
                       , std::back_inserter(extC)
                       , [](const auto& ext) { return ext.c_str(); });
        std::transform(layers.begin(), layers.end()
                , std::back_inserter(layersC)
                , [](const auto& lay) { return lay.c_str(); });

        VkInstanceCreateInfo instInfo = {};
        instInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        instInfo.pNext = nullptr;
        instInfo.pApplicationInfo = &appInfo;
        instInfo.enabledExtensionCount = extC.size();
        instInfo.ppEnabledExtensionNames = extC.data();
        instInfo.enabledLayerCount = layersC.size();
        instInfo.ppEnabledLayerNames = layersC.data();
        if (DUMCI.pfnUserCallback) {
            instInfo.pNext = &DUMCI;
        }

        VK_CHECK_RESULT(vkCreateInstance(&instInfo, nullptr, &m_instance));
    }

    std::vector< PhysicalDevice >
    Instance::getPhysicalDevices() const {
        uint32_t physical_device_count = 0;
        VK_CHECK_RESULT(vkEnumeratePhysicalDevices(m_instance, &physical_device_count, nullptr));
        std::vector<VkPhysicalDevice> devicesVk(physical_device_count);
        VK_CHECK_RESULT(vkEnumeratePhysicalDevices(m_instance, &physical_device_count, devicesVk.data()));

        std::vector< PhysicalDevice > result;
        result.reserve(physical_device_count);
        std::transform(devicesVk.begin(), devicesVk.end(), std::back_inserter(result),
                       [inst = this](const VkPhysicalDevice &D) {
            return PhysicalDevice(D, *inst);
        });

        return result;
    }

    VkSurfaceKHR Instance::createSurface(std::function<VkSurfaceKHR (VkInstance)> surfaceCreator) const {
        return surfaceCreator(m_instance);
    }

    LogicalDevice Instance::createLogicalDevice(const PhysicalDevice &PD, VkDeviceCreateInfo &info) const {

    }
} // namespace HLGK