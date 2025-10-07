#ifndef TMOVE_H
#define TMOVE_H

#include "structs.h"


uint tMove_PushBranch(dc_tBranch const *,float);
uint tMove_TriggerReactionBranches(int,goCreature *,int,int,int,dc_tMaterialFX const *);
uint tMove_TriggerBranches(sysPad const *,float);
uint tMove_GetPriority(dc_tBranch const *,int);
uint tMove_CheckBranchQueAgainstSubWeapon(void);
uint tMove_Update(void);
uint tMove_IsActionScriptAlreadyRunning(dc_tActionBase const *);
uint tMove_RemoveActionScripts(void);
uint tMove_AddActionScript(uint,uint,dc_tActionBase const *);
uint tMove_DoUpdateActions(void);
uint tMove_IncNumKills(void);
uint tMove_IncNumHits(void);
uint tMove_IncNumBlocks(void);
uint tMove_GetValidCollision(goHandle,int,int *,int);
uint tMove_ResetCollisionList(void);
uint tMove_AddToCollisionList(goHandle,dc_tCollision const *,int);
uint tMove_Destructor_tMove(void);
uint tMove_tMove(tMoveSystem *,dc_tBranch const *,uint,float);
uint tMove___dl(void *);
uint tMove_Allocate(wadContext *);
uint tMove_sm_tMoveMultiPool;


#endif