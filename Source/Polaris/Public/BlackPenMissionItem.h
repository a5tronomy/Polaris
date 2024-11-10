#pragma once
#include "CoreMinimal.h"
#include "EBlackPenMissionType.h"
#include "BlackPenMissionItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlackPenMissionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 target_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 clear_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_reward_value;
    
    FBlackPenMissionItem();
};

