#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisAmbientSoundShapeActor.generated.h"

class APolarisAmbientSoundActor;
class UAkAudioEvent;

UCLASS()
class POLARIS_API APolarisAmbientSoundShapeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SourceAmbientSoundEvent;
    
    UPROPERTY(BlueprintReadOnly)
    APolarisAmbientSoundActor* AmbientActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableObjectOcclision;
    
    APolarisAmbientSoundShapeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector GetCurrentListenerPosition() const;
    
};

