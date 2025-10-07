#ifndef CSPACEPARTITION_H
#define CSPACEPARTITION_H

#include "structs.h"


uint CSpacePartition_MatchPositionInBase(VUMat4 const *,VUVec4,dc_tSpacePartitionBase const *);
uint CSpacePartition_MatchPosition(VUMat4 const *,VUVec4);
uint CSpacePartition_SetBaseToOrigin(VUMat4 const *,dc_tSpacePartitionBase const *,VUMat4 *);
uint CSpacePartition_AddMatch(dc_tSpacePartitionElement const *);
uint CSpacePartition_Initialize(dc_tSpacePartition const *);
uint CSpacePartition_CSpacePartition(void);


#endif