#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSoundPositionActor.generated.h"

class UAkAudioEvent;
class USceneComponent;

UCLASS()
class POLARIS_API APolarisSoundPositionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsSoundPlaying;
    
    UPROPERTY()
    bool IsBattlePositionActor;
    
    UPROPERTY()
    bool IsBattleBasePositionActor;
    
    UPROPERTY()
    int32 NoMultiPlayFrame;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* RootScene;
    
public:
    APolarisSoundPositionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void KeyOnFromThisActor(UAkAudioEvent* _Event);
    
};

