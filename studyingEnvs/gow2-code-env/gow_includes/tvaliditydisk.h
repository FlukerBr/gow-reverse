#ifndef TVALIDITYDISK_H
#define TVALIDITYDISK_H

#include "structs.h"


uint tValidityDisk_GetRandomHole(int);
uint tValidityDisk_InsideDisk(VUVec4);
uint tValidityDisk_PropigateInvalid(void);
uint tValidityDisk_GetNextHoleInPath(int,int);
uint tValidityDisk_GetRadiusHole_(float,uint *,int);
uint tValidityDisk_GetRadiusHole(int,float);
uint tValidityDisk_CalculateInvalid(int);
uint tValidityDisk_Update(VUMat4 *,VUMat4);
uint tValidityDisk_GetHole(VUVec4);
uint tValidityDisk_GetColumn(VUVec4);
uint tValidityDisk_GetRow(VUVec4);
uint tValidityDisk_GetAdjacentHole(int,int);
uint tValidityDisk_RemoveDisk(tValidityDisk *);
uint tValidityDisk_AddDisk(tValidityDisk *);
uint tValidityDisk_Destructor_tValidityDisk(void);
uint tValidityDisk_tValidityDisk(void);
uint tValidityDisk___dl(void *);
uint tValidityDisk_Allocate(wadContext *);
uint tValidityDisk_sm_Closed;
uint tValidityDisk_sm_Path;
uint tValidityDisk_sm_Nodes;
uint tValidityDisk_sm_tValidityDiskMultiPool;
uint tValidityDisk_sm_AStarSet;
uint tValidityDisk_vtbl;
uint tValidityDisk_sm_Disks;
uint tValidityDisk_sm_iNumDisks;
uint tValidityDisk_sm_iNumClosed;
uint tValidityDisk_sm_iPathSize;
uint tValidityDisk_sm_iNumNodes;


#endif