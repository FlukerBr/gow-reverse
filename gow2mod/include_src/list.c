#include "list.h"
#include "alloc.h"
#define printf ((void (*)(const char *, ...))0x002C7740)

int insertItem(List **list, void *item, size_t size)
{
    List *new_item = (List *)my_malloc(sizeof(List));

    if (new_item == NULL)
    {
        printf("Bad allocation!!!\n");
        return 1;
    }

    new_item->item = item;
    new_item->item_size = size;
    new_item->next = *list;
    *list = new_item;
    
    return 0;
}

bool isEmpty(List *list)
{
    return list==NULL;
}

void showList(List *list)
{
    List *current = list;
    uint32_t i = 0;
    
    while (current != NULL)
    {
        printf("%d %p\n", i, current->item);
        current = current->next;
        i++;
    }
    
}

int removeItem(List **list, void *item)
{
    if (isEmpty(*list))
    {
        return 0;
    }

    List *previous=NULL, *current=*list;

    while (current!=NULL && current->item!=item)
    {
        previous=current;
        current=current->next;
    }

    if (current != NULL)
    {
        previous->next = current->next;
        my_free(current);
        return 0;
    }

    printf("Item nao encontrado! %p\n", item);
    return 1;
};