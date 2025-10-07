#ifndef ALLOC_H
#define ALLOC_H

#include "stdint.h"

#define HEAP_START 0xA0000
#define HEAP_END   0xC0000
#define HEAP_SIZE  (HEAP_END - HEAP_START)

#define BLOCK_START 0xC0000
#define BLOCK_END 0xD0000

#define BLOCK_SIZE sizeof(Block)
#define MAX_BLOCK_AMOUNT (uint32_t)((BLOCK_END-BLOCK_START) / sizeof(Block))

typedef struct Block
{
    void *address;
    size_t size;
    bool is_free;
} Block;

typedef struct
{
    uint32_t allocated_size;
    Block *blocks;
} Allocator;

void *my_malloc(size_t size);
void my_free(void *address);
uint32_t *findFreeSpace(size_t size);
void initAllocator();
uint32_t getFreeSpaceSize();

#endif