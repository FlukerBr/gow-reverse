#ifndef BONE_H
#define BONE_H

#include "structs.h"


uint Bone_SCR_BonePoisonInject(goScript *);
uint Bone_SCR_BonePoisonUpdate(goScript *);
uint Bone_SCR_BonePoisonUpdateDestructor(goScript *);
uint Bone_TweenTint(dc_tGlobal_tBone_tStage const *,float);
uint Bone_SCR_BoneShotgun(goScript *);
uint Bone_CollisionCallback(void);
uint Bone_SetUnloadPending(int);
uint Bone_Enable(int,int);
uint Bone_GetBoneContext(void);
uint Bone_sm_aPoisonedCreatures;
uint Bone_sm_pUpdateScript;
uint Bone_sm_bUnloadPending;


#endif