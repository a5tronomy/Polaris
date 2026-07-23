#pragma once
#include "CoreMinimal.h"
#include "EMissileSoundEventType.generated.h"

UENUM()
enum class EMissileSoundEventType {
    MissileSoundEventType_None,
    MissileSoundEventType_RegularHit,
    MissileSoundEventType_FloorHit,
    MissileSoundEventType_WallHit,
    MissileSoundEventType_Guard,
    MissileSoundEventType_Expired,
    MissileSoundEventType_MissileClash,
    MissileSoundEventType_Cancel,
    MissileSoundEventType_Spawn,
};

