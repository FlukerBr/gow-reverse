#ifndef GOROPESKINNED_H
#define GOROPESKINNED_H

#include "structs.h"


uint goRopeSkinned_FindCullSphere(int);
uint goRopeSkinned_Reset(void);
uint goRopeSkinned_Weight_Weight(void);
uint goRopeSkinned_FindClosestPointOnRope(VUVec4,float *);
uint goRopeSkinned_GetRopeWorldPos(float);
uint goRopeSkinned_PinToWorldPos(float,VUVec4);
uint goRopeSkinned_ApplyForceToWeight(int,VUVec4);
uint goRopeSkinned_SetWeightPos(int,float);
uint goRopeSkinned_IsPositionValid(int,VUVec4);
uint goRopeSkinned_DetachWeight(int);
uint goRopeSkinned_AttachWeight(float,float);
uint goRopeSkinned_Run(goScript *);
uint goRopeSkinned_Update(void);
uint goRopeSkinned_DoMotion(void);
uint goRopeSkinned_Simulate(float);
uint goRopeSkinned_UpdateCullSphere(void);
uint goRopeSkinned_InitializeSegments(void);
uint goRopeSkinned_Destructor_goRopeSkinned(void);
uint goRopeSkinned_goRopeSkinned(goScript *,goRopeSkinnedArgs *);
uint goRopeSkinned_vtbl;
uint goRopeSkinned__gScript;


#endif