#ifndef GOSCRIPTSERVER_H
#define GOSCRIPTSERVER_H

#include "structs.h"


uint goScriptServer_Destructor_goScriptServer(void);
uint goScriptServer_CreateMasterContext(void);
uint goScriptServer_RegisterScript_(char const *,void (*)(goScript *));
uint goScriptServer_RegisterScript(char const *,goScriptFuncs const *);
uint goScriptServer_goScriptServer(svrParm const *);
uint goScriptServer_vtbl;
uint goScriptServer_gCurrentScript;


#endif