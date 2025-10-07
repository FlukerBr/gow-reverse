#ifndef FIGHT_H
#define FIGHT_H

#include "structs.h"


uint Fight_GetNewTarget(uint);
uint Fight_Merge(Fight *);
uint Fight_RemoveObject(goCreature *);
uint Fight_RemoveBadGuy(uint);
uint Fight_RemoveGoodGuy(uint);
uint Fight_AddObject(goCreature *);
uint Fight_Update(void);
uint Fight_Destructor_Fight(void);
uint Fight_Fight(void);
uint Fight___dl(void *);
uint Fight_Allocate(wadContext *);
uint Fight_sm_FightMultiPool;


#endif