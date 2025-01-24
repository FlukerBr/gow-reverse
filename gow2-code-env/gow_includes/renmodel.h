#ifndef RENMODEL_H
#define RENMODEL_H

#include "structs.h"


uint renModel_InitAnim(void);
uint renModel_InstanceGroup(uint);
uint renModel_Recycle(void);
uint renModel_Destructor_renModel(void);
uint renModel_RemoveInstancedMaterials(void);
uint renModel_AddInstancedMaterials(int,int);
uint renModel_GetModelContext(void);
uint renModel_renModel(renModelClientParm const *);


#endif