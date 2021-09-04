#pragma once
//
// Created by dadro on 03.09.2021.
//

#include <HLGK/Window/IWindow.hpp>
#include "Instance.hpp"
#include <string>
#include <vector>

#define GLFW_EXPOSE_NATIVE_WIN32
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

#if defined(WIN32)
            virtual HWND getHWND() const { return glfwGetWin32Window(m_pWindow); };
#endif
        };
    }