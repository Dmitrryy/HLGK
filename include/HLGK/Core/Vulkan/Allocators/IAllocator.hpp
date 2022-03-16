//
// Created by dadro on 14.03.2022.
//
#pragma once

#include <HLGK/Core/Vulkan/Buffer.hpp>

#include <memory>


namespace HLGK {

    class IAllocator {

    public:
        virtual ~IAllocator() = default;

    public:
        virtual std::unique_ptr<IBuffer> createBuffer(const VkBufferCreateInfo &bufferCreateInfo) = 0;

    };//class IAllocator

}//namespace HLGK