#ifndef FXDIRECTIONALEMITTER_H
#define FXDIRECTIONALEMITTER_H

#include "structs.h"


uint fxDirectionalEmitter_Destructor_fxDirectionalEmitter(void);
uint fxDirectionalEmitter_MakeClientList(void);
uint fxDirectionalEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxDirectionalEmitter_PrepEmitter(void);
uint fxDirectionalEmitter_vtbl;


#endif