#ifndef GOLENSFLARE_H
#define GOLENSFLARE_H

#include "structs.h"


uint goLensFlare_Run_(renView *);
uint goLensFlare_Run(goScript *);
uint goLensFlare_GetOrigin(void);
uint goLensFlare_ScriptDisconnect(goScript *);
uint goLensFlare_ScriptConnect(goScript *);
uint goLensFlare_Destructor_goLensFlare(void);
uint goLensFlare_goLensFlare(goScript *,goLensFlareArgs *);
uint goLensFlare_vtbl;
uint goLensFlare_sm_pScript;


#endif