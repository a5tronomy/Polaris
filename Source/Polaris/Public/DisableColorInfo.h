#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DisableColorInfo.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDisableColorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DisableColorCISlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 colorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ForceChangeColor;
    
    FDisableColorInfo();
};

