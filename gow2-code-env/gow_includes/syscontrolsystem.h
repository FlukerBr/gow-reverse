#ifndef SYSCONTROLSYSTEM_H
#define SYSCONTROLSYSTEM_H

#include "structs.h"


uint sysControlSystem_Process(void);
uint sysControlSystem_SetParm(sysControlSystemParm *);
uint sysControlSystem_Destructor_sysControlSystem(void);
uint sysControlSystem_sysControlSystem(sysPad *,sysControlSystemParm *);
uint sysControlSystem_vtbl;


#endif