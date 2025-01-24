#ifndef FXZBUFSTENCIL_H
#define FXZBUFSTENCIL_H

#include "structs.h"


uint fxZBufStencil_Destructor_fxZBufStencil(void);
uint fxZBufStencil_Run(renView *);
uint fxZBufStencil_TestForUpdate(renView *);
uint fxZBufStencil_vtbl;


#endif