#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnWallBreakParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnWallBreakParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 wall_attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnWallBreakParam();
};

