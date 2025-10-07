#ifndef FXCONEEMITTER_H
#define FXCONEEMITTER_H

#include "structs.h"


uint fxConeEmitter_Destructor_fxConeEmitter(void);
uint fxConeEmitter_MakeClientList(void);
uint fxConeEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxConeEmitter_vtbl;


#endif