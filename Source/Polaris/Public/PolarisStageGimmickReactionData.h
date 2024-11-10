#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickAnimationSet.h"
#include "PolarisStageGimmickDestructibleMeshData.h"
#include "PolarisStageSpawnEffect.h"
#include "PolarisStageGimmickReactionData.generated.h"

class APolarisStageGimmickStaticMeshActor;
class UAkAudioEvent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmickReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNextBrokenLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DecalVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCnancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickAnimationSet> AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> HitEffectsOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageSpawnEffect> HitEffectsOnMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* HitSoundReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVisibleBrokenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VisibleSkeletalMeshFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VisibleLightFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VisibleEffectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickDestructibleMeshData> DestructibleMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGimmickStaticMeshActor*> StartPhysicsMeshs;
    
    POLARIS_API FPolarisStageGimmickReactionData();
};

