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
project(HLGK_LIB)

set(CMAKE_CXX_STANDARD 20)



add_subdirectory(Core/Vulkan)
add_subdirectory(Window)