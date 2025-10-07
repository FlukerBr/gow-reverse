#ifndef TBLOODSPLATSYSTEM_H
#define TBLOODSPLATSYSTEM_H

#include "structs.h"


uint tBloodSplatSystem_RayData_RayData(void);
uint tBloodSplatSystem_ShotData_ShotData(void);
uint tBloodSplatSystem_Reset(void);
uint tBloodSplatSystem_DropBlood(goHandle,short,VUVec4,VUVec4,int);
uint tBloodSplatSystem_Initialise(void);
uint tBloodSplatSystem_CreateRay(VUVec4,VUVec4);
uint tBloodSplatSystem_UpdateRays(void);
uint tBloodSplatSystem_UpdateShots(void);
uint tBloodSplatSystem_tBloodSplatSystem(void);
uint tBloodSplatSystem_BloodScript(goScript *);
uint tBloodSplatSystem_BloodScriptDestructor(goScript *);
uint tBloodSplatSystem_Destructor_tBloodSplatSystem(void);
uint tBloodSplatSystem_vtbl;
uint tBloodSplatSystem_sm_BloodSplatSystem;


#endif