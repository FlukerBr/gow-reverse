#ifndef GOGRAPPLEPOINT_H
#define GOGRAPPLEPOINT_H

#include "structs.h"


uint goGrapplePoint_GetMatrix(void);
uint goGrapplePoint_GetGrappleDirFromID(int);
uint goGrapplePoint_GetGrappleDirID(VUVec4,int);
uint goGrapplePoint_RemoveWadContext(wadContext *);
uint goGrapplePoint_Remove(void);
uint goGrapplePoint_FindPoint(char const *);
uint goGrapplePoint_ValidatePoint(goGrapplePoint const *);
uint goGrapplePoint_HideActiveGO(void);
uint goGrapplePoint_ShowActiveGO(void);
uint goGrapplePoint_Disable(void);
uint goGrapplePoint_Enable(void);
uint goGrapplePoint_Run(goScript *);
uint goGrapplePoint_Destructor_goGrapplePoint(void);
uint goGrapplePoint_goGrapplePoint(goScript *,goGrapplePointArgs *);
uint goGrapplePoint_StaticInit(void);
uint goGrapplePoint_sm_EnabledPointList;
uint goGrapplePoint_sm_PointList;
uint goGrapplePoint_sm_pScript;
uint goGrapplePoint_sm_pActiveGO;


#endif