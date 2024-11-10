#pragma once
#include "CoreMinimal.h"
#include "CustomizeItemDataIDForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataIDForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemUniqueId;
    
    FCustomizeItemDataIDForUE();
};

