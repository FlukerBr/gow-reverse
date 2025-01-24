#ifndef FXPOLYSURFACEEMITTER_H
#define FXPOLYSURFACEEMITTER_H

#include "structs.h"


uint fxPolySurfaceEmitter_Destructor_fxPolySurfaceEmitter(void);
uint fxPolySurfaceEmitter_MakeClientList(void);
uint fxPolySurfaceEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxPolySurfaceEmitter_PrepEmitter(void);
uint fxPolySurfaceEmitter_vtbl;


#endif