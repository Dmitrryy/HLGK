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


# adding third party libraries
set(glfw3_DIR C:\\Libs\\glfw-3.3.2\\)
set(glm_DIR C:\\Libs\\glm\\)
set(glog_DIR C:\\Libs\\glog\\)
set(gflags_DIR C:\\Libs\\gflags\\)

find_package(Vulkan REQUIRED)
find_package(X11 REQUIRED)

if(NOT glfw3_DIR)
    find_package(glfw3 REQUIRED)
else()
    add_subdirectory(${glfw3_DIR} ${CMAKE_CURRENT_BINARY_DIR}/glfw3Build)
endif()

if(NOT glm_DIR)
    find_package(glm REQUIRED)
else()
    add_subdirectory(${glm_DIR} ${CMAKE_CURRENT_BINARY_DIR}/glmBuild)
endif()

if(NOT glog_DIR)
    find_package(glog REQUIRED)
else()
    add_subdirectory(${glog_DIR} ${CMAKE_CURRENT_BINARY_DIR}/glogBuild)
endif()

if(NOT gflags_DIR)
    find_package(gflags REQUIRED)
else()
    add_subdirectory(${gflags_DIR} ${CMAKE_CURRENT_BINARY_DIR}/gflagsBuild)
endif()

add_subdirectory(lib)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME}
        HLGK_CORE
        HLGK_WINDOW_GLFW
        glog::glog
        gflags::gflags
        )