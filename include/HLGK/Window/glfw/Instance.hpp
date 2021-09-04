#pragma once
//
// Created by dadro on 03.09.2021.
//


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