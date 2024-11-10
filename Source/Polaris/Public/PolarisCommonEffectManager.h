#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonEffect.h"
#include "CommonEffectInstanceManager.h"
#include "PolarisCommonEffectManager.generated.h"

class APolarisCharacterEffectManager;
class UPolarisEffectDataAsset;

UCLASS()
class POLARIS_API APolarisCommonEffectManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, FCommonEffect> ParticleMap;
    
    UPROPERTY()
    TMap<int32, FCommonEffectInstanceManager> InstanceMap;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, TWeakObjectPtr<APolarisCharacterEffectManager>> CharacterEffectManagers;
    
    UPROPERTY()
    TWeakObjectPtr<UPolarisEffectDataAsset> Debug_DataAsset;
    
public:
    APolarisCommonEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisibilityAuraEffects(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAll(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyTick(const int32 tick_count, const float delta_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAllCommonEffect();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityAllParticles();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanceledCommonEffect(int32 player_id, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalledCommonEffect(int32 player_id, int32 ID);
    
};

