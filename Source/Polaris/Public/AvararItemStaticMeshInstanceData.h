#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AvararItemStaticMeshInstanceData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAvararItemStaticMeshInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float animationStartSec;
    
    FAvararItemStaticMeshInstanceData();
};

