#pragma once
#include "CoreMinimal.h"
#include "EHoudiniPointCacheFileType.generated.h"

UENUM()
enum class EHoudiniPointCacheFileType : uint8 {
    Invalid,
    CSV,
    JSON,
    BJSON,
};

