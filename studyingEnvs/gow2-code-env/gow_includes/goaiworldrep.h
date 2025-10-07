#ifndef GOAIWORLDREP_H
#define GOAIWORLDREP_H

#include "structs.h"


uint goAIWorldRep_GetSiteData(ushort);
uint goAIWorldRep_FindWorldRep(wypClient *);
uint goAIWorldRep_RemoveWorldRep(goAIWorldRep const *);
uint goAIWorldRep_AddWorldRep(goAIWorldRep const *);
uint goAIWorldRep_FillPath(ushort,ushort,float,ushort *);
uint goAIWorldRep_GetNextSite(ushort,ushort,float);
uint goAIWorldRep_FindClosestSite(VUVec4,float,VUMat4 const *);
uint goAIWorldRep_InsideAnySite(VUVec4,VUMat4 const *);
uint goAIWorldRep_Destructor_goAIWorldRep(void);
uint goAIWorldRep_sm_WorldReps;
uint goAIWorldRep_sm_ReuseableAStarSet;
uint goAIWorldRep_sm_ReuseableClosed;
uint goAIWorldRep_sm_ReuseablePath2;
uint goAIWorldRep_sm_ReuseablePath1;
uint goAIWorldRep_sm_iWorldRepChangeFrame;
uint goAIWorldRep_sm_iNumWorldReps;


#endif