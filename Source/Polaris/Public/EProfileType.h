#pragma once
#include "CoreMinimal.h"
#include "EProfileType.generated.h"

UENUM()
enum class EProfileType : uint8 {
    Self,
    Battle1,
    Battle2,
    Other,
};

