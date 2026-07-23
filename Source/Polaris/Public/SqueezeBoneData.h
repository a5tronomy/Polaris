#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SqueezeBoneData.generated.h"

USTRUCT(BlueprintType)
struct FSqueezeBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    POLARIS_API FSqueezeBoneData();
};

