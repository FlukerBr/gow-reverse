#ifndef FXFSWARP_H
#define FXFSWARP_H

#include "structs.h"


uint fxFSWarp_tWarpVars_tWarpVars(void);
uint fxFSWarp_tRippleVars_tRippleVars(void);
uint fxFSWarp_Client_Run(renView *);
uint fxFSWarp_Client_PerturbMesh(void);
uint fxFSWarp_Client_PerturbMesh_Warp(fxFSWarp_Warp *,VUVec4);
uint fxFSWarp_Client_VertexCalcWarp(fxFSWarp_tWarpVars *);
uint fxFSWarp_Client_PerturbMesh_Ripple(fxFSWarp_Ripple *,VUVec4);
uint fxFSWarp_Client_VertexCalcRipple(fxFSWarp_Ripple *,fxFSWarp_tRippleVars *);
uint fxFSWarp_Client_PerturbMesh_Random(fxFSWarp_RandomXY *);
uint fxFSWarp_Client_PerturbMesh_Damped(fxFSWarp_DampedMesh *);
uint fxFSWarp_Client_ProcessMesh_HVU_VV(fxFSWarp_DampedMesh *);
uint fxFSWarp_Client_ProcessMesh_HVU_HVV(fxFSWarp_DampedMesh *);
uint fxFSWarp_Client_ApplyVelocitiesAcrossMesh(void);
uint fxFSWarp_Client_AddWave(VUVec4,float,int);
uint fxFSWarp_Client_PointDentV(int,int,float);
uint fxFSWarp_Client_PointDentU(int,int,float);
uint fxFSWarp_Client_InitMeshValues(void);
uint fxFSWarp_Client_Draw(renView *);
uint fxFSWarp_Client_DrawLastFrameBuffer(int,int,int,int);
uint fxFSWarp_Client_DrawFrontBuffer(int,int,int,int);
uint fxFSWarp_Client_DrawUsingST(int,int,int,int,float,float,float,float);
uint fxFSWarp_Client_DrawBackBuffer(int,int,int,int);
uint fxFSWarp_Client_ColorMesh(renView *);
uint fxFSWarp_Client_AddCameraGel(renView *,fxFSWarp_CameraGel *);
uint fxFSWarp_Client_AddCaustic(fxFSWarp_Caustic *);
uint fxFSWarp_Client_AddRGBAHole(VUVec4,VUVec4,VUVec4,VUVec4,VUVec4,float);
uint fxFSWarp_Client_SetupHole(renView *,fxFSWarp_Hole *);
uint fxFSWarp_Client_ClearMesh(void);
uint fxFSWarp_Client_Destructor_Client(void);
uint fxFSWarp_Client_Client(uint);
uint fxFSWarp_State_Tween(fxFSWarp_State const *,fxFSWarp_State const *,fxFSWarp_State *,float);
uint fxFSWarp_State_Fade(fxFSWarp_State const *,fxFSWarp_State *,float);
uint fxFSWarp_State_Reset(void);
uint fxFSWarp_State_Destructor_State(void);
uint fxFSWarp_State___as(fxFSWarp_State const *);
uint fxFSWarp_State_State(void);
uint fxFSWarp_Control_CanTween(fxFSWarp_Control const *,fxFSWarp_Control const *);
uint fxFSWarp_Control_Control(void);
uint fxFSWarp_Control_Reset(void);
uint fxFSWarp_UVClamp_Blend(fxFSWarp_UVClamp *,fxFSWarp_UVClamp *,float);
uint fxFSWarp_UVClamp_Init(float);
uint fxFSWarp_Zoom_Blend(fxFSWarp_Zoom *,fxFSWarp_Zoom *,float);
uint fxFSWarp_Zoom_Init(int);
uint fxFSWarp_CameraGel_Blend(fxFSWarp_CameraGel *,fxFSWarp_CameraGel *,float);
uint fxFSWarp_CameraGel_Init(VUVec4,VUVec4,VUVec4,float,float,float);
uint fxFSWarp_Hole_Blend(fxFSWarp_Hole *,fxFSWarp_Hole *,float);
uint fxFSWarp_Hole_Init(VUVec4,VUVec4,VUVec4,VUVec4,VUVec4,float);
uint fxFSWarp_Hole_Hole(void);
uint fxFSWarp_Caustic_Blend(fxFSWarp_Caustic *,fxFSWarp_Caustic *,float);
uint fxFSWarp_Caustic_Init(VUVec4,VUVec4);
uint fxFSWarp_Warp_Blend(fxFSWarp_Warp *,fxFSWarp_Warp *,float);
uint fxFSWarp_Warp_Init(float,float,float,float,float,float,float,float);
uint fxFSWarp_Ripple_Blend(fxFSWarp_Ripple *,fxFSWarp_Ripple *,float);
uint fxFSWarp_Ripple_Init(short,short,float,float,float,float,float);
uint fxFSWarp_RandomXY_Blend(fxFSWarp_RandomXY *,fxFSWarp_RandomXY *,float);
uint fxFSWarp_RandomXY_Init(float,float);
uint fxFSWarp_DampedMesh_Blend(fxFSWarp_DampedMesh *,fxFSWarp_DampedMesh *,float);
uint fxFSWarp_DampedMesh_Init(uchar,uchar,float,float,float,float,float,float);
uint fxFSWarp_Client_vtbl;


#endif