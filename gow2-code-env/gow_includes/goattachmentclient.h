#ifndef GOATTACHMENTCLIENT_H
#define GOATTACHMENTCLIENT_H

#include "structs.h"


uint goAttachmentClient_Destructor_goAttachmentClient(void);
uint goAttachmentClient_IsEnabled(void);
uint goAttachmentClient_GetAnimator(void);
uint goAttachmentClient_CalcLWMatrix(VUMat4 *);
uint goAttachmentClient_Attach(goAttachmentClientParm const *);
uint goAttachmentClient_goAttachmentClient_(goAttachmentClientParm const *);
uint goAttachmentClient_goAttachmentClient(svrClientParm const *);
uint goAttachmentClient_gMasterTimeStamp;


#endif