#ifndef RENGFXCLUTSERVER_H
#define RENGFXCLUTSERVER_H

#include "structs.h"


uint renGfxClutServer_ProcessServer(void);
uint renGfxClutServer_SignalWadLoadCompleted(void);
uint renGfxClutServer_CreateMasterContext(void);
uint renGfxClutServer_Destructor_renGfxClutServer(void);
uint renGfxClutServer_FindCommonVRAMSizes(void);
uint renGfxClutServer_FreeVRAMPoolsAndCyclic(void);
uint renGfxClutServer_ResetVRAMPoolUseHistory(void);
uint renGfxClutServer_CreateVRAMPoolsAndCyclic(ushort,int,int);
uint renGfxClutServer_DeAllocImageVRAM(vrBlock *);
uint renGfxClutServer_AllocImageVRAM_DIRECT(renGfxClut *,int *);
uint renGfxClutServer_RenewVRAMCYCLICLock(renGfxClut *);
uint renGfxClutServer_AllocImageVRAM_POOLorCYCLIC(renGfxClut *);
uint renGfxClutServer_DeAllocImageVRAMFromCyclicBuffer(renGfxClut *);
uint renGfxClutServer_AllocImageVRAMFromCyclicBuffer(renGfxClut *);
uint renGfxClutServer_ClearVRAMBlocks(void);
uint renGfxClutServer_ForceAllocImageVRAMOffset(uint,short,short,ushort);
uint renGfxClutServer_DeAllocImageVRAMOffset(int,short,short,ushort);
uint renGfxClutServer_AllocImageVRAMOffset(short,short,ushort,int *);
uint renGfxClutServer_FindFree8HBitVRAM(uint *,uint);
uint renGfxClutServer_FindFree24BitVRAM(uint *,uint);
uint renGfxClutServer_FindFree32BitVRAM(uint *,uint);
uint renGfxClutServer_Alloc8HBitVRAM(uint,uint *,uint);
uint renGfxClutServer_Alloc24BitVRAM(uint,uint *,uint);
uint renGfxClutServer_Alloc32BitVRAM(uint,uint *,uint);
uint renGfxClutServer_CalculateImageBlockMask(short,short,ushort,int *,int,int);
uint renGfxClutServer_renGfxClutServer(svrParm const *);
uint renGfxClutServer_sm_uVRAMBlockCount;
uint renGfxClutServer_sm_uVRAMBlockArray;
uint renGfxClutServer_sm_First8HBitPageWithFreeBlocks;
uint renGfxClutServer_sm_First24BitPageWithFreeBlocks;
uint renGfxClutServer_sm_First32BitPageWithFreeBlocks;
uint renGfxClutServer_sm_VRAMBlocks;
uint renGfxClutServer_sm_uFirstFreePageForCyclicBuffer;
uint renGfxClutServer_sm_pMostRecentCyclicGfx;
uint renGfxClutServer_sm_pFirstCyclicGfx;
uint renGfxClutServer_sm_pHeap;
uint renGfxClutServer_sm_pVRAMBlockPools;
uint renGfxClutServer_sm_uVRAMBlockCounts;
uint renGfxClutServer_sm_pGfxClutPoolPool;
uint renGfxClutServer_sm_pVRAMDynamicBlockPool;
uint renGfxClutServer_sm_uVRAMBlockIndex;
uint renGfxClutServer_sm_uBPPIdxMap;
uint renGfxClutServer_sm_uLastBufferCopy;
uint renGfxClutServer_sm_uWorkspace;
uint renGfxClutServer_vtbl;
uint renGfxClutServer_sm_bForcedCyclic;
uint renGfxClutServer_sm_uCurrentBanks;


#endif