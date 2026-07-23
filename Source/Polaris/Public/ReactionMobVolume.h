#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnRadialForceParam.h"
#include "EventOnWallHitParam.h"
#include "ReactionMobVolume.generated.h"

class APolarisMobReactionMobActor;

UCLASS()
class POLARIS_API AReactionMobVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<APolarisMobReactionMobActor*> MobList;
    
    UPROPERTY(EditAnywhere)
    bool bRandomReactionDelay;
    
    UPROPERTY(EditAnywhere)
    float MaxRandomReactionDelay;
    
    AReactionMobVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWallHit(FEventOnWallHitParam Param);
    
    UFUNCTION()
    void OnRadialForce(FEventOnRadialForceParam Param);
    
    UFUNCTION()
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
};

