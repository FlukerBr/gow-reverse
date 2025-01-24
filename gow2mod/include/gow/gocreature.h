#ifndef gocreature_h
#define gocreature_h

#include "stdint.h"

static void (*goCreature_goCreature)(uint32_t *) = ((void(*)(uint32_t*))0x218ED8);
static void (*goCreature_goCreature_Destructor)(uint32_t *, uint32_t) = ((void (*)(uint32_t *, uint32_t))0x219540);
static uint32_t (*goCreature_GetID)(uint32_t *) = ((uint32_t(*)(uint32_t *))0x21C6C0);
static void (*goCreature_SetHitPoints)(uint32_t *) = ((void (*)(uint32_t *))0x21BE98);

#endif