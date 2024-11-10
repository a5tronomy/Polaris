#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "PolarisPlayerCameraManager.generated.h"

UCLASS(NonTransient)
class POLARIS_API APolarisPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D BaseScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAdjustHorizonalFOV;
    
    APolarisPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetFOVAngleNative() const;
    
};

