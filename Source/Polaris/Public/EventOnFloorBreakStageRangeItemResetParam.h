#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnFloorBreakStageRangeItemResetParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFloorBreakStageRangeItemResetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_reset_pos;
    
    POLARIS_API FEventOnFloorBreakStageRangeItemResetParam();
};

