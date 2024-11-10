#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEffectPositionId.h"
#include "EItemEffectParent.h"
#include "ItemAddAuraEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemAddAuraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* AddAuraEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemEffectParent EffectParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEffectPositionId AuraSocketPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    FItemAddAuraEffect();
};

