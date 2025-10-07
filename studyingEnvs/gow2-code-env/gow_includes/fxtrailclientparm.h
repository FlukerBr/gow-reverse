#ifndef FXTRAILCLIENTPARM_H
#define FXTRAILCLIENTPARM_H

#include "structs.h"


uint fxTrailClientParm_Destructor_fxTrailClientParm(void);
uint fxTrailClientParm_fxTrailClientParm_(fxTrailLoadParm const *,int,uint);
uint fxTrailClientParm_fxTrailClientParm(fxTrailLoadParm const *);
uint fxTrailClientParm_Create(fxTrailLoadParm const *,int,uint);


#endif