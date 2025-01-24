#ifndef FXTORUSEMITTER_H
#define FXTORUSEMITTER_H

#include "structs.h"


uint fxTorusEmitter_Destructor_fxTorusEmitter(void);
uint fxTorusEmitter_MakeClientList(void);
uint fxTorusEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxTorusEmitter_PrepEmitter(void);
uint fxTorusEmitter_vtbl;


#endif