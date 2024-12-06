#pragma once
#include "CoreMinimal.h"
#include "EStageImpulseStrengthType.generated.h"

UENUM()
enum class EStageImpulseStrengthType : uint8 {
    None,
    W UMETA(DisplayName = "Normal Hit"),
    W_Mid UMETA(DisplayName = "Mid Normal Hit"),
    S UMETA(DisplayName = "Strong Hit"),
    SS UMETA(DisplayName = "Special Strong Hit"),
    Term,
};

