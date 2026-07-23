#pragma once
#include "CoreMinimal.h"
#include "EDramaTrackBoneIdNotMotHead.h"
#include "RequestCharacterEffectNotMotHead.generated.h"

USTRUCT(BlueprintType)
struct FRequestCharacterEffectNotMotHead {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDramaTrackBoneIdNotMotHead bone_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 effect_id;
    
    POLARIS_API FRequestCharacterEffectNotMotHead();
};

