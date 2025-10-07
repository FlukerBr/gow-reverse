#ifndef RENGFXCLUTPOOL_H
#define RENGFXCLUTPOOL_H

#include "structs.h"


uint renGfxClutPool_ResetUseHistory(void);
uint renGfxClutPool_Unlock(vrBlock *);
uint renGfxClutPool_SoftLock(vrBlock *);
uint renGfxClutPool_RemoveHardLock(vrBlock *);
uint renGfxClutPool_HardLock(vrBlock *);
uint renGfxClutPool_FreeBlock(vrBlock *);
uint renGfxClutPool_Destructor_renGfxClutPool(void);
uint renGfxClutPool_AssignVRAM(renGfxClut *);
uint renGfxClutPool_Init(uint,uint,uint,uint,uint);
uint renGfxClutPool_vrBlockTable;
uint renGfxClutPool_vrBlocksUsed;


#endif