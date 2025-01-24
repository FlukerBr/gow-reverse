#ifndef GOAIBASE_H
#define GOAIBASE_H

#include "structs.h"


uint goAIBase_GetFlightHeight(void);
uint goAIBase_IsCulled(void);
uint goAIBase_SetSite(int);
uint goAIBase_GetExtendedSearchContexts(uint,wadContext **);
uint goAIBase_MakeAxis(goCreature *,VUMat4 *);
uint goAIBase_GetModeAlteredPos(goCreature *);
uint goAIBase_SetPatrolSite(short);
uint goAIBase_Destructor_goAIBase(void);
uint goAIBase_goAIBase(void);
uint goAIBase_sm_AIList;
uint goAIBase_vtbl;


#endif