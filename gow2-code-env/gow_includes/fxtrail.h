#ifndef FXTRAIL_H
#define FXTRAIL_H

#include "structs.h"


uint fxTrail_Process(void);
uint fxTrail_MakeClientList(void);
uint fxTrail_AddHoop(VUMat4 *,float);
uint fxTrail_CopyLastFramesData(uint);
uint fxTrail_EraseHoop(int);
uint fxTrail_SetTint(VUVec4);
uint fxTrail_SetColour(VUVec4);
uint fxTrail_Enable(int);
uint fxTrail_Disconnect(void);
uint fxTrail_Connect(void);
uint fxTrail_Reset(void);
uint fxTrail_Destructor_fxTrail(void);
uint fxTrail_fxTrail(fxTrailClientParm const *);
uint fxTrail_vtbl;


#endif