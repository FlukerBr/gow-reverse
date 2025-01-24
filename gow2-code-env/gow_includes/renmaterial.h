#ifndef RENMATERIAL_H
#define RENMATERIAL_H

#include "structs.h"


uint renMaterial_SetGSRegisters(int,uint,uint,uint,uint,renMaterialFlags);
uint renMaterial_SetupMaterialContext(renMaterialContext *,renMaterialStage *,renMaterialFlags,VUVec4);
uint renMaterial_CreateAttachedClients(void);
uint renMaterial_Regen(void);
uint renMaterial_Reset(void);
uint renMaterial_Destructor_renMaterial(void);
uint renMaterial_renMaterial_(renMaterial const *,renMaterialServerContext *,renMaterialDupContext *);
uint renMaterial_renMaterial(renMaterialLoadParm const *,char const *,ushort *,renMaterialServerContext *);


#endif