#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDramaTrackBoneIdNotMotHead.h"
#include "RequestLocalOffset.generated.h"

class UNiagaraSystem;

USTRUCT()
struct FRequestLocalOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraSystem* niagara_asset;
    
    UPROPERTY()
    EDramaTrackBoneIdNotMotHead bone_id;
    
    UPROPERTY()
    FVector offset_location;
    
    UPROPERTY()
    FRotator offset_rotation;
    
    UPROPERTY()
    int32 player_index;
    
    UPROPERTY()
    int32 effect_id;
    
    POLARIS_API FRequestLocalOffset();
};

