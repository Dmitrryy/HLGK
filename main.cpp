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
#include <HLGK/Core/Vulkan/SwapChain.hpp>
#include <HLGK/Core/Vulkan/Image.hpp>
#include <HLGK/Core/Vulkan/ImageView.hpp>
#include <HLGK/Core/Vulkan/Shader.hpp>
#include <HLGK/Core/Vulkan/Pipeline.hpp>
#include <HLGK/Core/Vulkan/RenderPass.hpp>
#include <HLGK/Core/Vulkan/Framebuffer.hpp>
#include <HLGK/Core/Vulkan/CommandPool.hpp>
#include <HLGK/Core/Vulkan/CommandBuffer.hpp>
#include <HLGK/Core/Vulkan/Synchronization.hpp>
#include <HLGK/Core/Vulkan/gen/InstanceExt.hpp>

#include <assert.h>
#include <limits>
#include <algorithm>

int main(int argc, char* argv[]) {

    //-----------------------------------------------
    // create window
    std::vector< std::pair< int, int > > hints = {
            {GLFW_CLIENT_API, GLFW_NO_API},
            {GLFW_RESIZABLE,  GLFW_FALSE}
    };

    HLGK::glfw::Window window(800, 800
            , "HLGK"
            , nullptr, nullptr, hints);
    // end create window
    //-----------------------------------------------
    if (!glfwVulkanSupported())
        throw std::runtime_error("glfw doesn't support Vulkan");

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
    auto* surfaceExt = dynamic_cast<HLGK::VkKhrSurface *>(factory.getExtension(VK_KHR_SURFACE_EXTENSION_NAME));


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
        auto&& surfaceProp = surface.getProperties(d);
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

    ///------------------------------LogicalDevice--------------------------------------
    // check for support
    std::vector< std::string > device_extensions = {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME
    };

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
    HLGK::LogicalDevice logicalDevice(factory, device, deviceFeatures, device_extensions, deviceQueues);
    auto&& queue = logicalDevice.atQueue(0, 0);

    ///--------------------------------SwapChain-----------------------------------------
    auto&& surfaceProp = surface.getProperties(device);
    assert(surfaceProp.surfaceSupport.at(graphicQueue.queueFamilyIndex));
    bool swapChainAdequate = !surfaceProp.formats.empty() && !surfaceProp.presentModes.empty();
    assert(swapChainAdequate);
    assert(std::find(surfaceProp.presentModes.begin(), surfaceProp.presentModes.end(), VK_PRESENT_MODE_FIFO_KHR) != surfaceProp.presentModes.end());

    VkExtent2D SwapExtent = surfaceProp.capabilities.currentExtent;
    if (surfaceProp.capabilities.currentExtent.width == std::numeric_limits<uint32_t>::max()) {
        int width = window.getFrameBufferWidth(), height = window.getFrameBufferHeight();

        VkExtent2D SwapExtent = {
                static_cast<uint32_t>(width),
                static_cast<uint32_t>(height)
        };
        SwapExtent.width = std::clamp(SwapExtent.width, surfaceProp.capabilities.minImageExtent.width, surfaceProp.capabilities.maxImageExtent.width);
        SwapExtent.height = std::clamp(SwapExtent.height, surfaceProp.capabilities.minImageExtent.height, surfaceProp.capabilities.maxImageExtent.height);
    }
    uint32_t imageCount = surfaceProp.capabilities.minImageCount + 1;
    if (surfaceProp.capabilities.maxImageCount > 0 && imageCount > surfaceProp.capabilities.maxImageCount) {
        imageCount = surfaceProp.capabilities.maxImageCount;
    }
    VkSwapchainCreateInfoKHR createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    createInfo.surface = surface.get();
    createInfo.minImageCount = imageCount;
    createInfo.imageFormat = surfaceProp.formats.at(0).format;
    createInfo.imageColorSpace = surfaceProp.formats.at(0).colorSpace;
    createInfo.imageExtent = SwapExtent;
    createInfo.imageArrayLayers = 1;
    createInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    createInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    createInfo.queueFamilyIndexCount = 0; // Optional
    createInfo.pQueueFamilyIndices = nullptr; // Optional
    createInfo.preTransform = surfaceProp.capabilities.currentTransform;
    createInfo.presentMode = VK_PRESENT_MODE_FIFO_KHR;
    createInfo.clipped = VK_TRUE;
    createInfo.oldSwapchain = VK_NULL_HANDLE;
    createInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;

    HLGK::SwapChain swapChain(logicalDevice, createInfo);
    auto&& swapImages = swapChain.getImages();

    std::vector<HLGK::ImageView> swapImageViews;
    swapImageViews.reserve(swapImages.size());
    std::transform(swapImages.begin(), swapImages.end()
                   , std::back_inserter(swapImageViews),
                   [format = surfaceProp.formats.at(0).format](const HLGK::Image &im) {
        return im.createView(VK_IMAGE_VIEW_TYPE_2D
                , format
                , {VK_COMPONENT_SWIZZLE_IDENTITY, VK_COMPONENT_SWIZZLE_IDENTITY
                , VK_COMPONENT_SWIZZLE_IDENTITY, VK_COMPONENT_SWIZZLE_IDENTITY}
                , {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1}, 0);
    });

    ///--------------------------------Pipeline-----------------------------------------

    auto&& vertShaderCode = HLGK::util::readFile("shaders/1.vert.spv");
    auto&& fragShaderCode = HLGK::util::readFile("shaders/1.frag.spv");

    HLGK::Shader vertShader(logicalDevice, vertShaderCode);
    HLGK::Shader fragShader(logicalDevice, fragShaderCode);

    vertShader.addStage({VK_SHADER_STAGE_VERTEX_BIT, "main"});
    fragShader.addStage({VK_SHADER_STAGE_FRAGMENT_BIT, "main"});

    HLGK::GraphicsPipeline::VertexInputState vertexInputInfo;

    HLGK::GraphicsPipeline::InputAssemblyState inputAssembly;
    inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    inputAssembly.primitiveRestartEnable = VK_FALSE;

    VkViewport viewport{};
    viewport.x = 0.0f;
    viewport.y = 0.0f;
    viewport.width = (float) SwapExtent.width;
    viewport.height = (float) SwapExtent.height;
    viewport.minDepth = 0.0f;
    viewport.maxDepth = 1.0f;

    VkRect2D scissor{};
    scissor.offset = {0, 0};
    scissor.extent = SwapExtent;

    HLGK::GraphicsPipeline::ViewportState viewportState;
    viewportState.viewportCount = 1;
    viewportState.pViewports = &viewport;
    viewportState.scissorCount = 1;
    viewportState.pScissors = &scissor;

    HLGK::GraphicsPipeline::RasterizationState rasterizer;
    rasterizer.depthClampEnable = VK_FALSE;
    rasterizer.rasterizerDiscardEnable = VK_FALSE;
    rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizer.lineWidth = 1.0f;
    rasterizer.cullMode = VK_CULL_MODE_BACK_BIT;
    rasterizer.frontFace = VK_FRONT_FACE_CLOCKWISE;
    rasterizer.depthBiasEnable = VK_FALSE;

    HLGK::GraphicsPipeline::MultisampleState multisampling;
    multisampling.sampleShadingEnable = VK_FALSE;
    multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    multisampling.minSampleShading = 1.0f;
    multisampling.alphaToCoverageEnable = VK_FALSE;
    multisampling.alphaToOneEnable = VK_FALSE;

    VkPipelineColorBlendAttachmentState colorBlendAttachment{};
    colorBlendAttachment.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    colorBlendAttachment.blendEnable = VK_FALSE;

    HLGK::GraphicsPipeline::ColorBlendState colorBlending;
    colorBlending.logicOpEnable = VK_FALSE;
    colorBlending.logicOp = VK_LOGIC_OP_COPY;
    colorBlending.attachmentCount = 1;
    colorBlending.pAttachments = &colorBlendAttachment;

    VkDynamicState dynamicStates[] = {
            VK_DYNAMIC_STATE_VIEWPORT,
            VK_DYNAMIC_STATE_LINE_WIDTH
    };
    HLGK::GraphicsPipeline::DynamicState dynamicState;
    dynamicState.dynamicStateCount = 2;
    dynamicState.pDynamicStates = dynamicStates;

    HLGK::PipelineLayout pipelineLayout(logicalDevice);

    //renderpass
    VkAttachmentDescription colorAttachment{};
    colorAttachment.format = surfaceProp.formats.at(0).format;
    colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
    colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

    VkAttachmentReference colorAttachmentRef{};
    colorAttachmentRef.attachment = 0;
    colorAttachmentRef.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorAttachmentRef;

    VkSubpassDependency dependency{};
    dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass = 0;
    dependency.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.srcAccessMask = 0;
    dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

    HLGK::RenderPass renderPass(logicalDevice, {colorAttachment}, {subpass}, {dependency});

    HLGK::GraphicsPipelineCreateInfo pipelineInfo;
    pipelineInfo.pVertexInputState = &vertexInputInfo.getBase();
    pipelineInfo.pInputAssemblyState = &inputAssembly.getBase();
    pipelineInfo.pViewportState = &viewportState.getBase();
    pipelineInfo.pRasterizationState = &rasterizer.getBase();
    pipelineInfo.pMultisampleState = &multisampling.getBase();
    pipelineInfo.pDepthStencilState = nullptr; // Optional
    pipelineInfo.pColorBlendState = &colorBlending.getBase();
    //pipelineInfo.pDynamicState = &dynamicState.getBase();
    pipelineInfo.subpass = 0;

    HLGK::GraphicsPipeline pipeline(logicalDevice, pipelineInfo
                                    , pipelineLayout, renderPass,
                                    {&vertShader, &fragShader});
    ///------------------------------framebuffer-------------------------------
    std::vector< HLGK::Framebuffer > frameBuffers;
    frameBuffers.reserve(swapImageViews.size());
    std::transform(swapImageViews.begin(), swapImageViews.end()
            , std::back_inserter(frameBuffers),
                   [&renderPass, &logicalDevice, &SwapExtent](HLGK::ImageView &im) {
                       return HLGK::Framebuffer(logicalDevice, renderPass, {&im}, 1, SwapExtent);
                   });
    ///------------------------------commandPool-------------------------------
    HLGK::CommandPool commandPool(logicalDevice, VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT, queue.familyIndex);
    auto&& cmdBuffers = commandPool.createSeveralBuffers(frameBuffers.size(), VK_COMMAND_BUFFER_LEVEL_PRIMARY);
    ///------------------------------drawing-------------------------------
    {
        std::vector< HLGK::Semaphore > imageAvailableSemaphore(frameBuffers.size());
        std::generate(imageAvailableSemaphore.begin(), imageAvailableSemaphore.end(), [&logicalDevice]() {
            return HLGK::Semaphore(logicalDevice);
        });

        std::vector< HLGK::Semaphore > renderFinishedSemaphore(frameBuffers.size());
        std::generate(renderFinishedSemaphore.begin(), renderFinishedSemaphore.end(), [&logicalDevice]() {
            return HLGK::Semaphore(logicalDevice);
        });

        std::vector< HLGK::Fence > inFlightFence(frameBuffers.size());
        std::generate(inFlightFence.begin(), inFlightFence.end(), [&logicalDevice]() {
             return HLGK::Fence(logicalDevice, VK_FENCE_CREATE_SIGNALED_BIT);
        });

        uint32_t currentFrame = 0;
        uint32_t MAX_FRAMES_IN_FLIGHT = 2;
        while (!window.shouldClose()) {
            glfwPollEvents();

            inFlightFence.at(currentFrame).wait();
            inFlightFence.at(currentFrame).reset();

            auto imageIndex = swapChain.acquireNextImage(imageAvailableSemaphore.at(currentFrame), {});

            VkCommandBufferBeginInfo beginInfo{};
            beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
            beginInfo.flags = 0; // Optional
            beginInfo.pInheritanceInfo = nullptr; // Optional

            VK_CHECK_RESULT(cmdBuffers.at(currentFrame).callProcAddrName<PFN_vkResetCommandBuffer>("vkResetCommandBuffer", 0));
            VK_CHECK_RESULT(cmdBuffers.at(currentFrame).callProcAddrName<PFN_vkBeginCommandBuffer>("vkBeginCommandBuffer", &beginInfo));
            cmdBuffers.at(currentFrame).beginRenderPass(renderPass, frameBuffers.at(imageIndex), {{0, 0}, SwapExtent}, {{{0.0f, 0.0f, 0.0f, 1.0f}}}, VK_SUBPASS_CONTENTS_INLINE);
            cmdBuffers.at(currentFrame).bindPipeline(pipeline, VK_PIPELINE_BIND_POINT_GRAPHICS);
            cmdBuffers.at(currentFrame).draw(3, 1, 0, 0);
            cmdBuffers.at(currentFrame).endRenderPass();
            VK_CHECK_RESULT(cmdBuffers.at(currentFrame).callProcAddrName<PFN_vkEndCommandBuffer>("vkEndCommandBuffer"));

            queue.submit({cmdBuffers.at(currentFrame)}, {&imageAvailableSemaphore.at(currentFrame)}, {VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT},
                         {&renderFinishedSemaphore.at(currentFrame)}, inFlightFence.at(currentFrame));

            queue.present({{&swapChain, imageIndex}}, {&renderFinishedSemaphore.at(currentFrame)});

            currentFrame = (currentFrame + 1) % MAX_FRAMES_IN_FLIGHT;
        }

        logicalDevice.waitIdle();
    }
    return 0;
}
