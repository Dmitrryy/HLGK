/****************************************************************************************
*
*   Instance.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once



#include <GLFW/glfw3.h>

namespace HLGK::glfw
    {
        class Instance final {
            static size_t g_instanceCounter;

        public:
            Instance();
            Instance(const Instance &) noexcept;
            Instance(Instance &&) noexcept;
            ~Instance();

            Instance &operator=(const Instance &) = default;
            Instance &operator=(Instance &&) = default;
        };
    } // namespace HLGK