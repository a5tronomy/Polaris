#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDebugCustomizeCameraActor.generated.h"

UCLASS()
class POLARIS_API APolarisDebugCustomizeCameraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> CameraPositionActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CaptureLengthAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CaptureLengthUpDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCaptureProcessing;
    
    APolarisDebugCustomizeCameraActor(const FObjectInitializer& ObjectInitializer);

};

