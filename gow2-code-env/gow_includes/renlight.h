#ifndef RENLIGHT_H
#define RENLIGHT_H

#include "structs.h"


uint renLight_SetWorldDirAndFalloff(VUVec4,float,float);
uint renLight_SetWorldPos(VUVec4);
uint renLight_CreateAttachedClients(void);
uint renLight_Regen(void);
uint renLight_Reset(void);
uint renLight_renLight(renLightLoadParm const *);


#endif