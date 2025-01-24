#ifndef STDRBTREE_H
#define STDRBTREE_H

#include "structs.h"


uint stdRBTree_deleteFixup(stdRBTreeNode *);
uint stdRBTree_deleteNode(stdRBTreeNode *);
uint stdRBTree_insertNode(stdRBTreeNode *,uint);
uint stdRBTree_insertBalance(stdRBTreeNode *);
uint stdRBTree_insertItem(void *,uint);
uint stdRBTree_DeleteTree(stdRBTreeNode *);
uint stdRBTree_Find(uint);
uint stdRBTree_rotateRight(stdRBTreeNode *);
uint stdRBTree_rotateLeft(stdRBTreeNode *);


#endif