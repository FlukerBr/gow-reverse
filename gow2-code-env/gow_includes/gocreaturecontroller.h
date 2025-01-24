#ifndef GOCREATURECONTROLLER_H
#define GOCREATURECONTROLLER_H

#include "structs.h"


uint goCreatureController_QuickBlock(goGameObject *,dc_tMove const *,int,uint);
uint goCreatureController_IsCreatureDead(void);
uint goCreatureController_GetDamageMultiplier(int);
uint goCreatureController_Destructor_goCreatureController(void);
uint goCreatureController_DefaultDamageMultiplier(int,float);
uint goCreatureController_vtbl;


#endif