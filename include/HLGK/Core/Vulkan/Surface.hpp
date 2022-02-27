//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <vulkan/vulkan.h>


namespace HLGK {

    class Instance;

    class Surface final {
        VkSurfaceKHR m_vkSurface = {};
        const Instance &m_instance;

    public:
        Surface           (const Surface &) = delete;
        Surface& operator=(const Surface &) = delete;
        Surface           (Surface &&)      = delete;
        Surface& operator=(Surface &&)      = delete;

        ~Surface();

    protected:
        friend Instance;

        Surface(VkSurfaceKHR surface, const Instance &instance)
            : m_vkSurface(surface)
            , m_instance(instance) {}

    public:
        VkSurfaceKHR get() const { return m_vkSurface; }
    };

}// namespace HLGK