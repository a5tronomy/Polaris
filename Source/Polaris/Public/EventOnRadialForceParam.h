#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnRadialForceParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRadialForceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    POLARIS_API FEventOnRadialForceParam();
};

