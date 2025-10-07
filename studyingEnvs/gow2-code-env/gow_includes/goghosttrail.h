#ifndef GOGHOSTTRAIL_H
#define GOGHOSTTRAIL_H

#include "structs.h"


uint goGhostTrail_ConnectCB(goScript *);
uint goGhostTrail_UpdateJoints(void);
uint goGhostTrail_GetInterpolatedTransform(float,float,VUMat4 *);
uint goGhostTrail_InitializeControlPoints(void);
uint goGhostTrail_InitializeSegments(void);
uint goGhostTrail_Update(void);
uint goGhostTrail_Run(goScript *);
uint goGhostTrail_Destructor_goGhostTrail(void);
uint goGhostTrail_goGhostTrail(goScript *);
uint goGhostTrail_sm_pScript;


#endif