#ifndef ERL_H
#define ERL_H

#include "type.h"

typedef struct symbol_t {
    char *name;
    u32 address;
    struct symbol_t *next;
} symbol_t;

typedef struct erl_record_t {
    u8 * bytes;
    u32 fullsize;
    char *name;
    symbol_t *symbols[6];
    struct erl_record_t *next;
} erl_record_t;


#endif