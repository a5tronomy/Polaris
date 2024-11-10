#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbySoundManager.generated.h"

class APolarisAmbientSoundManager;
class APolarisSoundPositionActor;
class UAkAudioEvent;
class UAkComponent;
class USkeletalMeshComponent;

UCLASS()
class POLARIS_API ALobbySoundManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<APolarisAmbientSoundManager> AmbientSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LobbyFootStepSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LobbyJumpSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LobbyLandingSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayingSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<APolarisSoundPositionActor> LobbyListenerPositionActor;
    
    ALobbySoundManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void StopLobbyAmbientSoundBP();
    
    UFUNCTION(BlueprintCallable)
    void StopLobbyAmbientSound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartLobbyAmbientSoundBP();
    
    UFUNCTION(BlueprintCallable)
    void StartLobbyAmbientSound();
    
    UFUNCTION(BlueprintCallable)
    void SetObjectOcclusion(UAkComponent* EmitterAkComponent, float OccusionValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingSequencer(bool _IsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterAvatarEmotion(USkeletalMeshComponent* SrcSkelMesh, UAkAudioEvent* SrcAudioEvent, const FString& AttachName);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyLanding(uint8 surfaceType, AActor* characterActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyJump(uint8 surfaceType, AActor* characterActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnLobbyFootStep(uint8 surfaceType, AActor* characterActor, float characterSpeed);
    
};

