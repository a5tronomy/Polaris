#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EMissileHitType.h"
#include "EMissileStateType.h"
#include "MissileSpawnDesc.h"
#include "PolarisCharacterMissile.generated.h"

class APolarisItemBaseActor;
class UChildActorComponent;
class UNiagaraComponent;

UCLASS()
class APolarisCharacterMissile : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMissileStateType MissileState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Handle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 EffectId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachSoundPosBone;
    
private:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* ParticleComp;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<EMissileHitType> NextEffectQueued;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAttathOwnerBaseTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSyncPlayerSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APolarisItemBaseActor* MissileItemActor;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UChildActorComponent* SoundPosActor_Missile;
    
    APolarisCharacterMissile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateMissile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn(const FMissileSpawnDesc& Desc);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetVisible(bool IsVisible);
    
private:
    UFUNCTION()
    void SetNextEffectQueued(TEnumAsByte<EMissileHitType> EffectType);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnVisible(bool bNewHidden);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUpdate(const FVector& position, const FVector& Direction);
    
    UFUNCTION(BlueprintNativeEvent)
    void onHit(bool bHitFloor, bool bHitWall);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGuarded();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCutIn();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnClashed();
    
    UFUNCTION(BlueprintCallable)
    void MissileHit(const FVector SpawnLocation, FRotator SpawnRotation, FHitResult HitResult, TEnumAsByte<EMissileHitType> HitType);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsFinish() const;
    
    UFUNCTION()
    TEnumAsByte<EMissileHitType> GetNextEffectQueued() const;
    
    UFUNCTION(BlueprintPure)
    float GePlayerFrameSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMissile();
    
};

