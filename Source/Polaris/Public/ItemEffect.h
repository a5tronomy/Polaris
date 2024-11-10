#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEffectPositionId.h"
#include "EItemEffectParent.h"
#include "ItemEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ItemEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemEffectParent EffectParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEffectPositionId PlayerSocketPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemBoneName;
    
    UPROPERTY()
    int32 ItemPositionId;
    
    UPROPERTY()
    FName ExtraBoneName;
    
    UPROPERTY()
    int32 AccessoryNum;
    
    FItemEffect();
};

