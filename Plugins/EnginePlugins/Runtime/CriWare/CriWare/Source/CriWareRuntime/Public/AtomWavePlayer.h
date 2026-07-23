#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AtomWaveInfo.h"
#include "EAtomWavePlayState.h"
#include "OnWaveFinishedDelegate.h"
#include "OnWavePlaybackPercentDelegate.h"
#include "AtomWavePlayer.generated.h"

class USoundAtomCue;

UCLASS(BlueprintType, EditInlineNew)
class CRIWARERUNTIME_API UAtomWavePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintAssignable)
    FOnWaveFinished OnWaveFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnWavePlaybackPercent OnWavePlaybackPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundAtomCue* SoundAtomCue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAtomWaveInfo WaveInfo;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bLoop: 1;
    
public:
    UAtomWavePlayer();

    UFUNCTION(BlueprintCallable)
    void StopDelayed(float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetWave(USoundAtomCue* InCue);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintPure)
    FAtomWaveInfo GetWaveInfo() const;
    
    UFUNCTION(BlueprintPure)
    FTimespan GetTime() const;
    
    UFUNCTION(BlueprintPure)
    EAtomWavePlayState GetPlayState() const;
    
    UFUNCTION(BlueprintPure)
    USoundAtomCue* GetCue() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
    
};

