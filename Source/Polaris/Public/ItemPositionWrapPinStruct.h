#pragma once
#include "CoreMinimal.h"
#include "ItemPositionWrapPinStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FItemPositionWrapPinStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Key;
    
    FItemPositionWrapPinStruct();
};

