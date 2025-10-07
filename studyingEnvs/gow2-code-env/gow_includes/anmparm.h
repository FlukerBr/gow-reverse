#ifndef ANMPARM_H
#define ANMPARM_H

#include "structs.h"


uint anmParm_GetAnimatorParm(uint);
uint anmParm_FindAlternativeFileSet(anmFileSet const *,void *);
uint anmParm_FindSet_(uint);
uint anmParm_FindSet(char const *);
uint anmParm_GetFileIdx_(uint,int);
uint anmParm_GetFileIdx(char const *,int);


#endif