#ifndef ANMMATRIXARRAYPLAYER_H
#define ANMMATRIXARRAYPLAYER_H

#include "structs.h"


uint anmMatrixArrayPlayer_PlayerID(void);
uint anmMatrixArrayPlayer_GetNumStreamSets(void);
uint anmMatrixArrayPlayer_GetJointMatrixHierarchy(int);
uint anmMatrixArrayPlayer_GetJointMatrix(int);
uint anmMatrixArrayPlayer_BlendSavedRotateBuffer(VUVec4 *,VUVec4 *,short *);
uint anmMatrixArrayPlayer_DestinationBlend(uint,VUVec4 *);
uint anmMatrixArrayPlayer_BlendSavedTransScaleBuffer(uint,VUVec4 *,short *);
uint anmMatrixArrayPlayer_InitSavedBlendBuffer(uint,VUVec4 *,short *);
uint anmMatrixArrayPlayer_Animate(float,float);
uint anmMatrixArrayPlayer_Reset(void);
uint anmMatrixArrayPlayer_anmMatrixArrayPlayer(anmFileHeader const *,goSkeleton *,anmDataAnimator *,VUVec4 *,uint);
uint anmMatrixArrayPlayer_Destructor_anmMatrixArrayPlayer(void);
uint anmMatrixArrayPlayer_vtbl;


#endif