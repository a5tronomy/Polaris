#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem_Core.h"
#include "BlackPenItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItem : public FBlackPenItem_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool premium_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName icon_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBlackPenItem_Core> detail_datas;
    
    FBlackPenItem();
};

