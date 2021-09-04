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

project(HLGK_WINDOW_GLFW)

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME} Instance.cpp Window.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ../../../include)
target_link_libraries(${PROJECT_NAME}
        glfw
        )