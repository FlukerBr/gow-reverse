#ifndef SVRCLIENTPARM_H
#define SVRCLIENTPARM_H

#include "structs.h"


uint svrClientParm_IFFPopContext(IFF_Header *,char const *);
uint svrClientParm_IFFPushContext(IFF_Header *,char const *);
uint svrClientParm_IFFProcessGroupEnd(IFF_Header *,char const *);
uint svrClientParm_IFFProcessGroupStart(IFF_Header *,char const *);
uint svrClientParm_IFFProcessClientParm(IFF_Header *,char const *);


#endif