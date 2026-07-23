#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DummyMobEffect.generated.h"

USTRUCT(BlueprintType)
struct FDummyMobEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bfired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntervalFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EffectOffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMultiEmit;
    
    POLARIS_API FDummyMobEffect();
};

