#ifndef FXSTANDARDSCREENOPS_H
#define FXSTANDARDSCREENOPS_H

#include "structs.h"


uint fxStandardScreenOps_InitStandardScreenOps(void);
uint fxStandardScreenOps_EndTheContext(void);
uint fxStandardScreenOps_BeginTheContext(dmaStaticContext *);
uint fxStandardScreenOps_SwapGandA(uint);
uint fxStandardScreenOps_MoveGtoA(uint,uint);
uint fxStandardScreenOps_DrawDestAlphaPoly(ulong,uint);
uint fxStandardScreenOps_ClearG(void);
uint fxStandardScreenOps_InvertZBuffer(void);
uint fxStandardScreenOps_InPlaceBlur256(uint,uint);
uint fxStandardScreenOps_InPlaceBlur128(uint,uint);
uint fxStandardScreenOps_InPlaceBlur64(uint,uint);
uint fxStandardScreenOps_FilteredCopyTile(renView *,VUVec4 const *,float const *,uint);
uint fxStandardScreenOps_FilteredTile(renView *,VUVec4 const *,float const *,uint);
uint fxStandardScreenOps_PrepareGelInfo(renView *,VUVec4 const *,VUVec4 *,float const *,float *);
uint fxStandardScreenOps_DrawTexturedTile_(uint);
uint fxStandardScreenOps_DrawTexturedTile(int,int,int,int,uint);
uint fxStandardScreenOps_DrawUnTexturedTile__(uint);
uint fxStandardScreenOps_DrawUnTexturedTile_(renView *,uint);
uint fxStandardScreenOps_DrawUnTexturedTile(int,int,int,int,uint);
uint fxStandardScreenOps_BlurWithOffset(int,int);
uint fxStandardScreenOps_UpSample(int,int,int,int,int,int);
uint fxStandardScreenOps_DownSample(int,int,int,int,int,int);
uint fxStandardScreenOps_SetStandardTexturedRegs(ulong,ulong,ulong,ulong,ulong,ulong,uint);
uint fxStandardScreenOps_SetStandardUnTexturedRegs(ulong,ulong,ulong,ulong,uint);
uint fxStandardScreenOps_g_pBackMoveGtoAContext;
uint fxStandardScreenOps_g_pBackSwapGandAContext;
uint fxStandardScreenOps_g_pBackTexturedTileZNearContext;
uint fxStandardScreenOps_g_pBackTexturedTileZ0Context;
uint fxStandardScreenOps_g_pBackUntexturedTileZ0Context;
uint fxStandardScreenOps_g_pDownSample128To64Off16Context;
uint fxStandardScreenOps_g_pDownSample256To128Off0Context;
uint fxStandardScreenOps_g_pDownSampleBackTo256Off16Context;
uint fxStandardScreenOps_g_pUpSample256ToBackOff0Context;
uint fxStandardScreenOps_g_pUpSample128To256Off16Context;
uint fxStandardScreenOps_g_pUpSample64To128Off0Context;
uint fxStandardScreenOps_g_pBlur256Off16Context;
uint fxStandardScreenOps_g_pBlur256Off0Context;
uint fxStandardScreenOps_g_pBlur128Off16Context;
uint fxStandardScreenOps_g_pBlur128Off0Context;
uint fxStandardScreenOps_g_pBlur64Off16Context;
uint fxStandardScreenOps_g_pBlur64Off0Context;


#endif