//
// Created by dadro on 03.09.2021.
//

#include <HLGK/Window/glfw/Instance.hpp>
#include <system_error>


namespace HLGK::glfw
    {

        size_t Instance::g_instanceCounter = 0;


        Instance::Instance()
        {
            // according to the documentation, a repeated call
            // of the function immediately returns success.
            int res = glfwInit();
            if (res != GLFW_TRUE) {
                throw std::runtime_error("failed glfwInit!");
            }
            g_instanceCounter++;
        }


        Instance::Instance(const Instance &) noexcept
        {
            g_instanceCounter++;
        }

        Instance::Instance(Instance &&) noexcept
        {
            g_instanceCounter++;
        }



        Instance::~Instance()
        {
            g_instanceCounter--;
            if (g_instanceCounter == 0) {
                glfwTerminate();
            }
        }


    } // namespace HLGK