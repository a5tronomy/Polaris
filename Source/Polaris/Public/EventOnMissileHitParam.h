#pragma once
#include "CoreMinimal.h"
#include "EventOnMissileHitParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileHitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFloorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWallHit;
    
    POLARIS_API FEventOnMissileHitParam();
};

