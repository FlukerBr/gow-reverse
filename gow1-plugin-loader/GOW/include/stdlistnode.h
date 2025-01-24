#ifndef STDLISTNODE_H
#define STDLISTNODE_H

typedef struct stdListNode {
    struct stdListNode *_pNextItem;
    struct stdListNode *_pPrevItem;
} stdListNode;

#endif