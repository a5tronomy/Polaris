#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnPoisonDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPoisonDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitDirectionNormal;
    
    POLARIS_API FEventOnPoisonDamageParam();
};

