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

    public:
#if defined(WIN32)
        virtual HWND getHWND() const = 0;
#endif
    };

} // namespace HLGK