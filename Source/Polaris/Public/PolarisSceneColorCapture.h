#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSceneColorCapture.generated.h"

class UPolarisSceneColorCaptureComponent;

UCLASS(MinimalAPI)
class APolarisSceneColorCapture : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisSceneColorCaptureComponent* CaptureComponent;
    
public:
    APolarisSceneColorCapture(const FObjectInitializer& ObjectInitializer);

};

