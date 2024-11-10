#pragma once
#include "CoreMinimal.h"
#include "AbilityItemIdWrapPinStruct.h"
#include "EPolarisGenericItemEvent.h"
#include "EventOnGenericItemEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnGenericItemEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAbilityItemIdWrapPinStruct abilityItem_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisGenericItemEvent item_event;
    
    POLARIS_API FEventOnGenericItemEventParam();
};

