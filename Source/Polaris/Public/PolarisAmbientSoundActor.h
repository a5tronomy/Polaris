#pragma once
#include "CoreMinimal.h"
#include "AkAmbientSound.h"
#include "PolarisAmbientSoundActor.generated.h"

UCLASS()
class POLARIS_API APolarisAmbientSoundActor : public AAkAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableObjectOcclision;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsObjectOcclisionBeforeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEmotion;
    
    APolarisAmbientSoundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsCurrentlyPlayingForBP();
    
};

