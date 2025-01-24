#ifndef STDRBTREE_H
#define STDRBTREE_H

#include "stdrbtreenode.h"

typedef struct stdRBTree {
    struct stdRBTreeNode *HeadPtr;
} stdRBTree;

extern void stdRBTree_rotateLeft(stdRBTree*,stdRBTreeNode *);
extern void stdRBTree_rotateRight(stdRBTree*,stdRBTreeNode *);
extern void stdRBTree_Find(stdRBTree*,uint);
extern void stdRBTree_DeleteTree(stdRBTree*,stdRBTreeNode *);
extern void stdRBTree_insertItem(stdRBTree*,void *,uint);
extern void stdRBTree_insertBalance(stdRBTree*,stdRBTreeNode *);
extern void stdRBTree_insertNode(stdRBTree*,stdRBTreeNode *,uint);
extern void stdRBTree_deleteNode(stdRBTree*,stdRBTreeNode *);
extern void stdRBTree_deleteFixup(stdRBTree*,stdRBTreeNode *);

#endif