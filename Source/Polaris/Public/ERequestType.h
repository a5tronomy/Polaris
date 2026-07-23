#pragma once
#include "CoreMinimal.h"
#include "ERequestType.generated.h"

UENUM()
enum class ERequestType : uint8 {
    Invalid,
    ClearTarget,
    DrawMaterial,
    MAX,
};

