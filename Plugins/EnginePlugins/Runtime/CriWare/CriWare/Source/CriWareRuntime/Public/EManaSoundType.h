#pragma once
#include "CoreMinimal.h"
#include "EManaSoundType.generated.h"

UENUM()
enum class EManaSoundType : uint8 {
    Adx,
    HCA,
    Num,
    Unknown = 255,
};

