#pragma once
#include "CoreMinimal.h"
#include "CustomizeItemDataIDForUE.h"
#include "DesignAssignStruct.h"
#include "CustomizeItemDataCIForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataCIForUE : public FCustomizeItemDataIDForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDesignValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDesignAssignStruct> CIDesignSlotArray;
    
    FCustomizeItemDataCIForUE();
};

