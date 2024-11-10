#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EManaComponentStatus.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlayerTrack.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaEventPointInfo.h"
#include "ManaPlayerOptions.h"
#include "OnManaPlayerEventPointDelegate.h"
#include "OnManaPlayerManaEventDelegate.h"
#include "OnManaPlayerMovieOpenFailedDelegate.h"
#include "OnManaPlayerMovieOpenedDelegate.h"
#include "OnManaPlayerSubtitleChangedDelegate.h"
#include "ManaPlayer.generated.h"

class UAtomComponent;
class UManaComponent;
class UManaMovie;
class UManaPlaylist;
class UManaSource;
class UManaTexture;

UCLASS(BlueprintType)
class CRIWARERUNTIME_API UManaPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFrameUpdatedDelegate, int32, FrameNumber);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlayOnOpen;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Loop: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    EManaMaxFrameDrop MaxFrameDrop;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnEndReached;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnMovieClosed;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerMovieOpened OnMovieOpened;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerMovieOpenFailed OnMovieOpenFailed;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnPlaybackResumed;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnPlaybackSuspended;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerManaEvent OnTracksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnManaPlayerEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UManaTexture* ManaTexture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UManaMovie* ManaMovie;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UManaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PlaylistIndex;
    
    UPROPERTY(Instanced, Transient)
    UManaComponent* ManaComponent;
    
public:
    UManaPlayer();

    UFUNCTION(BlueprintCallable)
    bool SetVolume(float Volume, EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable)
    bool SetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSyncedSource(UAtomComponent* SyncedSource);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* InManaTexture);
    
    UFUNCTION(BlueprintCallable)
    bool SetRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTrack(EManaPlayerTrack TrackType, int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Reopen();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PlayAndSeek();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSourceWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylistIndex(UManaPlaylist* InPlaylist, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPlaylist(UManaPlaylist* InPlaylist);
    
    UFUNCTION(BlueprintCallable)
    void OpenMovieSource(UManaMovie* InManaMovie);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintPure)
    bool IsSeeking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasError() const;
    
private:
    UFUNCTION()
    void HandleManaComponentSubtitleChanged(FText Subtitle);
    
    UFUNCTION()
    void HandleManaComponentStatusChanged(EManaComponentStatus Status, UManaComponent* InManaComponent);
    
    UFUNCTION()
    void HandleManaComponentSeekCompleted(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION()
    void HandleManaComponentPlayerDestroyed(UManaComponent* InManaComponent);
    
    UFUNCTION()
    void HandleManaComponentMovieChanged(UManaMovie* InManaMovie, UManaComponent* InManaComponent);
    
    UFUNCTION()
    void HandleManaComponentFrameOnTime(int32 InFrameNumber, UManaComponent* InManaComponent);
    
    UFUNCTION()
    void HandleManaComponentEventPoint(FManaEventPointInfo EventPointInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetVolume(EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintPure)
    FString GetTrackLanguage(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTrackFormat(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    FText GetTrackDisplayName(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UAtomComponent* GetTimeSyncedSource();
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintPure)
    UManaTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable)
    EManaSubtitlesEncoding GetSubtitleTrackEncoding(int32 TrackIndex);
    
    UFUNCTION(BlueprintPure)
    EManaComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedTrack(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintPure)
    float GetRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlaylistIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTracks(EManaPlayerTrack TrackType) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumTrackFormats(EManaPlayerTrack TrackType, int32 TrackIndex) const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetMovieTime() const;
    
    UFUNCTION(BlueprintPure)
    UManaMovie* GetMovieSource() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMovieFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrames() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisableTrack(EManaPlayerTrack TrackType);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void BindOnFrameUpdated(const UManaPlayer::FOnFrameUpdatedDelegate& Event);
    
};

