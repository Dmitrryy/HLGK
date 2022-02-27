/****************************************************************************************
*
*   main.cpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#include <iostream>

#include <HLGK/Core/Vulkan/Instance.hpp>
#include <HLGK/Core/Vulkan/Error.hpp>
#include <HLGK/Window/glfw/Window.hpp>
#include <HLGK/Core/Vulkan/Queue.hpp>

int main(int argc, char* argv[]) {

    //-----------------------------------------------
    // create window
    std::vector< std::pair< int, int > > hints = {
            {GLFW_CLIENT_API, GLFW_NO_API},
            {GLFW_RESIZABLE,  GLFW_FALSE}
    };

    HLGK::glfw::Window window(800, 800
            , "HLGK"
            , nullptr, nullptr
            , hints);
    // end create window
    //-----------------------------------------------
    if (!glfwVulkanSupported()) {
        throw std::runtime_error("glfw doesn't support Vulkan");
    }

    VkApplicationInfo info;
    info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    info.pNext = nullptr;
    info.pApplicationName = nullptr;
    info.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    info.pEngineName = "No Engine";
    info.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    info.apiVersion = VK_API_VERSION_1_2;

    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
    std::vector<std::string> extensions(glfwExtensions, glfwExtensions + glfwExtensionCount);

    std::vector< std::string > validationLayers = {
            "VK_LAYER_KHRONOS_validation"
    };
    HLGK::Instance factory(info, extensions, validationLayers);

    // FIXME: may be lek of instance
    auto&& surfaceCreator = [w = window.get()](VkInstance instance) {
        VkSurfaceKHR res = {};
        VK_CHECK_RESULT(glfwCreateWindowSurface(instance, w, nullptr, &res));
        return res;
    };
    auto&& surface = factory.createSurface(surfaceCreator);

    auto&& devices = factory.getPhysicalDevices();

    size_t i = 0;
    for (const auto& d : devices) {
        auto&& prop = d.getProperties();
        auto&& surfaceProp = d.getSurfaceProperties(surface);
        std::cout << "[" << i++ << "] " << std::to_string(prop.deviceProperties.deviceType) << std::endl;
        std::cout << "Name: " << prop.deviceProperties.deviceName << std::endl;
        std::cout << "ID: " << prop.deviceProperties.deviceID << std::endl;
        std::cout << "API version: " << VK_VERSION_MAJOR(prop.deviceProperties.apiVersion) << '.'
                                        << VK_VERSION_MINOR(prop.deviceProperties.apiVersion) << '.'
                                        << VK_VERSION_PATCH(prop.deviceProperties.apiVersion) << std::endl;
        std::cout << "Driver version: " << prop.deviceProperties.driverVersion << std::endl << std::endl;
        std::cout << "Queue props:" << std::endl;
        unsigned k = 0;
        for(auto&& q : prop.queueFamilyProperties) {
            auto flags = q.queueFlags;
            printf("[Family %u]: Queue count %u, GFX %s, Compute %s, Transfer %s, Sparse binding %s\n"
                   , k++, q.queueCount, (flags & VK_QUEUE_GRAPHICS_BIT) ? "Yes" : "No"
                    , (flags & VK_QUEUE_COMPUTE_BIT) ? "Yes" : "No", (flags & VK_QUEUE_TRANSFER_BIT) ? "Yes" : "No"
                    , (flags & VK_QUEUE_SPARSE_BINDING_BIT) ? "Yes" : "No");
        }
#if 0
        std::cout << "Extensions: " << std::endl;
        for(const auto& ext : prop.extensionProperties) {
            std::cout << ext.extensionName << ":" << ext.specVersion << std::endl;
        }
        std::cout << "Layers: " << std::endl;
        for(const auto& lay : prop.layerProperties) {
            std::cout << lay.layerName << " - " << lay.description << std::endl;
        }
#endif
        std::cout << "==--------------------------------------==" << std::endl;
    }

    //TODO chose needed device
    HLGK::PhysicalDevice device = devices.at(0);

    std::vector< std::string > device_extensions = {};
    VkPhysicalDeviceFeatures deviceFeatures = {};
    //TODO chose needed queues
    VkDeviceQueueCreateInfo graphicQueue = {};
    graphicQueue.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    graphicQueue.queueFamilyIndex = 0;
    graphicQueue.queueCount = 1;
    float priorities = 1.f;
    graphicQueue.pQueuePriorities = &priorities;


    std::vector<VkDeviceQueueCreateInfo> deviceQueues = {
            graphicQueue
    };


    HLGK::LogicalDevice logicalDevice(factory, device
                                      , deviceFeatures
                                      , device_extensions
                                      , deviceQueues);

    auto&& queue = logicalDevice.atQueue(0, 0);

    return 0;
}
