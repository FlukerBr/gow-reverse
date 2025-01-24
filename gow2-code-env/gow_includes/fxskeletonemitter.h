#ifndef FXSKELETONEMITTER_H
#define FXSKELETONEMITTER_H

#include "structs.h"


uint fxSkeletonEmitter_Destructor_fxSkeletonEmitter(void);
uint fxSkeletonEmitter_MakeClientList(void);
uint fxSkeletonEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxSkeletonEmitter_vtbl;


#endif