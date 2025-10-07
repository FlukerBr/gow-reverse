#ifndef FXVECTORINTERPOLATOR_H
#define FXVECTORINTERPOLATOR_H

#include "structs.h"


uint fxVectorInterpolator_GetLastVectors(VUVec4 *);
uint fxVectorInterpolator_Interpolate(float,VUVec4 *);
uint fxVectorInterpolator_Prep(void);
uint fxVectorInterpolator_AddVectors(VUVec4 *);
uint fxVectorInterpolator_Destructor_fxVectorInterpolator(void);
uint fxVectorInterpolator_fxVectorInterpolator(int);
uint fxVectorInterpolator_Reset(void);


#endif