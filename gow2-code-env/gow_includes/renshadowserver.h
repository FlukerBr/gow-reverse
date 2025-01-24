#ifndef RENSHADOWSERVER_H
#define RENSHADOWSERVER_H

#include "structs.h"


uint renShadowServer_CalculateSafetyMargin(void);
uint renShadowServer_CreateMasterContext(void);
uint renShadowServer_Destructor_renShadowServer(void);
uint renShadowServer_renShadowServer(svrParm const *);
uint renShadowServer_sm_uSafetyMargin;
uint renShadowServer_sm_fCullDistance;
uint renShadowServer_sm_fMaxShadowLength;
uint renShadowServer_vtbl;


#endif