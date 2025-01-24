#ifndef GOSHADOW_H
#define GOSHADOW_H

#include "structs.h"


uint goShadow_UpdateShadow(goGameObject *,VUVec4,attachment_tSys *,goSoldier *);
uint goShadow_CollisionCallback(void);
uint goShadow_Run(goScript *);
uint goShadow_Destructor_goShadow(void);
uint goShadow_goShadow(goScript *);
uint goShadow_sm_pScript;


#endif