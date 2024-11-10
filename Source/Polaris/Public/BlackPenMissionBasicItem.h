#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionBasicItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionBasicItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 remaining_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 clear_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 total_num;
    
    FBlackPenMissionBasicItem();
};

