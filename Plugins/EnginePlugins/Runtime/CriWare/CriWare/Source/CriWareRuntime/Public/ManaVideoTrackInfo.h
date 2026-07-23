#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaMovieType.h"
#include "ManaVideoTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaVideoTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIntPoint TextureDimensions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIntPoint DisplayDimensions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalFrames;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAlpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EManaMovieType Type;
    
    FManaVideoTrackInfo();
};

