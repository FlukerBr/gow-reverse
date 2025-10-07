#ifndef SPHEREGRID_H
#define SPHEREGRID_H

#include "structs.h"


uint SphereGrid_FindPairs(void **,int);
uint SphereGrid_Test_(VUVec4,void **,int,collisionInput const *);
uint SphereGrid_Test(VUVec4,void **,int);
uint SphereGrid_Add(VUVec4,void *,uint);
uint SphereGrid_Clear(void);
uint SphereGrid_Destructor_SphereGrid(void);
uint SphereGrid_SphereGrid(char *,int,int);


#endif