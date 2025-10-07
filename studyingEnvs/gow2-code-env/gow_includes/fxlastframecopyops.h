#ifndef FXLASTFRAMECOPYOPS_H
#define FXLASTFRAMECOPYOPS_H

#include "structs.h"


uint fxLastFrameCopyOps_Client_Run(renView *);
uint fxLastFrameCopyOps_Client_BlurAndCopyUpFrom128(uint,uint);
uint fxLastFrameCopyOps_Client_CopyDownTo128(uint,uint);
uint fxLastFrameCopyOps_Client_TestForUpdate(renView *);
uint fxLastFrameCopyOps_Client_Destructor_Client(void);
uint fxLastFrameCopyOps_Client_Client(uint);
uint fxLastFrameCopyOps_Client_vtbl;


#endif