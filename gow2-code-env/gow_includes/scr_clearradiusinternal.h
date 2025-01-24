#ifndef SCR_CLEARRADIUSINTERNAL_H
#define SCR_CLEARRADIUSINTERNAL_H

#include "structs.h"


uint SCR_ClearRadiusInternal_FindTargetCallback(void);
uint SCR_ClearRadiusInternal_GetJointPos(goSkeleton *,uint);
uint SCR_ClearRadiusInternal_CalcProjectionToAxisInfo(VUVec4,VUVec4 const *,VUVec4 *,int *);
uint SCR_ClearRadiusInternal_s_iNbTargets;
uint SCR_ClearRadiusInternal_s_pTargets;


#endif