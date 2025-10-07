#ifndef FIGHTMANAGER_H
#define FIGHTMANAGER_H

#include "structs.h"


uint FightManager_JoinOrCreateFight(VUVec4);
uint FightManager_Update(void);
uint FightManager_Init(void);
uint FightManager_FightManager(void);
uint FightManager_sm_pInstance;


#endif