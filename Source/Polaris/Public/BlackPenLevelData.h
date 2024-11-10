#pragma once
#include "CoreMinimal.h"
#include "BlackPenLevelData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 level_now;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 level_max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 level_required;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 fight_money;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 cost_per_level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 reward_num;
    
    FBlackPenLevelData();
};

