#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDramaTrackActorTransformType.h"
#include "PolarisDramaTrackActor.generated.h"

UCLASS()
class POLARIS_API APolarisDramaTrackActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    EDramaTrackActorTransformType ActorTransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FName FighterNameForFate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FName FighterNameForEffect;
    
    APolarisDramaTrackActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPlayerID();
    
};

