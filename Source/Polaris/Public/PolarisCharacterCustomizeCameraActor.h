#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisCharacterCameraActor.h"
#include "PolarisCharacterCustomizeCameraActor.generated.h"

UCLASS()
class POLARIS_API APolarisCharacterCustomizeCameraActor : public APolarisCharacterCameraActor {
    GENERATED_BODY()
public:
    APolarisCharacterCustomizeCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void RequestCaptureScene(TArray<FColor>& OutColorData);
    
};

