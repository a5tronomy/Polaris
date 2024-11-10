#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhotoModeDebugActor.generated.h"

class APhotoFeatureColldier;
class APhotoModeActor;

UCLASS()
class POLARIS_API APhotoModeDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    APhotoModeActor* PhotoModeActor;
    
    UPROPERTY(BlueprintReadWrite)
    APhotoFeatureColldier* PhotoFeatureCollider;
    
    APhotoModeDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SearchPhotoModeActor();
    
};

