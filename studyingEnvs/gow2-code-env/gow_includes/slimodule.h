#ifndef SLIMODULE_H
#define SLIMODULE_H

#include "structs.h"


uint sliModule_SetVariable(ushort,uint);
uint sliModule_GetVariable(ushort,uint *);
uint sliModule_CallFunction(ushort,uint *,sliStack *);
uint sliModule_sliModule(void);
uint sliModule_vtbl;


#endif