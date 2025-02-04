#ifndef RENMATERIALSERVER_H
#define RENMATERIALSERVER_H

#include "structs.h"


uint renMaterialServer_ProcessServer(void);
uint renMaterialServer_SignalWadLoadCompleted(void);
uint renMaterialServer_CreateMasterContext(void);
uint renMaterialServer_Destructor_renMaterialServer(void);
uint renMaterialServer_FixSortKeys(void);
uint renMaterialServer_FixSortKeysWithinLayer(ushort *,ushort *,ulong,ulong,ushort,int);
uint renMaterialServer_FixSortKeysByLayer(ushort *,ushort *,ulong,ulong,ushort,int);
uint renMaterialServer_FindSpecials(int);
uint renMaterialServer_GroupGfxLoads(uint,uint);
uint renMaterialServer_BuildMaterialKeyMap(void);
uint renMaterialServer_GetNumberOfSortKeys(void);
uint renMaterialServer_renMaterialServer(svrParm const *);
uint renMaterialServer_ResetBuffers(void);
uint renMaterialServer_sm_Keys;
uint renMaterialServer_sm_pMaterialKeyMap;
uint renMaterialServer_sm_pNonTexturedDMAParm;
uint renMaterialServer_sm_pTexturedDMAParm;
uint renMaterialServer_sm_pLastNonTexturedDMABuffer;
uint renMaterialServer_sm_iLastNonTexturedDMABufferUsage;
uint renMaterialServer_sm_iPeakNonTexturedDMABufferUsage;
uint renMaterialServer_sm_pLastTexturedDMABuffer;
uint renMaterialServer_sm_pNextNonTexturedDMABuffer;
uint renMaterialServer_sm_iNonTexturedDMABuffSize;
uint renMaterialServer_sm_pNonTexturedDMAInstanceBuffer;
uint renMaterialServer_sm_iLastTexturedDMABufferUsage;
uint renMaterialServer_sm_iPeakTexturedDMABufferUsage;
uint renMaterialServer_sm_pNextTexturedDMABuffer;
uint renMaterialServer_sm_iTexturedDMABuffSize;
uint renMaterialServer_sm_pTexturedDMAInstanceBuffer;
uint renMaterialServer_vtbl;
uint renMaterialServer_sm_uMaxNonTexturedDMAInstances;
uint renMaterialServer_sm_uMaxTexturedDMAInstances;
uint renMaterialServer_sm_bForcedSort;


#endif