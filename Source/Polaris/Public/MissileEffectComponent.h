#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissileEffect.h"
#include "MissileEffectAll.h"
#include "MissileFrameEffect.h"
#include "MissileEffectComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UMissileEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMissileEffect> StartEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMissileEffect> EndEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FMissileFrameEffect> FrameEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FMissileEffect> StartEffectMotionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FMissileEffectAll> EffectMotionIdAll;
    
    UMissileEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerId(const int32 player_id);
    
    UFUNCTION(BlueprintCallable)
    void SetDeactiveEffect(bool is_deactive_start_effect, bool is_deactive_end_effect);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveEffect(bool is_active_start_effect, bool is_active_end_effect);
    
    UFUNCTION(BlueprintCallable)
    void PlayStartEffectMotionId(int32 motion_id, USkeletalMeshComponent* attach_component);
    
    UFUNCTION(BlueprintCallable)
    void PlayStartEffect(USkeletalMeshComponent* attach_component);
    
    UFUNCTION(BlueprintCallable)
    void PlayFrameEffect(int32 motion_id, USkeletalMeshComponent* attach_component);
    
    UFUNCTION(BlueprintCallable)
    void PlayEndEffectMotionId(int32 motion_id, USkeletalMeshComponent* attach_component);
    
    UFUNCTION(BlueprintCallable)
    void PlayEndEffect(USkeletalMeshComponent* attach_component);
    
    UFUNCTION(BlueprintCallable)
    void DetachComponent(bool is_detach_start_effect, bool is_detach_end_effect, bool is_detach_frame_effect);
    
};

