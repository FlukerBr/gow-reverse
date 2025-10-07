#include "creature.h"

List *gocreature_list = NULL;

void killAllCreature()
{
    List *current = gocreature_list;

    while (current != NULL)
    {
        *((float *)((uint32_t)current->item + 0x178)) = 0.0f;
        current = current->next;
    }
    
}