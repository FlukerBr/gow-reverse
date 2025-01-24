#ifndef THANDLESYSTEM_H
#define THANDLESYSTEM_H

#include "structs.h"


uint tHandleSystem_Destructor_tHandleSystem(void);
uint tHandleSystem_MatchHandle(goCreature *,VUVec4,VUVec4,VUVec4 *,VUVec4 *,VUVec4 *,int *);
uint tHandleSystem_SetHandleInfo(dc_tHandle const *);
uint tHandleSystem_Init(goSkeleton *);
uint tHandleSystem___dl(void *);
uint tHandleSystem_Allocate(wadContext *);
uint tHandleSystem_sm_tHandleSystemMultiPool;
uint tHandleSystem_vtbl;


#endif