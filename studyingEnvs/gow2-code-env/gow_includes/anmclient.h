#ifndef ANMCLIENT_H
#define ANMCLIENT_H

#include "structs.h"


uint anmClient_GetAnimParm(void);
uint anmClient_TstFlags(ushort);
uint anmClient_GetAnimator(uint);
uint anmClient_EnableBlending(int);
uint anmClient_Process(void);
uint anmClient_GetWorkBufferPool(void);
uint anmClient_CreateAnimatorList(void);
uint anmClient_PoolFreeAnimator(uint,anmDataAnimator *);
uint anmClient_PoolAllocAnimator(uint);
uint anmClient_UpdateBlendSets(float,float,float,float,float,float,float,uint);
uint anmClient_GetMaxTime(void);
uint anmClient_GetMaxTotalTime(void);
uint anmClient_RemoveAllPlayLists(int,int);
uint anmClient_ClrPlayerFlags(uint);
uint anmClient_GetPlayerFlags(void);
uint anmClient_SetPlayerFlags(uint);
uint anmClient_SetFileIdx(uint,anmPlayer **,uint,int,int,float);
uint anmClient_DoNotUseDataFrom(wadContext *);
uint anmClient_IsUsingDataFrom(wadContext *);
uint anmClient_GetFilePlayers(uint,uint,anmPlayer **,int);
uint anmClient_SetFileInitialStartTime(uint,float);
uint anmClient_SetFileTime(uint,float);
uint anmClient_SetInitialStartTime(float);
uint anmClient_SetTime(float);
uint anmClient_SetFileTimeScale(uint,float);
uint anmClient_Reset(void);
uint anmClient_FreeAnimatorList(void);
uint anmClient_Destructor_anmClient(void);
uint anmClient_anmClient(svrClientParm const *,uint);


#endif