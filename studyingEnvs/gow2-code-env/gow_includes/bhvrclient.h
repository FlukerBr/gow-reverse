#ifndef BHVRCLIENT_H
#define BHVRCLIENT_H

#include "structs.h"


uint bhvrClient_RemTimer(int);
uint bhvrClient_SetTimer(uint);
uint bhvrClient_PrepareToDie(void);
uint bhvrClient_Destructor_bhvrClient(void);
uint bhvrClient_bhvrClient(svrClientParm const *);
uint bhvrClient_vtbl;


#endif