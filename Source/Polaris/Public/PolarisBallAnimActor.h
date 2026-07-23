#pragma once
#include "CoreMinimal.h"
#include "EAnimState.h"
#include "PolarisBallBaseActor.h"
#include "PolarisBallAnimActor.generated.h"

class UAnimSequence;
class ULevelSequence;
class UPolarisBallSkeletalMeshComponent;

UCLASS()
class POLARIS_API APolarisBallAnimActor : public APolarisBallBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPolarisBallSkeletalMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    TMap<EAnimState, UAnimSequence*> AnimationSequences;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    TMap<EAnimState, ULevelSequence*> LevelSequences;
    
    APolarisBallAnimActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetAnimation(EAnimState anim, bool Loop);
    
};

