#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnChangeCharacterCustomizeBGParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterCustomizeBGParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    POLARIS_API FEventOnChangeCharacterCustomizeBGParam();
};

