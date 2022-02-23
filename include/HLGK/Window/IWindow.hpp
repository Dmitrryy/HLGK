/****************************************************************************************
*
*   IWindow.hpp
*
*   Created by dmitry
*   01.09.2021
*
***/

#pragma once


#if defined(WIN32)
#include <windows.h>
#endif

namespace HLGK
{

    class IWindow {
    public:
        virtual ~IWindow() = default;
    };

} // namespace HLGK