#ifndef SYSTIME_H
#define SYSTIME_H

#include "structs.h"


uint sysTime_UpdateUnitTime(void);
uint sysTime_m_uOverallTimeStart;
uint sysTime_m_uOverallTime;
uint sysTime_m_uGSTime;
uint sysTime_m_uCPUTime;
uint sysTime_m_uFlags;
uint sysTime_m_fUnitTime;
uint sysTime_m_fFrameTime;
uint sysTime_m_aTimeZoneScale;
uint sysTime_m_fUnitTimeScale;
uint sysTime_m_fBaseUnitTimeScale;
uint sysTime_m_iFrameRate;


#endif