#ifndef STDRBTREENODE_H
#define STDRBTREENODE_H

#include "type.h"

typedef struct stdRBTreeNode {
    UINT32 SortKey;
    UINT32 ContentPtr;
    UINT16 ParentNode;
    UINT16 LeftNode;
    UINT16 RightNode;
    undefined field5_0xe;
    undefined field6_0xf;
} stdRBTreeNode;

extern stdRBTreeNode *stdRBTreeNode_NIL;
extern UINT32 *stdRBTreeNode_sm_pRBTreePool;
extern UINT32 stdRBTreeNode_sm_iStart16;

extern void stdRBTreeNode_InitHeap(stdRBTreeNode *);
extern stdRBTreeNode * stdRBTreeNode___nw(stdRBTreeNode* ,uint);
extern void stdRBTreeNode___dl(stdRBTreeNode *,void *);
extern stdRBTreeNode * stdRBTreeNode_stdRBTreeNode(stdRBTreeNode *);
extern void stdRBTreeNode_setRed(stdRBTreeNode *);
extern void stdRBTreeNode_setBlack(stdRBTreeNode *);

#endif