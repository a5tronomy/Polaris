#pragma once
#include "CoreMinimal.h"
#include "NiagaraActor.h"
#include "KamuiHash.h"
#include "SoundPlayerVoiceHandle.h"
#include "PolarisNiagaraActor.generated.h"

class AActor;

UCLASS()
class POLARIS_API APolarisNiagaraActor : public ANiagaraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPlaySoundByBiginPlay;
    
private:
    UPROPERTY()
    FKamuiHash ParticleAssetNameHash;
    
    UPROPERTY()
    FSoundPlayerVoiceHandle ParticleSoundHandle;
    
    UPROPERTY()
    bool IsDelayNextTick;
    
public:
    APolarisNiagaraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopNiagaraSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayNiagaraSoundOtherActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void PlayNiagaraSound();
    
};

