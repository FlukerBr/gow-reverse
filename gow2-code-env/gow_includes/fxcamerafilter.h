#ifndef FXCAMERAFILTER_H
#define FXCAMERAFILTER_H

#include "structs.h"


uint fxCameraFilter_Run(renView *);
uint fxCameraFilter_Destructor_fxCameraFilter(void);
uint fxCameraFilter_fxCameraFilter(uint);
uint fxCameraFilter_vtbl;
uint fxCameraFilter_gFilterBlendModes;


#endif