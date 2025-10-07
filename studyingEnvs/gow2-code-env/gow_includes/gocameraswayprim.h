#ifndef GOCAMERASWAYPRIM_H
#define GOCAMERASWAYPRIM_H

#include "structs.h"


uint goCameraSwayPrim_GetSwayTransform(void);
uint goCameraSwayPrim_goCameraSwayPrim(goScript *);
uint goCameraSwayPrim_Tween(goCameraSwayPrim const *,goCameraSwayPrim const *,goCameraSwayPrim *,float);
uint goCameraSwayPrim_Fade(goCameraSwayPrim const *,goCameraSwayPrim *,float);


#endif