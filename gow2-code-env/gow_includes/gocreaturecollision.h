#ifndef GOCREATURECOLLISION_H
#define GOCREATURECOLLISION_H

#include "structs.h"


uint goCreatureCollision_SetGroundGOInfo(goGameObject *,uint);
uint goCreatureCollision_Destructor_goCreatureCollision(void);
uint goCreatureCollision_FindSound(uint);
uint goCreatureCollision_HeadTrack(void);
uint goCreatureCollision_ClampToCone(VUVec4,float,VUVec4);
uint goCreatureCollision_InitializeHeadTracking(int,float,float);
uint goCreatureCollision_GetLevelWC(void);
uint goCreatureCollision_GetControlNormal(void);
uint goCreatureCollision_GetConveyorMovement(void);
uint goCreatureCollision_StoreMovingPlatformInfo(void);
uint goCreatureCollision_HandleMovingPlatforms(VUVec4);
uint goCreatureCollision_DampedTurnAboutYAxis(VUVec4,VUVec4,float,float *);
uint goCreatureCollision_ChangeSpeed_(float,float);
uint goCreatureCollision_ChangeSpeed(float,float,float,float,float);
uint goCreatureCollision_CalculateSizeAndPosition(VUVec4,float);
uint goCreatureCollision_CentreOnLadder(VUVec4 *);
uint goCreatureCollision_CheckForBalanceBeam(VUVec4 *,VUVec4,float *);
uint goCreatureCollision_CheckForWater(VUVec4 *,VUVec4,float,int);
uint goCreatureCollision_CheckForWallPressDropDown(VUVec4 *);
uint goCreatureCollision_CheckForClimbUp(VUVec4 *);
uint goCreatureCollision_CheckForClimbDown(VUVec4 *);
uint goCreatureCollision_CheckForClimbing(VUVec4 *,VUVec4,int,int,int);
uint goCreatureCollision_CheckForWallHang(VUVec4 *,VUVec4);
uint goCreatureCollision_CheckForUnderhang(VUVec4 *,VUVec4);
uint goCreatureCollision_CheckForCeiling(VUVec4 *,VUVec4,int,uint,float *);
uint goCreatureCollision_CheckForGround(VUVec4 *,VUVec4,uint,float *);
uint goCreatureCollision_CheckForGroundWhilemovingUp(VUVec4 *,VUVec4,uint);
uint goCreatureCollision_CheckForCeilingWhileClimbing(VUVec4 *,VUVec4,uint,float *);
uint goCreatureCollision_CheckForGroundWhileClimbing(VUVec4 *,VUVec4,uint,float *);
uint goCreatureCollision_CheckForCreatures(VUVec4 *);
uint goCreatureCollision_CreatureCallback(void);
uint goCreatureCollision_CheckPositionWhileClimbing(VUVec4 *,uint);
uint goCreatureCollision_CheckPosition(VUVec4 *,uint,int);
uint goCreatureCollision_AdjustPositionV2(VUVec4 *,VUVec4,VUVec4);
uint goCreatureCollision_AdjustPosition(VUVec4 *,VUVec4);
uint goCreatureCollision_AdjustPosCallback(void);
uint goCreatureCollision_DeathCollisionCallback(void);
uint goCreatureCollision_RecordDamageInfo(collisionOutput *);
uint goCreatureCollision_Warp(VUMat4 const *);
uint goCreatureCollision_Reset(uint);
uint goCreatureCollision_InitializeData(void);
uint goCreatureCollision_goCreatureCollision_(goClient *,dc_tCreature const *);
uint goCreatureCollision_goCreatureCollision(void);
uint goCreatureCollision_vtbl;
uint goCreatureCollision_m_bInstantDeath;


#endif