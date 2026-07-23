#pragma once
#include "CoreMinimal.h"
#include "BarrierGroup.generated.h"

class APolarisActionVATMobBase;
class APolarisMobActor;
class APolarisMobAnimal;
class APolarisMobReactionMobActor;
class APolarisStageDummyActor;
class APolarisStageGimmickActor;
class ASkeletalMeshActor;
class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FBarrierGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AStaticMeshActor*> StaticMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ASkeletalMeshActor*> SkeletalMeshActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGimmickActor*> StageGimmickActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisMobActor*> MobActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisMobAnimal*> MobAnimals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisMobReactionMobActor*> ReactionMob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisActionVATMobBase*> ActionVATMobActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageDummyActor*> OtherActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaOffset;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName Folder;
    
    POLARIS_API FBarrierGroup();
};

