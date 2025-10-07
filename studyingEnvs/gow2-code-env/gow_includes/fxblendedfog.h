#ifndef FXBLENDEDFOG_H
#define FXBLENDEDFOG_H

#include "structs.h"


uint fxBlendedFog_Run(renView *);
uint fxBlendedFog_CheckTexture(void);
uint fxBlendedFog_Prep(renView *);
uint fxBlendedFog_Reset(void);
uint fxBlendedFog_Destructor_fxBlendedFog(void);
uint fxBlendedFog_fxBlendedFog(uint);
uint fxBlendedFog_vtbl;


#endif