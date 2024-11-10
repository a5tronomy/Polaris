#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionBase.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 remaining_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 base_number;
    
    FBlackPenMissionBase();
};

