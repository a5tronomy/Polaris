#pragma once
#include "CoreMinimal.h"
#include "ManaPlayerTrackOptions.generated.h"

USTRUCT(BlueprintType)
struct FManaPlayerTrackOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Audio;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SubAudio;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ExtraAudio;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Subtitle;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Video;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ALPHA;
    
    CRIWARERUNTIME_API FManaPlayerTrackOptions();
};

