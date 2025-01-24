#ifndef SLICODE_H
#define SLICODE_H

#include "structs.h"


uint sliCode_GetModIdx(uchar const **,int *,int *);
uint sliCode_CallFunction(uchar const **,uint *,sliStack *);
uint sliCode_SetVariable(uchar const **,uint);
uint sliCode_GetVariable(uchar const **,uint *);
uint sliCode_Run(uchar const *,SLI_Type);
uint sliCode_Register(sliModule *);
uint sliCode_Init(uchar const *);
uint sliCode_localVar;
uint sliCode_regModule;


#endif