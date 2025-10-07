#ifndef FXFOGBLENDER_H
#define FXFOGBLENDER_H

#include "structs.h"


uint fxFogBlender_GetAlphaSetting(void);
uint fxFogBlender_Tween(fxFogBlender const *,fxFogBlender const *,fxFogBlender *,float);
uint fxFogBlender_Fade(fxFogBlender const *,fxFogBlender *,float);


#endif