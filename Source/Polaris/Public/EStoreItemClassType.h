#pragma once
#include "CoreMinimal.h"
#include "EStoreItemClassType.generated.h"

UENUM()
enum class EStoreItemClassType : uint8 {
    Error,
    Single,
    Set,
    Pack,
    Bundle,
};

