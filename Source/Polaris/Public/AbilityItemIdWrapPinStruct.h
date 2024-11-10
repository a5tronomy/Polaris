#pragma once
#include "CoreMinimal.h"
#include "AbilityItemIdWrapPinStruct.generated.h"

USTRUCT(BlueprintType)
struct FAbilityItemIdWrapPinStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Key;
    
    POLARIS_API FAbilityItemIdWrapPinStruct();
};

