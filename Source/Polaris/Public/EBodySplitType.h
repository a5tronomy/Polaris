#pragma once
#include "CoreMinimal.h"
#include "EBodySplitType.generated.h"

UENUM()
enum class EBodySplitType : uint8 {
    E_BodySplitType_None,
    E_BodySplitType_FullBody,
    E_BodySplitType_Hand,
};

