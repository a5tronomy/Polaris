#pragma once
#include "CoreMinimal.h"
#include "PartsSlotItemExclusiveSetStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPartsSlotItemExclusiveSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExclusivePSIPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExclusivePSIPositionNum;
    
    FPartsSlotItemExclusiveSetStruct();
};

