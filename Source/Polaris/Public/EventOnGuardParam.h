#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnGuardParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnGuardParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitDirectionNormal;
    
    POLARIS_API FEventOnGuardParam();
};

