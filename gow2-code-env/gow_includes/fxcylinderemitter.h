#ifndef FXCYLINDEREMITTER_H
#define FXCYLINDEREMITTER_H

#include "structs.h"


uint fxCylinderEmitter_Destructor_fxCylinderEmitter(void);
uint fxCylinderEmitter_MakeClientList(void);
uint fxCylinderEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxCylinderEmitter_vtbl;


#endif