#ifndef EARTH_H
#define EARTH_H

#include "structs.h"


uint Earth_SCR_EarthRockTrigger(goScript *);
uint Earth_SCR_EarthRain(goScript *);
uint Earth_SCR_EarthRainDestructor(goScript *);
uint Earth_SCR_EarthRainStandalone(goScript *);
uint Earth_SCR_EarthRainStandaloneDestructor(goScript *);
uint Earth_SCR_EarthStomp(goScript *);
uint Earth_SCR_EarthEcho(goScript *);
uint Earth_SCR_EarthEnter(goScript *);
uint Earth_SCR_EarthTrigger(goScript *);
uint Earth_SCR_EarthTriggerDestructor(goScript *);
uint Earth_FreeResources(void);
uint Earth_SetUnloadPending(int);
uint Earth_GetEarthContext(void);
uint Earth_sm_aRocks;
uint Earth_sm_pRainScript;
uint Earth_sm_fRainTimer;
uint Earth_sm_iNumRocks;
uint Earth_sm_bMashingDone;
uint Earth_sm_fMashometer;
uint Earth_sm_iRainRefCnt;
uint Earth_sm_iTriggerRefCnt;
uint Earth_sm_bUnloadPending;


#endif