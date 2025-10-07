#include "alloc.h"
#include "stdio.h"

Allocator allocator;

void *my_malloc(size_t size)
{
    if (size == 0 || getFreeSpaceSize() < size)
    {
        printf("nao ha espaco na heap!\n");
        return NULL;
    }

    return (void *)findFreeSpace(size);
}

uint32_t getFreeSpaceSize()
{
    return HEAP_SIZE - allocator.allocated_size;
}

Block *findFreeBlock()
{
    for (size_t i = 0; i < MAX_BLOCK_AMOUNT - 1; i++)
    {
        if (allocator.blocks[i].is_free)
        {
            return &allocator.blocks[i];
        }
    }
    printf("nao foi possivel encontrar bloco\n");
    return NULL;
}

bool isSpaceFree(uint32_t *address, size_t size)
{
    size_t i;
    for (i = 0; i < MAX_BLOCK_AMOUNT-1; i++)
    {
        if (!allocator.blocks[i].is_free)
        {
            if (((uint32_t)address < (uint32_t)allocator.blocks[i].address + allocator.blocks[i].size 
            && (uint32_t)allocator.blocks[i].address < (uint32_t)address + size))
            {   
                // printf("bloco %d nao livre %p %p %p %p\n", i, address, (uint32_t*)((uint32_t)address+size), allocator.blocks[i].address, (uint32_t*)((uint32_t)allocator.blocks[i].address+ allocator.blocks[i].size));
                return false;
            }
        }
        else
        {
            // printf("bloco %d livre %p %p %p %p\n", i, address, (uint32_t*)((uint32_t)address+size), allocator.blocks[i].address, (uint32_t*)((uint32_t)allocator.blocks[i].address+ allocator.blocks[i].size));
        }
        
    }

    

    return true;
}

uint32_t *findFreeSpace(size_t size)
{   
    Block *block = findFreeBlock();

    if (block == NULL)
    {
        return NULL;
    }
    
    uint32_t *address = (uint32_t *)HEAP_START;
    uint32_t new_allocation_end_addr;

    for (size_t i = 0; (new_allocation_end_addr <= HEAP_END); i++)
    {       
        if (!allocator.blocks[i].is_free)
        {
            if (isSpaceFree(address, size))
            {
                block->address = address;
                block->is_free = false;
                block->size = size;
                return address;
            }
            
            address = (uint32_t *)((uint32_t)allocator.blocks[i].address + allocator.blocks[i].size);
            new_allocation_end_addr = (uint32_t)address + size;
        }
    }

    // printf("nao foi possivel encontrar espaco livre\n");
    return NULL;
}

void my_free(void *address)
{
    for (size_t i = 0; i < MAX_BLOCK_AMOUNT - 1; i++)
    {
        if (allocator.blocks[i].address == address)
        {
            allocator.blocks[i].is_free = true;
            allocator.allocated_size -= allocator.blocks[i].size;
        }
    }
}

void initAllocator()
{
    allocator.allocated_size = 0;
    allocator.blocks = (Block *)BLOCK_START;

    for (size_t i = 0; i < MAX_BLOCK_AMOUNT - 1; i++)
    {
        allocator.blocks[i].address = NULL;
        allocator.blocks[i].size = 0;
        allocator.blocks[i].is_free = true;
    }
}