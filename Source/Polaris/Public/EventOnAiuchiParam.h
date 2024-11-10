#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventOnAiuchiParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnAiuchiParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> HitPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> HitVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> HitRotators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isSpecialAiuchi;
    
    POLARIS_API FEventOnAiuchiParam();
};

