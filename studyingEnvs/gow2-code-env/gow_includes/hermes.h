#ifndef HERMES_H
#define HERMES_H

#include "structs.h"


uint Hermes_TstFlags(uint);
uint Hermes_SCR_HermesAmulet(goScript *);
uint Hermes_SCR_HermesAmuletDestructor(goScript *);
uint Hermes_SCR_HermesLineOfSight(goScript *);
uint Hermes_SCR_HermesEnable(goScript *);
uint Hermes_Reset(void);
uint Hermes_Update(void);
uint Hermes_Enable(int,int,int,int);
uint Hermes_Init(void);
uint Hermes_sm_fHermesTime;
uint Hermes_sm_fFSETime2;
uint Hermes_sm_fFSETime1;
uint Hermes_sm_fFSETime0;
uint Hermes_sm_fBloomTime2;
uint Hermes_sm_fBloomTime1;
uint Hermes_sm_fBloomTime0;
uint Hermes_sm_pFSEffect2;
uint Hermes_sm_pFSEffect1;
uint Hermes_sm_pFSEffect0;
uint Hermes_sm_pBloomEffect2;
uint Hermes_sm_pBloomEffect1;
uint Hermes_sm_pBloomEffect0;
uint Hermes_sm_fAlpha;
uint Hermes_sm_fAlphaStep;
uint Hermes_sm_fCurrentAlpha;
uint Hermes_sm_fRipplePeriod;
uint Hermes_sm_pAmuletGO;
uint Hermes_sm_iAmuletRefCnt;
uint Hermes_sm_uFlags;
uint Hermes_sm_fFadeSpeed;
uint Hermes_sm_fScale;
uint Hermes_sm_fTargetScale;


#endif