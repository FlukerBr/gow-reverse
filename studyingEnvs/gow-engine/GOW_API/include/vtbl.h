#ifndef VTBL_H
#define VTBL_H

#include "type.h"

typedef struct __vtbl_ptr_type_ {
    short int __delta;
    short int __index;
    void *__pfn;
} __vtbl_ptr_type;

#endif
