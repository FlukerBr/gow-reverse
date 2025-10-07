#ifndef SYS_H
#define SYS_H

#include "structs.h"


uint sys_GameLoop(void);
uint sys_GameFrame(void);
uint sys_Shutdown(void);
uint sys_Boot2(void);
uint sys_Boot1(void);
uint sys_argv;
uint sys_argc;
uint sys_demoSegInfo;
uint sys__exitGame;


#endif