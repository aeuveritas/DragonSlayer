#pragma once

#include "types.hpp"
#include "port.hpp"

/// Macros

/// I/O ports
#define RTC_CMOSADDRESS             0x70
#define RTC_CMOSDATA                0x71

/// CMOS memory address
#define RTC_ADDRESS_SECOND          0x00
#define RTC_ADDRESS_MINUTE          0x02
#define RTC_ADDRESS_HOUR            0x04
#define RTC_ADDRESS_DAYOFWEEK       0x06
#define RTC_ADDRESS_DAYOFMONTH      0x07
#define RTC_ADDRESS_MONTH           0x08
#define RTC_ADDRESS_YEAR            0x09

/// Marco to translate BCD to binary
#define RTC_BCDTOBINARY(x)          (((x) >> 4) * 10 + ((x) & 0x0F))

#pragma pack(push, 1)

/// RTC [IA-32e Mode]
class kRTC
{
    kPort* a_pclPort;
    
    const char* pcDayOfWeekString[8] =
    {
        "Error",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Satyrday"
    };
    
public:
    kRTC(void);
    ~kRTC(void);
    
    void kIntializeRTC(kPort* pclPort);
    
    void kReadRTCTime(BYTE* pbHour, BYTE* pbMinute, BYTE* pbSecond);
    void kReadRTCDate(WORD* pwYear, BYTE* pbMonth, BYTE* pbDayOfMonth,
                      BYTE* pbDayOfWeek);
    const char* kConvertDayOfWeekToString(BYTE bDayOfWeek);
};

#pragma pack(pop)