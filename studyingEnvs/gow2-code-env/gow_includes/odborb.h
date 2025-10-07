#ifndef ODBORB_H
#define ODBORB_H

#include "structs.h"


uint odbOrb_GetType(void);
uint odbOrb_AddPoints(float *,float *,float *,float *);
uint odbOrb_CountCloseOrbs(float *,float *,float *,float *);
uint odbOrb_Reset(void);
uint odbOrb_EmitParticles(VUVec4,VUVec4);
uint odbOrb_Update(void);
uint odbOrb_Destructor_odbOrb(void);
uint odbOrb_odbOrb(dc_tOrb const *,VUVec4,VUVec4,goHandle,int,float,float);
uint odbOrb_Create(dc_tOrb const *,VUVec4,VUVec4,goHandle,int,float,float);
uint odbOrb_EmitOrbs(dc_tOrbEmitter const *,goGameObject *,VUVec4,VUVec4,int);
uint odbOrb___dl(void *);
uint odbOrb_Allocate(wadContext *);
uint odbOrb_sm_odbOrbMultiPool;
uint odbOrb_vtbl;
uint odbOrb_sm_iOrbCnt;


#endif