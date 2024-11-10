#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/PostProcessVolume.h"
#include "PolarisPostProcessVolume.generated.h"

UCLASS()
class POLARIS_API APolarisPostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxBrushSize;
    
    APolarisPostProcessVolume(const FObjectInitializer& ObjectInitializer);

};

