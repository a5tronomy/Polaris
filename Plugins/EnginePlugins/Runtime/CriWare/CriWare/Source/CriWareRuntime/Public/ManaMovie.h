#pragma once
#include "CoreMinimal.h"
#include "ManaAudioTrackInfo.h"
#include "ManaEventPointInfo.h"
#include "ManaSource.h"
#include "ManaSubtitleTrackInfo.h"
#include "ManaVideoTrackInfo.h"
#include "ManaMovie.generated.h"

UCLASS(Abstract, BlueprintType)
class CRIWARERUNTIME_API UManaMovie : public UManaSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FManaVideoTrackInfo> VideoTracks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FManaVideoTrackInfo> AlphaTracks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FManaAudioTrackInfo> AudioTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FManaEventPointInfo> EventPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FManaSubtitleTrackInfo> SubtitleTracks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumSubtitleChannels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 MaxSubtitleSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 MinBufferSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 MaxChunkSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsAlpha: 1;
    
public:
    UManaMovie();

    UFUNCTION(BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintPure)
    FString GetUrl() const;
    
};

