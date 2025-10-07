#ifndef STRING_H
#define STRING_H

#include "stdint.h"

// size_t (*strlen)(const char *) = ((size_t(*)(const char *))0x2C7260);
#define strcpy ((void (*)(char *, char *))0x2C7148)
#define memcpy ((void (*)(void *, void *, size_t))0x2C6ACC)
#define memset ((void (*)(void *, int, size_t))0x2C6C74)

#endif