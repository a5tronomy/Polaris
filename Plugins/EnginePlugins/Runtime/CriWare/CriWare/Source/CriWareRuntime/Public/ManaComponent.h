#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAtomSpeakerID.h"
#include "EManaComponentStatus.h"
#include "EManaFrameAction.h"
#include "EManaMaxFrameDrop.h"
#include "EManaPlaybackTimer.h"
#include "EManaSubtitlesEncoding.h"
#include "ManaEventPointInfo.h"
#include "ManaComponent.generated.h"

class UManaComponent;
class UManaMovie;
class UManaPlaylist;
class UManaTexture;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UManaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTrackChanged, int32, TrackNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleChanged, FText, Subtitle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EManaComponentStatus, Status, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSeekCompleted, int32, FrameNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRequestData, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDestroyed, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovieChanged, UManaMovie*, Movie, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFrameOnTime, int32, FrameNumber, UManaComponent*, ManaComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventPoint, FManaEventPointInfo, EventPointInfo);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UManaTexture* Movie;
    
    UPROPERTY(BlueprintAssignable)
    FOnEventPoint OnEventPoint;
    
    UPROPERTY(BlueprintAssignable)
    FOnSubtitleChanged OnSubtitleChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnStatusChanged OnStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieChanged OnMovieChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSeekCompleted OnSeekCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnTrackChanged OnTrackChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnFrameOnTime OnFrameOnTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerDestroyed OnPlayerDestroyed;
    
    UPROPERTY(BlueprintReadWrite)
    FOnRequestData OnRequestData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UManaPlaylist* Playlist;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLoop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AlphaTrack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AudioTrack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SubAudioTrack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExtraAudioTrack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString AudioCategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString SubAudioCategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ExtraAudioCategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SubtitlesChannel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EManaSubtitlesEncoding SubtitlesEncoding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    EManaFrameAction EndFrameAction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    EManaPlaybackTimer PlaybackTimer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    EManaMaxFrameDrop MaxFrameDrop;
    
public:
    UManaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UManaTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetSubVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioSendLevel(int32 Channel, EAtomSpeakerID SpeakerId, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSubAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer);
    
    UFUNCTION(BlueprintCallable)
    void SetMovie(UManaMovie* InMovie);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDropFrames(EManaMaxFrameDrop InMaxDropFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetFile(const FString& MovieFilePath);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFrameAction(EManaFrameAction InFrameAction);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioCategory(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaTrack(int32 Track);
    
    UFUNCTION(BlueprintCallable)
    void SeekToPosition(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void Seek(FTimespan Time);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSubAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtraAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAudioCategory();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void PreparePlaylistIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable)
    void Loop(bool bInLoop);
    
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
    float GetVolume() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintPure)
    UManaTexture* GetTexture() const;
    
    UFUNCTION(BlueprintPure)
    float GetSubVolume() const;
    
    UFUNCTION(BlueprintPure)
    EManaComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    UManaMovie* GetSource() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPosition() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetMovieTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrameNumber() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraVolume() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableSeamless(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSubtitlesChannel(int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceTime(FTimespan DeltaTime);
    
};

