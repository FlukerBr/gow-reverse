#ifndef LEVELDATAMODULE_H
#define LEVELDATAMODULE_H

#include "structs.h"


uint LevelDataModule_Name(void);
uint LevelDataModule_LevelDataModule(void);
uint LevelDataModule_LoadData(void);
uint LevelDataModule_SaveData(void);
uint LevelDataModule_SetVariable(ushort,uint);
uint LevelDataModule_GetVariable(ushort,uint *);
uint LevelDataModule_GetVarInfo(int);
uint LevelDataModule_SetVarInfo(WadInfo *,int,char const *,int);
uint LevelDataModule_ReserveSpace(WadInfo *,int,int);
uint LevelDataModule_Init(void);
uint LevelDataModule_vtbl;


#endif