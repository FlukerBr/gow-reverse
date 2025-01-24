#ifndef RENMASTERSERVER_H
#define RENMASTERSERVER_H

#include "structs.h"


uint renMasterServer_Destructor_renMasterServer(void);
uint renMasterServer_GetFirstActiveView(void);
uint renMasterServer_ProcessServer(void);
uint renMasterServer_AllocateClient(svrClientParm const *);
uint renMasterServer_renMasterServer(svrParm const *);
uint renMasterServer_m_uMaxRenderArgBytes;
uint renMasterServer_m_uPeakNumRenderArgBytesUsed;
uint renMasterServer_m_uLastFrameNumRenderArgBytesUsed;
uint renMasterServer_m_pArgBuffer;
uint renMasterServer_m_uNextArg;
uint renMasterServer_m_uViewBucket;
uint renMasterServer_m_pCurrView;
uint renMasterServer_m_views;
uint renMasterServer_vtbl;
uint renMasterServer_m_pReflectors;


#endif