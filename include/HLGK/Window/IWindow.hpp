#pragma once
//
// Created by dadro on 03.09.2021.
//

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