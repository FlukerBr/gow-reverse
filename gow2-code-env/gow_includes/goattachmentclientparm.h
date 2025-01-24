#ifndef GOATTACHMENTCLIENTPARM_H
#define GOATTACHMENTCLIENTPARM_H

#include "structs.h"


uint goAttachmentClientParm_goAttachmentClientParm_(uint,svrClientParmList *);
uint goAttachmentClientParm_goAttachmentClientParm(goAttachmentLoadParm const *,svrClientParmList *);
uint goAttachmentClientParm_ClearLocalMatrix(void);
uint goAttachmentClientParm_GetLocalMatrix(VUMat4 *);


#endif