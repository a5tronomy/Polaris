#pragma once
#include "CoreMinimal.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaSubtitleTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaSubtitleTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Language;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EManaSubtitlesEncoding Encoding;
    
    FManaSubtitleTrackInfo();
};

