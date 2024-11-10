#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaFrameAction.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlaybackTimer.h"
#include "EManaPlayerOptionBooleanOverride.h"
#include "ManaPlayerTrackOptions.h"
#include "ManaPlayerOptions.generated.h"

class UAtomComponent;

USTRUCT(BlueprintType)
struct FManaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FManaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite)
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite)
    EManaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite)
    EManaPlayerOptionBooleanOverride Loop;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    EManaPlaybackTimer PlaybackTimer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    EManaMaxFrameDrop MaxFrameDrop;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    EManaFrameAction EndFrameAction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced)
    UAtomComponent* TimeSyncedSource;
    
    CRIWARERUNTIME_API FManaPlayerOptions();
};

