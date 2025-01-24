#ifndef RENSHADOWCLIENT_H
#define RENSHADOWCLIENT_H

#include "structs.h"


uint renShadowClient_Prep(void);
uint renShadowClient_CalcProjBoundingSphere(VUVec4,VUVec4,VUVec4);
uint renShadowClient_GetAdjustedClipPlane(void);
uint renShadowClient_GetCullDistance(void);
uint renShadowClient_Destructor_renShadowClient(void);
uint renShadowClient_renShadowClient(renShadowClientLoadParm const *);
uint renShadowClient_GetTotalCounts(renShadowClientLoadParm const *,int *,int *);
uint renShadowClient_CreateEEPrim(int,int);


#endif