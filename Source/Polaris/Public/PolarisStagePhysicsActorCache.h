#pragma once
#include "CoreMinimal.h"
#include "PolarisStagePhysicsActorCache.generated.h"

class AActor;
class APolarisStagePhysicsActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPolarisStagePhysicsActorCache {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AActor* OwnerActor;
    
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* Asset;
    
    UPROPERTY(VisibleAnywhere)
    APolarisStagePhysicsActor* Actor;
    
    POLARIS_API FPolarisStagePhysicsActorCache();
};

