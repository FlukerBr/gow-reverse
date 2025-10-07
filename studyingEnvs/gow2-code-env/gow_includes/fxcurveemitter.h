#ifndef FXCURVEEMITTER_H
#define FXCURVEEMITTER_H

#include "structs.h"


uint fxCurveEmitter_Destructor_fxCurveEmitter(void);
uint fxCurveEmitter_MakeClientList(void);
uint fxCurveEmitter_EmitParticle(VUVec4 *,VUVec4 *,VUVec4 *);
uint fxCurveEmitter_PrepEmitter(void);
uint fxCurveEmitter_vtbl;


#endif