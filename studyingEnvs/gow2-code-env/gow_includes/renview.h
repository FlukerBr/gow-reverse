#ifndef RENVIEW_H
#define RENVIEW_H

#include "structs.h"


uint renView_SetupPipeline(void);
uint renView_MakeViewportContext(void);
uint renView_TransformPointCameraToWorld(VUVec4);
uint renView_TransformPointViewportToWorld(VUVec4,float);
uint renView_TransformPointCameraToScreen(VUVec4);
uint renView_TransformPointWorldToScreen(VUVec4);
uint renView_TransformPointWorldToCamera(VUVec4);
uint renView_SetupPipeline2(void);
uint renView_SetViewport(float,float,float,float,float,float);
uint renView_CalcOuterFrustumTransform(void);
uint renView_CalcViewportTransform(void);
uint renView_CalcFrustumTransform(void);
uint renView_Clip(float,float,float,float);
uint renView_SetupViewportClippingPlanes(void);
uint renView_RemoveCamera(camera_Client *);
uint renView_AddCamera(camera_Client *,uint);
uint renView_renView_(camera_Client *,uint);
uint renView_renView(void);


#endif