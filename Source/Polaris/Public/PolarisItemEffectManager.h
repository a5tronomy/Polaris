#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExtraAbilityEffectItem.h"
#include "ItemAddAuraEffectInfo.h"
#include "ItemAddHitEffectInfo.h"
#include "ItemUniqueCharacterEffectInfo.h"
#include "ItemUniqueHitEffectInfo.h"
#include "PolarisItemEffectManager.generated.h"

class UAuraCharacterItem;
class UNiagaraComponent;

UCLASS()
class POLARIS_API APolarisItemEffectManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<int32, TWeakObjectPtr<UAuraCharacterItem>> AuraCharacterItemMap;
    
    UPROPERTY()
    TMap<int32, FExtraAbilityEffectItem> ItemEffectMap;
    
    UPROPERTY()
    TMap<int32, FItemAddHitEffectInfo> ItemAddHitEffectMap;
    
    UPROPERTY()
    TMap<int32, FItemUniqueHitEffectInfo> ItemUniqueHitEffectMap;
    
    UPROPERTY()
    TMap<int32, FItemUniqueCharacterEffectInfo> ItemUniqueCharacterEffectMap;
    
    UPROPERTY()
    TMap<int32, FItemAddAuraEffectInfo> ItemAddAuraEffectMap;
    
public:
    APolarisItemEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleAuraVisibility(const int32 player_id, const bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetAuraVisibility(int32 player_id, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityAllParticles();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllParticles();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetAuraItem();
    
    UFUNCTION(BlueprintCallable)
    bool IsNotDisappearAura(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    void InitAuraItem(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    TArray<UNiagaraComponent*> GetAuraItem(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAura(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldParticle(UNiagaraComponent* Particle);
    
    UFUNCTION(BlueprintCallable)
    void AddTickAuraItem(const int32 player_id, const int32 tick_count);
    
    UFUNCTION(BlueprintCallable)
    void AddParticleSystem(int32 player_id, int32 ItemId, int32 EffectId, UNiagaraComponent* Particle);
    
};

