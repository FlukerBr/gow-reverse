#ifndef ANMCLOTH_H
#define ANMCLOTH_H

#include "structs.h"


uint anmCloth_ByteSize(uint,uint);
uint anmCloth_process(void);
uint anmCloth_constrainSprings(void);
uint anmCloth_checkPlaneCollision_(anmPoint *);
uint anmCloth_checkPlaneCollision(int,int,int,int,int,int,VUVec4 *,uint *);
uint anmCloth_checkCollisions(anmPoint *,anmPoint *,anmPoint *,int,int,VUVec4 *,int *);
uint anmCloth_checkPointCollision(anmPoint *);
uint anmCloth_updatePinPointPos(void);
uint anmCloth_updateCollisionSpheres(void);
uint anmCloth_calcRestLengths(void);
uint anmCloth_subdivideY(void);
uint anmCloth_stepSimVerlet(VUVec4);
uint anmCloth_createMatrices(VUMat4 *);
uint anmCloth_initFromHierarchy(VUMat4 *);
uint anmCloth_init(void);
uint anmCloth_setTweaks(dc_tCloth const *);
uint anmCloth_initCollisionSpheres(dc_tCloth const *);


#endif