#pragma once

#include "types.hpp"
#include "utils.hpp"
#include "keyboard.hpp"

extern kUtils clUtils;

#pragma pack(push, 1)

class kShell
{
public:
    void kPrompt(kKeyboard& clKeyboard, DWORD& dwline);
};

#pragma pakc(pop)