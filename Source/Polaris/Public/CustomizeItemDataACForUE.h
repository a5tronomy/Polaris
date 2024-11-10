#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizeItemDataCIForUE.h"
#include "CustomizeItemDataACForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataACForUE : public FCustomizeItemDataCIForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAccValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString OffsetSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform OffsetSlotTransform;
    
    FCustomizeItemDataACForUE();
};

