// Licensed under GNU GPL 3.0
// Author Alexander Yell "https://mastodon.nove.team/@NotYourMagicBonkStick"


#ifndef GETEXTENSION
#define GETEXTENSION

#include <iostream>
#include <filesystem>

std::string Get_Extension(const std::filesystem::path& dir) {

    std::string dirProc = dir.string();
    int beg = dirProc.length();
    int span = 0;

    while (0 < beg && '.' != dirProc[beg]) {
        --beg;
        ++span;
    }

    //if there is no dot
    if (0 >= beg) {
        return "";
    }

    std::string fileExt = dirProc.substr(beg, span);

    return fileExt;
}

#endif
