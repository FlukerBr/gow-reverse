#ifndef HERMESBEAM_H
#define HERMESBEAM_H

#include "structs.h"


uint HermesBeam_TstFlags(uint);
uint HermesBeam_ClrFlags(uint);
uint HermesBeam_SetFlags(uint);
uint HermesBeam_RemoveWadContext(wadContext *);
uint HermesBeam_FindBeam(char const *);
uint HermesBeam_GetMatrix(void);
uint HermesBeam_Run(goScript *);
uint HermesBeam_HideLineOfSightEffect(void);
uint HermesBeam_ShowLineOfSightEffect(void);
uint HermesBeam_HideEnabledEffect(void);
uint HermesBeam_ShowEnabledEffect(void);
uint HermesBeam_Destructor_HermesBeam(void);
uint HermesBeam_HermesBeam(goScript *,HermesBeamArgs *);
uint HermesBeam_sm_BeamList;


#endif