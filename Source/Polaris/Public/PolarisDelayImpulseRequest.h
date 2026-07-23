#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisDelayImpulseRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPolarisDelayImpulseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageImpulseStrengthType ImpulseStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    POLARIS_API FPolarisDelayImpulseRequest();
};

