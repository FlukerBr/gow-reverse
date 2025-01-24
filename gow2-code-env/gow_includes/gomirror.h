#ifndef GOMIRROR_H
#define GOMIRROR_H

#include "structs.h"


uint goMirror_Run(goScript *);
uint goMirror_Destructor_goMirror(void);
uint goMirror_RemovePortal(void);
uint goMirror_goMirror(goScript *,goMirrorArgs *);
uint goMirror_ScriptDisconnect(goScript *);
uint goMirror_Register(void);


#endif