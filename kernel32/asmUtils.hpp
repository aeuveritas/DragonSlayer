#pragma once

#include "types.hpp"

extern "C" {
    void _kReadCPUID(DWORD dwEAX, DWORD* pdwEAX, DWORD* pdwEBX, DWORD* pdwECX, DWORD* pdwEDX);
    void _kSwitchAndExecute64bitsKernel(void);
}
