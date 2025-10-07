#ifndef GOBREAKABLE_H
#define GOBREAKABLE_H

#include "structs.h"


uint goBreakable_SetCullSphere(goGameObject *,VUVec4);
uint goBreakable_SetCullSphereRadius(goGameObject *,float);
uint goBreakable_GetCullSphere(goGameObject *);
uint goBreakable_GetCullSphereRadius(goGameObject *);
uint goBreakable_Fade(goGameObject *,float);
uint goBreakable_HandleCollision(goCreature *,int);
uint goBreakable_Done(void);
uint goBreakable_UpdateBroken(void);
uint goBreakable_Break(void);
uint goBreakable_Damage(float,int);
uint goBreakable_FirstFrame(void);
uint goBreakable_IsStatue(void);
uint goBreakable_Init(bhvrClient *,uint);
uint goBreakable_Destructor_goBreakable(void);
uint goBreakable_goBreakable(void);


#endif