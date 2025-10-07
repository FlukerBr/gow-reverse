#ifndef ENTITYMODULE_H
#define ENTITYMODULE_H

#include "structs.h"


uint EntityModule_Name(void);
uint EntityModule_EntityModule(void);
uint EntityModule_CallFunction(ushort,uint *,sliStack *);
uint EntityModule_SetVariable(ushort,uint);
uint EntityModule_GetVariable(ushort,uint *);
uint EntityModule_VarArgs(int,int,sliStack *);
uint EntityModule_LoadData(void);
uint EntityModule_SaveData(void);
uint EntityModule_Update(void);
uint EntityModule_Init(void);
uint EntityModule_vtbl;


#endif