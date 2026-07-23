#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomBusSampler.generated.h"

UCLASS(BlueprintType)
class CRIWARERUNTIME_API UAtomBusSampler : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRecordingFinished);
    
    UPROPERTY(BlueprintAssignable)
    FOnRecordingStarted OnRecordingStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnRecordingFinished OnRecordingFinished;
    
    UAtomBusSampler();

    UFUNCTION(BlueprintCallable)
    void StopRecordedSoundWithoutReleaseTime();
    
    UFUNCTION(BlueprintCallable)
    void StopRecordedSound();
    
    UFUNCTION(BlueprintCallable)
    void StartRecording(float InExpectedDuration, int32 InAsrRack, const FString& InBusName, bool BusOutput);
    
    UFUNCTION(BlueprintCallable)
    void ResumeRecording();
    
    UFUNCTION(BlueprintCallable)
    void PlayRecordedSound(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable)
    void PauseRecording();
    
    UFUNCTION(BlueprintCallable)
    void PauseRecordedSound(bool bPause);
    
    UFUNCTION(BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingRecordedSound() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPausedRecordedSound() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRecording();
    
    UFUNCTION(BlueprintPure)
    bool CanRecord() const;
    
    UFUNCTION(BlueprintPure)
    bool CanPlayRecordedSound() const;
    
};

