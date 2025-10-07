#ifndef LIST_H
#define LIST_H

#include "stdint.h"

typedef struct _List {

    void* item;
    size_t item_size;
    struct _List *next;
} List;

int insertItem(List **list, void *item, size_t size);
int removeItem(List **list, void *item);
void showList(List *list);

#endif