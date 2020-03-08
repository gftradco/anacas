// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, Anacas Steel Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n                                                \n"
                                    "    /\                                            \n" 
                                    "   /  \   _ __   __ _  ___ __ _ ___               \n"
                                    "  / /\ \ | '_ \ / _` |/ __/ _` / __|              \n" 
                                    " / ____ \| | | | (_| | (_| (_| \__ \              \n"
                                    "/_/    \_\_| |_|\__,_|\___\__,_|___/              \n"  
                                    "\n                                                \n";

const std::string nonWindowsAsciiArt = 
                                    "\n                                                \n"
                                    "    /\                                            \n" 
                                    "   /  \   _ __   __ _  ___ __ _ ___               \n"
                                    "  / /\ \ | '_ \ / _` |/ __/ _` / __|              \n" 
                                    " / ____ \| | | | (_| | (_| (_| \__ \              \n"
                                    "/_/    \_\_| |_|\__,_|\___\__,_|___/              \n"  
                                    "\n                                                \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
