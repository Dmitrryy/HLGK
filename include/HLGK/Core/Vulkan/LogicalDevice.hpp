/****************************************************************************************
*
*   LogicalDevice.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once


#include <vulkan/vulkan.hpp>

#include <HLGK/Core/Allocators/IAllocator.hpp>

namespace HLGK
{

    class LogicalDevice final : public IAllocator
    {
        vk::PhysicalDevice m_physicalDevice;
        vk::Device m_device;

        //TODO implement
    };

} // namespace HLGK