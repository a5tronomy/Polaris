#pragma once
#include "CoreMinimal.h"
#include "EBlackPenItemType.h"
#include "BlackPenItem_Core.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItem_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText item_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlackPenItemType item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool consumable_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName parent_item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 order_no;
    
    FBlackPenItem_Core();
};

