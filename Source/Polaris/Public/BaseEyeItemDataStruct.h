#pragma once
#include "CoreMinimal.h"
#include "BaseEyeItemDataStruct.generated.h"

class UBaseEyeItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseEyeItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseEyeItem* BaseEyeItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseEyeItem* BaseEyeItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispBaseEyeItemDetail;
    
    FBaseEyeItemDataStruct();
};

