#ifndef COLLISIONSERVER_H
#define COLLISIONSERVER_H

#include "structs.h"


uint collisionServer_Destructor_collisionServer(void);
uint collisionServer_FieldTest(CollisionSet,uint,VUVec4,bool,FieldTestOutput *);
uint collisionServer_CreateMasterContext(void);
uint collisionServer_collisionServer(svrParm const *);
uint collisionServer_sm_CollIn;
uint collisionServer_sm_CollOut;
uint collisionServer_vtbl;
uint collisionServer_sm_iBitfield3AtrID;
uint collisionServer_sm_iBitfield2AtrID;
uint collisionServer_sm_iBitfield1AtrID;
uint collisionServer_sm_iBitfield0AtrID;
uint collisionServer_sm_pMasterContext;


#endif