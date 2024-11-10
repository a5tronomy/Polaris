#pragma once
#include "CoreMinimal.h"
#include "EventOnThrowDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnThrowDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Damage;
    
    POLARIS_API FEventOnThrowDamageParam();
};

