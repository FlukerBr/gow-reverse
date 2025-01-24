#ifndef SC_PENDULUM_H
#define SC_PENDULUM_H

#include "structs.h"


uint SC_Pendulum_Impulse(goScript *);
uint SC_Pendulum_Run(goScript *);
uint SC_Pendulum_RegisterScripts(void);
uint SC_Pendulum_Destructor_SC_Pendulum(void);
uint SC_Pendulum_SC_Pendulum(goScript *,SC_Pendulum_SPendulumArgs *);
uint SC_Pendulum_ImpulseI(VUVec4);
uint SC_Pendulum_UpdateI(float);


#endif