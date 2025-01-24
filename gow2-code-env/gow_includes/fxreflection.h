#ifndef FXREFLECTION_H
#define FXREFLECTION_H

#include "structs.h"


uint fxReflection_RemovePortal(tPortal *);
uint fxReflection_AddMirror(renGROB *,int,int);
uint fxReflection_Run(void);
uint fxReflection_DisconnectView(void);
uint fxReflection_ConnectView(void);
uint fxReflection_fxReflection(renView *);


#endif