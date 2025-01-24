#ifndef RENGROBSERVER_H
#define RENGROBSERVER_H

#include "structs.h"


uint renGROBServer_CleanUp(void);
uint renGROBServer_ProcessServer(void);
uint renGROBServer_Prep(void);
uint renGROBServer_Destructor_renGROBServer(void);
uint renGROBServer_vtbl;
uint renGROBServer__uDefaultViewID;


#endif