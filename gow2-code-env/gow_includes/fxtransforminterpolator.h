#ifndef FXTRANSFORMINTERPOLATOR_H
#define FXTRANSFORMINTERPOLATOR_H

#include "structs.h"


uint fxTransformInterpolator_RecommendSubdivisions(void);
uint fxTransformInterpolator_Moved(void);
uint fxTransformInterpolator_Velocity(float);
uint fxTransformInterpolator_Interpolate(float,VUMat4 *);
uint fxTransformInterpolator_Prep(void);
uint fxTransformInterpolator_AddTime(float);
uint fxTransformInterpolator_AddTransform(VUMat4 *);
uint fxTransformInterpolator_fxTransformInterpolator(fxTransformInterpolatorParm const *);
uint fxTransformInterpolator_Reset(void);
uint fxTransformInterpolator_gTrailParm;
uint fxTransformInterpolator_gEmitterParm;


#endif