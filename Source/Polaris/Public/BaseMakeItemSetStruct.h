#pragma once
#include "CoreMinimal.h"
#include "BaseMakeItemSetStruct.generated.h"

class UBaseMakeItem;
class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseMakeItemSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseMakeItem* SourceBMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPrefab* ScalpMaskSourceIP;
    
    FBaseMakeItemSetStruct();
};

