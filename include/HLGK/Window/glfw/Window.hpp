/****************************************************************************************
*
*   Window.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#define GLFW_INCLUDE_VULKAN
#include <HLGK/Window/IWindow.hpp>
#include "Instance.hpp"
#include <string>
#include <vector>

#include <GLFW/glfw3native.h>

namespace HLGK::glfw
    {
        class Window : public IWindow {
            GLFWwindow *m_pWindow;
            Instance m_glfwInstance;

        public:

            Window(int width, int height
                    , const std::string& title
                    , GLFWmonitor *monitor
                    , GLFWwindow *share
                    , const std::vector< std::pair< int, int > >& hints);

            Window           (const Window&) = delete; //not supported
            Window& operator=(const Window&) = delete; //not supported

            Window           (Window&&)      = default;
            Window& operator=(Window&&)      = default;

            ~Window();

        public:

            GLFWwindow* get() const noexcept { return m_pWindow; }

            void setUserPointer(void* pointer) const;

            void setKeyCallback(GLFWkeyfun func) const;

            void setInputMode(int mode, int value) const;


            int getHeight() const;
            int getWidth() const;


            bool shouldClose() const;

            void setCursorPosition(double xPos, double yPos) const;
            double getCursorXPos() const;
            double getCursorYPos() const;

            int getKey(int key) const;
        };
    }
