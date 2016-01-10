#pragma once

#include "commandTask.hpp"

#pragma pack(push, 1)

/// Command to set timer [IA-32e Mode]
class kCommandSetTimer: public kCommandTask
{
public:
    void kTask_do(const char* pcParameter) override;
    
    kCommandSetTimer(void);
    ~kCommandSetTimer(void);
    
    void kInitializeCommandSetTimer(void);
};

#pragma pop(pop)
