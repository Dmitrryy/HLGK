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

cmake_minimum_required(VERSION 3.20)

project(HLGK_CORE)

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME}
        Instance.cpp
        PhysicalDevice.cpp
        )
target_include_directories(${PROJECT_NAME} PUBLIC ../../../include)
target_link_libraries(${PROJECT_NAME}
        Vulkan::Vulkan
        glfw
        ${X11_LIBRARIES}
        glog::glog
        )