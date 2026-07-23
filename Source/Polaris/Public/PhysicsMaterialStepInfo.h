#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsMaterialStepInfo.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DecalSize;
    
    POLARIS_API FPhysicsMaterialStepInfo();
};

