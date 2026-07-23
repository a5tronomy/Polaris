#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisCharacterMotionOverrideDataNode.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisCharacterMotionOverrideDataNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 JointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OverrideRotation;
    
    FPolarisCharacterMotionOverrideDataNode();
};

