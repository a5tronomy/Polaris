#pragma once
#include "CoreMinimal.h"
#include "EAvatarItemInvalidFlags.generated.h"

UENUM()
enum class EAvatarItemInvalidFlags : uint16 {
    None,
    NotMatchExclusiveItemIds,
    NotMatchExclusivePartTypes,
    NotEnoughFullBodyExclusiveParamters = 4,
    DuplicatedColorSlot = 8,
    OverSizeColorSlot = 16,
    DisableLocalizeTextId = 32,
    InvalidPrefab = 64,
    InvalidThumbnail = 128,
    NotEnoughHeadReplacePrefab = 256,
    NotEnoughBeardReplacePrefab = 512,
    NotEnoughExclusiveItemIds = 1024,
};

