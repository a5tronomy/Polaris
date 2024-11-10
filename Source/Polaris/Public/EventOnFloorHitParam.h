#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnFloorHitParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFloorHitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Damage;
    
    POLARIS_API FEventOnFloorHitParam();
};

