#ifndef FXBLUR_H
#define FXBLUR_H

#include "structs.h"


uint fxBlur_Run(renView *);
uint fxBlur_Destructor_fxBlur(void);
uint fxBlur_fxBlur(uint);
uint fxBlur_vtbl;


#endif