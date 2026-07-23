#pragma once
#include "CoreMinimal.h"
#include "EventOnMissileGuardParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileGuardParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnMissileGuardParam();
};

