//
// Created by dadro on 27.02.2022.
//
#pragma once

#include <HLGK/Core/Vulkan/gen/InstanceExt.hpp>

#include <vulkan/vulkan.h>
#include <vector>

namespace HLGK {

    class Instance;
    class PhysicalDevice;

    class Surface final {
        VkSurfaceKHR m_vkSurface = {};
        VkKhrSurface *m_extension = {};
        const Instance &m_instance;

    public:
        Surface           (const Surface &) = delete;
        Surface& operator=(const Surface &) = delete;
        Surface           (Surface &&)      = delete;
        Surface& operator=(Surface &&)      = delete;

        ~Surface();

    protected:
        friend Instance;

        Surface(VkSurfaceKHR surface, const Instance &instance);

    public:
        VkSurfaceKHR get() const { return m_vkSurface; }

        struct Properties
        {
            std::vector< VkBool32 > surfaceSupport;
            std::vector< VkSurfaceFormatKHR > formats;
            VkSurfaceCapabilitiesKHR capabilities;
            std::vector< VkPresentModeKHR > presentModes;
        };
        Surface::Properties getProperties(const PhysicalDevice &surface) const;
    };

}// namespace HLGK