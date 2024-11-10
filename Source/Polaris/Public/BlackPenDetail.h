#pragma once
#include "CoreMinimal.h"
#include "BlackPenDetail.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenDetail {
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
    int32 level_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_now;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 xp_next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 remaining_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool premium_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ex_purchase_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 level_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 premium_price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 premium_ex_price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 premium_expected_coin;
    
    FBlackPenDetail();
};

