/////////////////////////////////////////////////////////////////////////////
// Name:      kwTesting
// Purpose:   Entry point
// Author:    Ralph Walden
// Copyright: Copyright (c) 2019 KeyWorks Software (Ralph Walden)
// Licence:   Apache License (see LICENSE)
/////////////////////////////////////////////////////////////////////////////

#include "pch.h"

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "shell32.lib")

#include <iostream>

#include <ttparser.h>  // cmd -- Command line parser

#include "strtable.h"

int main(int /* argc */, char** /* argv */)
{
    ttlib::cmd cmd;

    cmd.addHelpOption("h|help", _tt(IDS_USAGE_MSG_HELP));

    cmd.parse();

    if (cmd.isHelpRequested())
    {
        std::cout << txtVersion << '\n' << txtCopyRight << "\n\n";
        std::cout << _tt("rcFix (file.rc): cleans up 16-bit style RC files") << '\n';

        for (auto& iter: cmd.getUsage())
        {
            std::cout << iter << '\n';
        }
        return 0;
    }

    return 0;
}
