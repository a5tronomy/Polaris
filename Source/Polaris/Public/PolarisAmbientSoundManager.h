#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisAmbientSoundManager.generated.h"

class APolarisAmbientSoundActor;
class APolarisAmbientSoundBoxActor;

UCLASS()
class POLARIS_API APolarisAmbientSoundManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<APolarisAmbientSoundActor*> AmbientSoundActorArray;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<APolarisAmbientSoundBoxActor*> CurrentAmbientSoundBoxActorArray;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAmbientSoundPlaying;
    
    APolarisAmbientSoundManager(const FObjectInitializer& ObjectInitializer);

};

