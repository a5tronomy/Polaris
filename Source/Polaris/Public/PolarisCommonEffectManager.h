#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CommonEffect.h"
#include "CommonEffectInstanceManager.h"
#include "PolarisCommonEffectManager.generated.h"

class APolarisCharacterEffectManager;
class UNiagaraComponent;
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

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRadialBlur(const int32& PlayerNumber, const float& Amount, const float& start_frame, const float& keep_frame, const float& end_frame);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAuraEffects(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityAll(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRadialBlurPos(const int32& PlayerNumber, const float& pos_u, const float& pos_v);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyTick(const int32 tick_count, const float delta_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAllCommonEffect();
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityAllParticles();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelRadialBlur(const int32& PlayerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanceledCommonEffect(int32 player_id, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* CallSpawnBone(const int32& EffectId, const int32& PlayerNumber, const FName& BoneName, const FVector& position, const FRotator& Rotation, const FVector& Offset, const int32& Pattern);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalledCommonEffect(int32 player_id, int32 ID);
    
};

