#pragma once
#include "CoreMinimal.h"
#include "EMaterialOverrideType.h"
#include "ItemPositionKey.h"
#include "MaterialOverrideParam.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct POLARIS_API FMaterialOverrideParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    EMaterialOverrideType OverrideType;
    
    UPROPERTY()
    FItemPositionKey TgtPosition;
    
    UPROPERTY()
    FName TgtMaterialSlotName;
    
    UPROPERTY()
    TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
    
    UPROPERTY()
    FString ResourceTag;
    
    FMaterialOverrideParam();
};

