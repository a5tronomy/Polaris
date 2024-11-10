#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnCriticalHitParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnCriticalHitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitDirectionNormal;
    
    POLARIS_API FEventOnCriticalHitParam();
};

