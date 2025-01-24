#ifndef FXCAMERAFILTERBLENDER_H
#define FXCAMERAFILTERBLENDER_H

#include "structs.h"


uint fxCameraFilterBlender_Tween(fxCameraFilterBlender const *,fxCameraFilterBlender const *,fxCameraFilterBlender *,float);
uint fxCameraFilterBlender_Fade(fxCameraFilterBlender const *,fxCameraFilterBlender *,float);


#endif