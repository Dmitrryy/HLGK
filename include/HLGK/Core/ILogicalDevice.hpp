/****************************************************************************************
*
*   ILogicalDevice.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once

#include <HLGK/Core/Allocators/IAllocator.hpp>

namespace HLGK
{

    class ILogicalDevice
    {
    public:
        virtual ~ILogicalDevice() {}

        IAllocator* createAllocator() const;
        //TODO implement
    };

} // namespace HLGK