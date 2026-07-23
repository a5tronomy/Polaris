#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventOnDoubleKOParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDoubleKOParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> HitPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> HitVectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> HitRotators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSpecialKO;
    
    POLARIS_API FEventOnDoubleKOParam();
};

