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


project(hlgk)

set(CMAKE_CXX_STANDARD 20)
# Build mode dependent actions
if( NOT CMAKE_BUILD_TYPE )
    set(CMAKE_BUILD_TYPE Release)
endif()

set(GLFW_USE_STATIC_LIBS 1)
include(cmake/FindGLFW.cmake)

add_subdirectory(lib)

# sample
find_package(glm CONFIG REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME}
        HLGK_CORE
        HLGK_WINDOW_GLFW
        glm::glm
        ${GLFW_LIBRARIES}
        )
target_link_libraries(${PROJECT_NAME}
        ${GLFW_LIBRARIES}
        )

#
## bs_pre_vulkan2
##=======================================================================================
## An additional target is created to execute preparatory commands before building
## the main project. In this case, this is copying the directories with tests and
## resources to the folder with the binary. And compilation of shaders.
set(FB_TARGET bs_pre_vulkan)
add_custom_target(${FB_TARGET}
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/shaders ${CMAKE_CURRENT_BINARY_DIR}/shaders

        COMMAND ${Vulkan_GLSLC_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/shaders/1.vert -o ${CMAKE_CURRENT_BINARY_DIR}/shaders/1.vert.spv
        COMMAND ${Vulkan_GLSLC_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/shaders/1.frag -o ${CMAKE_CURRENT_BINARY_DIR}/shaders/1.frag.spv
        )
##=======================================================================================
##=======================================================================================
#
add_dependencies(${PROJECT_NAME} ${FB_TARGET})