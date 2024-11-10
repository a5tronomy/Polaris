#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEffectPositionId.h"
#include "AuraItem.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FAuraItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ItemEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEffectPositionId ItemPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OffsetRotation;
    
    POLARIS_API FAuraItem();
};

