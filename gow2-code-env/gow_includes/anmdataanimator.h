#ifndef ANMDATAANIMATOR_H
#define ANMDATAANIMATOR_H

#include "structs.h"


uint anmDataAnimator_EnableBlending(int);
uint anmDataAnimator_CanTween(void);
uint anmDataAnimator_CanPlayAdditiveSets(void);
uint anmDataAnimator_GetClient(void);
uint anmDataAnimator_Blend(void);
uint anmDataAnimator_PoolFreePlayList(void *);
uint anmDataAnimator_PoolAllocPlayList(uint);
uint anmDataAnimator_GetMaxTotalTime(void);
uint anmDataAnimator_GetMaxTime(void);
uint anmDataAnimator_UpdateBlendSets(float,float,float,float,float,float,float,uint);
uint anmDataAnimator_UpdateWalkBlendSet(anmPlayList *,float,float,float,float,int,int *);
uint anmDataAnimator_UpdateStrafeBlendSet(anmPlayList *,float,float,float,float);
uint anmDataAnimator_UpdatePegasusBlendSet(anmPlayList *,float,float,float,float);
uint anmDataAnimator_UpdateDriftBlendSet(anmPlayList *,float,float);
uint anmDataAnimator_UpdateUVBlendSet(anmPlayList *,float,float);
uint anmDataAnimator_UpdateClimbBlendSet(anmPlayList *,float,float,float,float,int,int);
uint anmDataAnimator_UpdateBalanceBlendSet(anmPlayList *,float,float,float,int);
uint anmDataAnimator_Blend2DAnim(float,float);
uint anmDataAnimator_GetNumPlayers(void);
uint anmDataAnimator_RemovePlayList(anmPlayList *);
uint anmDataAnimator_SetupTween(anmFileHeader const *,anmFileSet const *,int,uint,float);
uint anmDataAnimator_AddFileSet(anmFileSet const *,float);
uint anmDataAnimator_AddAdditiveFile(anmFileHeader const *,int,uint,float);
uint anmDataAnimator_ProcessWeights(void);
uint anmDataAnimator_AddPlayer(anmFileHeader const *,uint);
uint anmDataAnimator_GetFlags(void);
uint anmDataAnimator_ClrFlags(uint);
uint anmDataAnimator_SetFlags(uint);
uint anmDataAnimator_GetDefPlayer(void);
uint anmDataAnimator_DoNotUseDataFrom(wadContext *);
uint anmDataAnimator_IsUsingDataFrom(wadContext *);
uint anmDataAnimator_GetFilePlayers(uint,uint,anmPlayer **,int);
uint anmDataAnimator_SetFileInitialStartTime(uint,float);
uint anmDataAnimator_SetFileTime(uint,float);
uint anmDataAnimator_SetInitialStartTime(float);
uint anmDataAnimator_SetTime(float);
uint anmDataAnimator_SetFileTimeScale(uint,float);
uint anmDataAnimator_SetFile(anmFileSet const *,anmFileHeader const *,int,int,uint,float);
uint anmDataAnimator_SetFileIdx(uint,int,uint);
uint anmDataAnimator_RemoveAllPlayLists(int,int);
uint anmDataAnimator_RemoveAllBlendSets(void);
uint anmDataAnimator_Process(void);
uint anmDataAnimator_Reset(void);
uint anmDataAnimator_AddPlayList(uint);
uint anmDataAnimator_Destructor_anmDataAnimator(void);
uint anmDataAnimator_anmDataAnimator(anmParm const *,anmClient *,uint,uint,uint);
uint anmDataAnimator_vtbl;


#endif