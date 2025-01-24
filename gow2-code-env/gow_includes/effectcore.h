#ifndef EFFECTCORE_H
#define EFFECTCORE_H

#include "structs.h"


uint effectCore_SVirtualZone_SVirtualZone(void);
uint effectCore_IProcessZoneModulator(effectCore_SZoneModulator *,float);
uint effectCore_IActivateZoneModulator(effectCore_SZoneModulator_EMode,float const *,effectCore_EType,void *,float);
uint effectCore_IActivateScript(void);
uint effectCore_IDestructor(goScript *);
uint effectCore_IProcessFrame(goScript *);
uint effectCore_ConstrainInfluenceVector(VUVec4,VUVec4,VUVec4);
uint effectCore_ClipComponent(float,float,float);
uint effectCore_CreateInstantVirtualZone(uint,uint *);
uint effectCore_RemoveVirtualZone(uint);
uint effectCore_SetVirtualZoneUniformField(uint,VUVec4,VUVec4);
uint effectCore_AllocVirtualZone(uint *);
uint effectCore_GetAverageZoneInfluence(effectCore_EType,VUVec4,VUVec4 *);
uint effectCore_s_ZoneModulators;
uint effectCore_s_dwNbZoneModulators;
uint effectCore_s_VirtualZones;
uint effectCore_s_eState;
uint effectCore_s_dwVirtualZoneID;
uint effectCore_s_dwNbVirtualZones;


#endif