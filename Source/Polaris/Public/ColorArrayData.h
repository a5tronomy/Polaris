#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorArrayData.generated.h"

USTRUCT(BlueprintType)
struct FColorArrayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FColor> Colors;
    
    POLARIS_API FColorArrayData();
};

