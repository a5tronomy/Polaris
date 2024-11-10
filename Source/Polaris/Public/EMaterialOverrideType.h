#pragma once
#include "CoreMinimal.h"
#include "EMaterialOverrideType.generated.h"

UENUM()
enum class EMaterialOverrideType : uint8 {
    E_MaterialOverrideType_None,
    E_MaterialOverrideType_CommonSkin,
    E_MaterialOverrideType_StockingSkin,
};

