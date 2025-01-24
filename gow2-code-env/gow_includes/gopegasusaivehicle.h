#ifndef GOPEGASUSAIVEHICLE_H
#define GOPEGASUSAIVEHICLE_H

#include "structs.h"


uint goPegasusAIVehicle_setRequestedSpeed(float);
uint goPegasusAIVehicle_setPosition(VUVec4 const *);
uint goPegasusAIVehicle_regenerateOrthonormalBasisUF(VUVec4 const *);
uint goPegasusAIVehicle_setUp(VUVec4 const *);
uint goPegasusAIVehicle_position(void);
uint goPegasusAIVehicle_forward(void);
uint goPegasusAIVehicle_GetLockOnMirrorZ(void);
uint goPegasusAIVehicle_GetLockOnMirrorY(void);
uint goPegasusAIVehicle_GetLockOnMirrorX(void);
uint goPegasusAIVehicle_GetLockOnOffset(void);
uint goPegasusAIVehicle_GetCollisionFactor(void);
uint goPegasusAIVehicle_GetAlignmentFactor(void);
uint goPegasusAIVehicle_GetLeadTime(void);
uint goPegasusAIVehicle_GetSeparationFactor(void);
uint goPegasusAIVehicle_regenerateLocalSpace(VUVec4 const *,float);
uint goPegasusAIVehicle_applySteeringForce(VUVec4,VUVec4,float);
uint goPegasusAIVehicle_applyBrakingForce(float,float);
uint goPegasusAIVehicle_adjustRawSteeringForce(VUVec4 const *,float);
uint goPegasusAIVehicle_SetFlightData(dc_tPegasusFlightData const *);
uint goPegasusAIVehicle_SetLockOnData(dc_tPegasusLockOnData const *);
uint goPegasusAIVehicle_reset(void);


#endif