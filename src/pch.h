// This header file is used to create a pre-compiled header for use in the entire project

#pragma once

// Caller should '#define wxWidgets' to use wxWidgets libraries

#if defined(_WIN32) && !defined(wxWidgets)
    #define NOATOM
    #define NOCOMM
    #define NODRIVERS
    #define NOEXTDEVMODEPROPSHEET
    #define NOIME
    #define NOKANJI
    #define NOLOGERROR
    #define NOMCX
    #define NOPROFILER
    #define NOSCALABLEFONT
    #define NOSERVICE
    #define NOSOUND
    #define NOWINDOWSX
    #define NOENHMETAFILE

    #define OEMRESOURCE
    #define WIN32_LEAN_AND_MEAN
    #define _CRT_SECURE_NO_WARNINGS

    #define WINVER       0x0A00  // Windows 10
    #define _WIN32_WINNT 0x0A00

    #include <stdint.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <windows.h>
#endif  // defined(_WIN32)

#if defined(wxWidgets)
    #if defined(_WIN32)
        #define wxMSVC_VERSION_AUTO
    #endif

    #define wxUSE_UNICODE     1
    #define wxUSE_NO_MANIFEST 1
    #define WXUSINGDLL        1

    #include "wx/defs.h"  // compiler detection; includes setup.h

    #include "wx/chartype.h"

    #if defined(__WINDOWS__)
        #include "wx/msw/private.h"
        #include "wx/msw/wrapcctl.h"

        #if wxUSE_COMMON_DIALOGS
            #include <commdlg.h>
        #endif

        #if wxUSE_COMMON_DIALOGS
            #include <commdlg.h>
        #endif

        #include "wx/msw/winundef.h"
    #endif
#endif

#include <cassert>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>

#include <filesystem>
namespace fs = std::filesystem;

#include <ttTR.h>
#include <ttdebug.h>
#include <ttlibspace.h>  // Contains the ttlib namespace functions/declarations common to all ttLib libraries

constexpr const auto txtVersion = "app 1.0.0";
constexpr const auto txtCopyRight = "Copyright (c) 2020 KeyWorks Software (Ralph Walden)";

#include <ttTR.h>        // Function for translating strings
#include <ttdebug.h>  // ttASSERT macros
#include <ttwinspace.h>  // Contains the ttlib namespace functions/declarations common to all ttLib libraries

constexpr const auto txtVersion = "kwTesting 1.0";
constexpr const auto txtCopyRight = "Copyright(c) 1998 - 2020 KeyWorks Software(Ralph Walden)";
