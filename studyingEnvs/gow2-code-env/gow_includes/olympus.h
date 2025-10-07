#ifndef OLYMPUS_H
#define OLYMPUS_H

#include "structs.h"


uint Olympus_SCR_OlympusOrbs(goScript *);
uint Olympus_SCR_OlympusSphere(goScript *);
uint Olympus_SCR_OlympusSphereDestructor(goScript *);
uint Olympus_SCR_OlympusBolt(goScript *);
uint Olympus_SetUnloadPending(int);
uint Olympus_Enable(int,int);
uint Olympus_GetOlympusContext(void);
uint Olympus_sm_fTimeToNextHit;
uint Olympus_sm_iSphereRefCnt;
uint Olympus_sm_pSphereGO;
uint Olympus_sm_bUnloadPending;


#endif