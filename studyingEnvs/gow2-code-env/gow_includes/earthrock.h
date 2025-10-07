#ifndef EARTHROCK_H
#define EARTHROCK_H

#include "structs.h"


uint EarthRock_Update(float,dc_tConcussionBase const *,dc_tCameraShake const *,dc_tForceFeedback const *);
uint EarthRock_Free(void);
uint EarthRock_Init(VUVec4,float,float,float,float,float,float);


#endif