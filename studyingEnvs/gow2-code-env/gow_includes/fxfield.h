#ifndef FXFIELD_H
#define FXFIELD_H

#include "structs.h"


uint fxField_fxField(fxFieldClientParm const *);
uint fxField_GetFieldParameterBlocks(fxFieldParameterBlock *);
uint fxField_InitAnim(void);
uint fxField_Destructor_fxField(void);
uint fxField_vtbl;


#endif