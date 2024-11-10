#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "BaseSESTItemDataStruct.generated.h"

class UBaseSESTItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseSESTItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseSESTItem* BaseSESTItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseSESTItem* BaseSESTItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispBaseSESTItemDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSESTBakeData SESTBakeData;
    
    FBaseSESTItemDataStruct();
};

