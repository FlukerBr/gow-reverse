#ifndef FXFADE_H
#define FXFADE_H

#include "structs.h"


uint fxFade_Run(renView *);
uint fxFade_TestForUpdate(renView *);
uint fxFade_Destructor_fxFade(void);
uint fxFade_fxFade(uint);
uint fxFade_sm_gFade;
uint fxFade_vtbl;


#endif