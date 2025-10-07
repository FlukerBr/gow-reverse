#ifndef RENGROB_H
#define RENGROB_H

#include "structs.h"


uint renGROB_SetViewID(uint);
uint renGROB_ForceMaterialsTo(int);
uint renGROB_CheckForAnimatedMaterials(void);
uint renGROB_FixMaterialTints(void);
uint renGROB_SetAlpha(float);


#endif