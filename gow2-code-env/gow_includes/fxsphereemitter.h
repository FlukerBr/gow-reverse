#ifndef FXSPHEREEMITTER_H
#define FXSPHEREEMITTER_H

#include "structs.h"


uint fxSphereEmitter_Destructor_fxSphereEmitter(void);
uint fxSphereEmitter_MakeClientList(void);
uint fxSphereEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxSphereEmitter_vtbl;


#endif