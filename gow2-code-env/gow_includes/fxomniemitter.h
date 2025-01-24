#ifndef FXOMNIEMITTER_H
#define FXOMNIEMITTER_H

#include "structs.h"


uint fxOmniEmitter_Destructor_fxOmniEmitter(void);
uint fxOmniEmitter_MakeClientList(void);
uint fxOmniEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxOmniEmitter_vtbl;


#endif