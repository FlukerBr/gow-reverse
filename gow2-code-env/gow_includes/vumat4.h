#ifndef VUMAT4_H
#define VUMAT4_H

#include "structs.h"


uint VUMat4_SpecialInverse(void);
uint VUMat4_InvRotate(void);
uint VUMat4_OrthoNormalise(void);
uint VUMat4_View(VUVec4,VUVec4,VUVec4,float,VUMat4 *);
uint VUMat4_Transpose(void);
uint VUMat4_SetRotateXYZ(float,float,float);
uint VUMat4_BuildRotXYZ(float,float,float);
uint VUMat4_RotXYZ(float,float,float);
uint VUMat4_BuildRotAngleAxis(VUVec4,float);
uint VUMat4_RotZ(float);
uint VUMat4_RotY(float);
uint VUMat4_RotX(float);


#endif