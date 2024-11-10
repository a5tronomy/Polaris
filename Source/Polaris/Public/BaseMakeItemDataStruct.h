#pragma once
#include "CoreMinimal.h"
#include "BaseMakeItemDataStruct.generated.h"

class UBaseMakeItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseMakeItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseMakeItem* BaseMakeItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseMakeItem* BaseMakeItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispBaseMakeItemDetail;
    
    FBaseMakeItemDataStruct();
};

