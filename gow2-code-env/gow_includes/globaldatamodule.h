#ifndef GLOBALDATAMODULE_H
#define GLOBALDATAMODULE_H

#include "structs.h"


uint GlobalDataModule_Name(void);
uint GlobalDataModule_GlobalDataModule(void);
uint GlobalDataModule_SetVarByName(char const *,int,uint);
uint GlobalDataModule_GetVarByName(char const *,int *,uint *);
uint GlobalDataModule_LoadData(void);
uint GlobalDataModule_SaveData(void);
uint GlobalDataModule_SetVariable(ushort,uint);
uint GlobalDataModule_GetVariable(ushort,uint *);
uint GlobalDataModule_GetVarInfo(int);
uint GlobalDataModule_SetVarInfo(WadInfo *,int,char const *,int);
uint GlobalDataModule_SetInitializing(int);
uint GlobalDataModule_ReserveSpace(WadInfo *,int,int);
uint GlobalDataModule_Init(void);
uint GlobalDataModule_vtbl;


#endif