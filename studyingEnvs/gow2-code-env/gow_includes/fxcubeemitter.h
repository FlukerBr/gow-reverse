#ifndef FXCUBEEMITTER_H
#define FXCUBEEMITTER_H

#include "structs.h"


uint fxCubeEmitter_Destructor_fxCubeEmitter(void);
uint fxCubeEmitter_MakeClientList(void);
uint fxCubeEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxCubeEmitter_vtbl;


#endif