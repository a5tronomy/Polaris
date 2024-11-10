#pragma once
#include "CoreMinimal.h"
#include "ESubColorKeySetsType.generated.h"

UENUM()
enum class ESubColorKeySetsType : uint8 {
    E_TipColor,
    E_MidColor,
    E_BaseColor_H,
    E_BaseColor_L,
    E_BaseColor_H2,
    E_BaseColor_L2,
    E_BaseColor_H3,
    E_BaseColor_L3,
    E_BaseColor,
    E_SSS_InnerColor,
    E_SSS_OuterColor,
};

