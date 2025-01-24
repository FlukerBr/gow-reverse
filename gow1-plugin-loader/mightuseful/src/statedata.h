#ifndef STATEDATA_H
#define STATEDATA_H

#include "stdint.h"
#include "vu.h"

typedef struct _StateData
{
    VUMat4 playerMatrix;
    uint32_t creatureFlags1;
    uint32_t creatureFlags2;
    uint32_t debugFlags;
    uint32_t nDeaths;
    uint64_t firstTime;
    unsigned char firstTimeCounter[4];
    float playTime;
    float healthMeter;
    float magicMeter;
    float subWeaponMeter;
    float godMeter;
    float rampMagicMeter;
    uint8_t healthMeterLevel;
    uint8_t magicMeterLevel;
    uint8_t subWeaponMeterMeterLevel;
    uint16_t powerUpPoints;
    uint16_t bladesPoints;
    uint16_t earthPoints;
    uint16_t icePoints;
    uint16_t lightningPoints;
    uint16_t windPoints;
    uint16_t bonePoints;
    uint16_t hammerPoints;
    uint16_t medusaPoints;
    uint16_t olympusPoints;
    uint8_t bladesLevel;
    uint8_t earthLevel;
    uint8_t iceLevel;
    uint8_t lightningLevel;
    uint8_t windLevel;
    uint8_t boneLevel;
    uint8_t hammerLevel;
    uint8_t medusaLevel;
    uint8_t olympusLevel;
    uint8_t pickupSelected;
    uint8_t subweaponSelected;
    uint8_t godModeSelected;
    uint8_t nHealthShardPickups;
    uint8_t nMagicShardPickups;
    uint8_t nSirenPiecePickups;
    uint16_t hasPickupBits;
    unsigned char dummy[12];
} StateData;



#endif