#[[
/****************************************************************************************
*
*   CmakeLists.txt
*
*   Created by dmitry
*   01.09.2021
*
***/
]]

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)

project(HLGK_CORE)

find_package(Vulkan REQUIRED)

add_library(${PROJECT_NAME}
        Instance.cpp
        PhysicalDevice.cpp
        LogicalDevice.cpp
        Error.cpp
        Surface.cpp
        Queue.cpp
        SwapChain.cpp
        ImageView.cpp
        Image.cpp Shader.cpp Pipeline.cpp RenderPass.cpp Framebuffer.cpp CommandPool.cpp CommandBuffer.cpp Synchronization.cpp

        gen/extensions.cpp)
target_include_directories(${PROJECT_NAME}
        PUBLIC ../../../include
        PUBLIC Vulkan::Headers)
target_link_libraries(${PROJECT_NAME}
        Vulkan::Vulkan
#        glfw
#        ${X11_LIBRARIES}
        )