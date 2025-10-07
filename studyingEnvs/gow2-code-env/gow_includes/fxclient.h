#ifndef FXCLIENT_H
#define FXCLIENT_H

#include "structs.h"


uint fxClient_InitAnim(void);
uint fxClient_Disconnect(void);
uint fxClient_Connect(void);
uint fxClient_Destructor_fxClient(void);
uint fxClient_MakeClientList(void);
uint fxClient_vtbl;


#endif