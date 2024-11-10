#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EEffectPositionId.h"
#include "Templates/SubclassOf.h"
#include "PolarisEffectManager.generated.h"

class APolarisCharacterEffectManager;
class APolarisCommonEffectManager;
class APolarisItemEffectManager;
class APolarisNiagaraActorManager;
class APolarisStageEffectManager;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UNiagaraParameterCollection;
class UNiagaraSystem;
class UObject;
class USceneComponent;

UCLASS()
class POLARIS_API APolarisEffectManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisCommonEffectManager> CommonEffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisStageEffectManager> StageEffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisItemEffectManager> ItemEffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisNiagaraActorManager> NiagaraActorManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDummySpawnCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* MPC_Effect_LOD;
    
    UPROPERTY(EditAnywhere)
    UNiagaraParameterCollection* NPC_Mothead;
    
private:
    UPROPERTY(EditAnywhere)
    APolarisCommonEffectManager* m_pPolarisCommonEffectManager;
    
    UPROPERTY(EditAnywhere)
    APolarisStageEffectManager* m_pPolarisStageEffectManager;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, TWeakObjectPtr<APolarisCharacterEffectManager>> m_pPolarisCharacterEffectManagers;
    
    UPROPERTY(EditAnywhere)
    APolarisItemEffectManager* m_pPolarisItemEffectManager;
    
    UPROPERTY(EditAnywhere)
    APolarisNiagaraActorManager* m_pPolarisNiagaraActorManager;
    
    UPROPERTY()
    TArray<UNiagaraSystem*> m_DummyParticleAsset;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> m_ParticleArray;
    
public:
    APolarisEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetParticleAssetNameHash(UNiagaraSystem* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNPCOwnerVelocity(const float Velocity, float delay_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNPCFloorHeight(const float floor_height, float delay_time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLensFlareScale(const float lens_flare_scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsIgnoreEffectSound(bool is_dummy, float delay_time);
    
    UFUNCTION(BlueprintCallable)
    void SetDummyTick(const int32 tick_count, const float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeFloorFlag(bool is_change_floor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetParticleDelay(const float delay_time);
    
    UFUNCTION(BlueprintCallable)
    void ResetParticle();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestedEffectManager(FName manager, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void requestDebugDraw(const FName Name, const FColor Color, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* ReqNiagaraScalingAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoSound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* ReqNiagaraAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoSound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    UNiagaraComponent* ReqNiagaraAtLocation(const UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, bool bAutoSound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBtlEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAllEffect();
    
    UFUNCTION(BlueprintCallable)
    void KeyOnSoundbyNiagaraAsset(const FVector& position, UNiagaraSystem* Asset);
    
    UFUNCTION(BlueprintCallable)
    APolarisStageEffectManager* GetStageEffectManager();
    
    UFUNCTION(BlueprintCallable)
    static FName GetPositionNameFromID(const EEffectPositionId ID);
    
    UFUNCTION(BlueprintCallable)
    static EEffectPositionId GetPositionIDFromName(const FName& bone_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetNPCFloorHeight();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UNiagaraSystem*> GetNiagaraSystemObjects();
    
    UFUNCTION(BlueprintCallable)
    APolarisNiagaraActorManager* GetNiagaraActorManager();
    
    UFUNCTION(BlueprintCallable)
    APolarisItemEffectManager* GetItemEffectManager();
    
    UFUNCTION(BlueprintCallable)
    APolarisCommonEffectManager* GetCommonEffectManager();
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterEffectManager* GetCharacterEffectManager(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    bool GetChangeFloorFlag();
    
    UFUNCTION(BlueprintCallable)
    void AddParticle(UNiagaraComponent* particlem, bool over_count_check);
    
};

