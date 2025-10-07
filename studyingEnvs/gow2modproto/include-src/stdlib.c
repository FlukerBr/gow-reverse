#include "stdlib.h"

// void* malloc(uint32_t size)
// {
//     return ((void *(*)(uint32_t))0x2C7930)(size);
// }
// 
// void free(void *ptr) 
// {
//     ((void (*) (void *))0x2C7980)(ptr);
// }
// 
// int atoi(const char *str)
// {
//     return ((int (*) (const char *))0x2C7830)(str);
// }
// 
// uint32_t rand()
// {
//     return ((uint32_t (*)(void))0x2C8448)();
// }