#ifndef TBUBBLESEFFECT_H
#define TBUBBLESEFFECT_H

#include "structs.h"


uint tBubblesEffect_BubbleSetup(void);
uint tBubblesEffect_BubbleCallback(void *,renParticleSystem *,float);
uint tBubblesEffect_Update(void);
uint tBubblesEffect_Destructor_tBubblesEffect(void);
uint tBubblesEffect_tBubblesEffect(goCreatureCollision *);


#endif