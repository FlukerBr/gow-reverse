#ifndef PEGASUSCURVE_H
#define PEGASUSCURVE_H

#include "structs.h"


uint PegasusCurve_CalculateVel(float);
uint PegasusCurve_Calculate_(float);
uint PegasusCurve_Calculate(float,float *,VUVec4 *,VUVec4 *);
uint PegasusCurve_EstimateLength(void);
uint PegasusCurve_ArcLen(float,float);
uint PegasusCurve_Init(void);
uint PegasusCurve_sm_CurveAccMat;
uint PegasusCurve_sm_CurveVelMat;
uint PegasusCurve_sm_CurvePosMat;


#endif