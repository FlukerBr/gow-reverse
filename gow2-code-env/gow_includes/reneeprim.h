#ifndef RENEEPRIM_H
#define RENEEPRIM_H

#include "structs.h"


uint renEEPrim_GetUpdateAddress(uint,uint,uint,uint);
uint renEEPrim_InitAllChunks(int);
uint renEEPrim_InitBuffer(int);
uint renEEPrim_InitChunk(int,int);
uint renEEPrim_InitUNPACKData(uint *,int,int,int);
uint renEEPrim_CreateDMABuffer(void);
uint renEEPrim_PrebuildDMAInstr(void);
uint renEEPrim_PerFrameEnd(void);
uint renEEPrim_PerFrameBegin(void);
uint renEEPrim_Destructor_renEEPrim(void);
uint renEEPrim_renEEPrim(renEEPrimParm const *);


#endif