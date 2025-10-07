#ifndef TDECISIONTREE_H
#define TDECISIONTREE_H

#include "structs.h"


uint tDecisionTree_GetRandomAction(dc_tDTreeSlotNode const *,goCreature *,goCreature *,float,ushort,ushort);
uint tDecisionTree_GetRandomBlock(dc_tDTreeSlotNode const *,goCreature *,goCreature *);
uint tDecisionTree_MakeDecision_(dc_tDTreeBaseNode const *,goCreature *,goCreature *);
uint tDecisionTree_TestPassDecisions(dc_tSlotBase const *,goCreature *,goCreature *);
uint tDecisionTree_MakeDecision(goCreature *,goCreature *);
uint tDecisionTree_sm_GlobalUpdateFrame;
uint tDecisionTree_sm_fRepressMoveTime;


#endif