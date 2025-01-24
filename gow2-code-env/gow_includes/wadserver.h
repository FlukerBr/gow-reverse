#ifndef WADSERVER_H
#define WADSERVER_H

#include "structs.h"


uint wadServer_PopClientContext(void);
uint wadServer_PushClientContext(svrClient const *);
uint wadServer_CreateMasterContext(void);
uint wadServer_Destructor_wadServer(void);
uint wadServer_vtbl;


#endif