#pragma once
#include "CoreMinimal.h"
#include "AbilityItemData.generated.h"

class UItemPrefab;

USTRUCT(BlueprintType)
struct FAbilityItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 AbilityID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UItemPrefab* ItempPrefab;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 ItemLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 AccessoryNum;
    
    POLARIS_API FAbilityItemData();
};

