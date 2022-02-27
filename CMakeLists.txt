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

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME}
        HLGK_CORE
        HLGK_WINDOW_GLFW
        )
target_link_libraries(${PROJECT_NAME}
        ${GLFW_LIBRARIES}
        )