#pragma once
#include "CoreMinimal.h"
#include "PartsSlotItemExclusiveSetStruct.h"
#include "PartsSlotItemSetStruct.generated.h"

class UPartsSlotItem;

USTRUCT(BlueprintType)
struct POLARIS_API FPartsSlotItemSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPartsSlotItem* SourcePSI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isUsePSI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPartsSlotItemExclusiveSetStruct> ExclusivePSISet;
    
    FPartsSlotItemSetStruct();
};

