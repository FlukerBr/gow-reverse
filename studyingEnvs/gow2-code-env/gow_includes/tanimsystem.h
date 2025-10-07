#ifndef TANIMSYSTEM_H
#define TANIMSYSTEM_H

#include "structs.h"


uint tAnimSystem_RemoveSlave(anmClient *);
uint tAnimSystem_AddSlave(anmClient *);
uint tAnimSystem_GetBankIdxFromName(uint);
uint tAnimSystem_Reset(void);
uint tAnimSystem_Destructor_tAnimSystem(void);
uint tAnimSystem_tAnimSystem(goCreature *,uint,int,tStaticAnimDescEntry const *,char const *);
uint tAnimSystem_Callback(anmPlayer *);
uint tAnimSystem_ProcessCallback(anmClient *);
uint tAnimSystem_UpdateZeroJoint(void);
uint tAnimSystem_PlayAnim_(uint);
uint tAnimSystem_PlayAnimFromFileIdx(uint,float,float,float);
uint tAnimSystem_PlaySlaveAnims(uint,float,float,float);
uint tAnimSystem_PlayAnim(uint,float,float,float);
uint tAnimSystem_GetFileIdx(anmClient *,uint);
uint tAnimSystem_UpdateAnim(float,float,float,float,float,float,float,float,int);
uint tAnimSystem_UpdateBlendSets(void);
uint tAnimSystem_SetAnimTimeScale(float);
uint tAnimSystem_SetAnimTime(uint,float);
uint tAnimSystem_SetAnimPos(float);
uint tAnimSystem___dl(void *);
uint tAnimSystem_Allocate(wadContext *);
uint tAnimSystem_sm_tAnimSystemMultiPool;
uint tAnimSystem_vtbl;
uint tAnimSystem_anmClientProcessCallback_vtbl;


#endif