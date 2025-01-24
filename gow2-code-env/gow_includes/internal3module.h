#ifndef INTERNAL3MODULE_H
#define INTERNAL3MODULE_H

#include "structs.h"


uint Internal3Module_Name(void);
uint Internal3Module_Internal3Module(void);
uint Internal3Module_SetLastCheckPointTime(float);
uint Internal3Module_CallFunction(ushort,uint *,sliStack *);
uint Internal3Module_SetVariable(ushort,uint);
uint Internal3Module_GetVariable(ushort,uint *);
uint Internal3Module_Update(void);
uint Internal3Module_Init(void);
uint Internal3Module_vtbl;
uint Internal3Module_CheckpointRefrPeriod;


#endif