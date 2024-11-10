#pragma once
#include "CoreMinimal.h"
#include "BlackPenBasic.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 round_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName image_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 level_now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 remaining_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool premium_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 total_mission_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 clear_mission_num;
    
    FBlackPenBasic();
};

