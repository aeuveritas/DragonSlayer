#pragma once

#include "commandTask.hpp"

#pragma pack(push, 1)

/// Command to wait [IA-32e Mode]
class kCommandWait: public kCommandTask
{
public:
    void kTask_do(const char* pcParameter) override;
    
    kCommandWait(void);
    ~kCommandWait(void);
    
    void kInitializeCommandWait(void);
};

#pragma pack(pop)