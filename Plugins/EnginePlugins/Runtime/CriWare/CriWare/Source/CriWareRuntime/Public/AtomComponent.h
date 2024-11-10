#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Sound/SoundAttenuation.h"
#include "AtomAisacControlParam.h"
#include "AtomAisacControlWithVelocityParam.h"
#include "AtomAppliedValueParam.h"
#include "AtomBeatSyncInfo.h"
#include "AtomCallback.h"
#include "AtomSelectorParam.h"
#include "AtomSequenceInfo.h"
#include "EAtomAudioVolumeType.h"
#include "EAtomComponentStatus.h"
#include "EAtomLoopSetting.h"
#include "AtomComponent.generated.h"

class AAtomAreaSoundVolume;
class AAtomAudioVolume;
class UAtom3dRegion;
class UAtomComponent;
class UAtomSoundObject;
class UGameViewportClient;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class UWorld;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent, public IAtomCallback {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EAtomComponentStatus, Status, UAtomComponent*, AtomComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAudioVolumeChanged, EAtomAudioVolumeType, Type, AAtomAudioVolume*, AtomAudioVolume, bool, bIsCalledFromTick);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtomSoundCueBlockIndexChanged, int32, BlockIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomSequenceCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomSequenceInfo&, SequenceInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomBeatSyncCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomBeatSyncInfo&, BeatSyncInfo);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAtom3dRegion* Region;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bPersistAcrossLevelTransition: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY()
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableMultipleSoundPlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUsePlaylist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanStraddleAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAreaSoundVolume;
    
    UPROPERTY(EditAnywhere)
    UAtomSoundObject* SoundObject;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultBlockIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOverrideAisacControlSettingsWithVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAtomAisacControlWithVelocityParam> OverrideAisacControlSettingsWithVelocity;
    
    UPROPERTY(EditAnywhere)
    EAtomLoopSetting LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOnly2DSound: 1;
    
    UPROPERTY(BlueprintAssignable)
    FOnStatusChanged OnStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioVolumeChanged OnAudioVolumeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnAtomSoundCueBlockIndexChanged OnAtomSoundCueBlockIndexChanged;
    
    UPROPERTY()
    UWorld* PlayWorld;
    
    UPROPERTY()
    UGameViewportClient* GameViewport;
    
    UPROPERTY()
    UAtomSoundObject* DefaultSoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
private:
    UPROPERTY(Transient)
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(Transient)
    UAtomSoundObject* AppliedSoundObject;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAtomBeatSyncCallbackDelegate OnAtomBeatSyncCallback;
    
    UPROPERTY(BlueprintAssignable)
    FAtomSequenceCallbackDelegate OnAtomSequenceCallback;
    
    UAtomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopWithoutReleaseTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundObject(UAtomSoundObject* InSoundObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion(UAtom3dRegion* InRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION()
    static void SetDefaultAttenuationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& BusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevel(int32 BusId, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackIdArray(TArray<int32> AsrRackIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackID(int32 asr_rack_id);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void RemovePreferredOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintPure)
    bool IsReducingTickFrequency() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLoop() const;
    
    UFUNCTION()
    bool HasBeenEconomicTick() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintPure)
    EAtomComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintPure)
    float GetSequencePosition() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumQueuedSounds() const;
    
    UFUNCTION(BlueprintPure)
    void GetNumPlayedSamples(int64& NumSamples, int32& SamplingRate) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAttenuationDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickFrequency() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickDistanceMargin() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickDistance() const;
    
    UFUNCTION()
    static bool GetDefaultAttenuationEnable();
    
    UFUNCTION()
    float GetCurrentMaxAttenuationDistance() const;
    
    UFUNCTION()
    float GetCurrentEconomicTickMarginDistance() const;
    
    UFUNCTION()
    float GetCurrentEconomicTickFrequency() const;
    
    UFUNCTION()
    float GetCurrentEconomicTickBoundaryDistance() const;
    
    UFUNCTION()
    float GetCurrentCullingMarginDistance() const;
    
    UFUNCTION()
    float GetCurrentCullingBoundaryDistance() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentBlockIndex() const;
    
    UFUNCTION(BlueprintPure)
    AAtomAudioVolume* GetCurrentBelongingAudioVolume(EAtomAudioVolumeType Type, bool IsNeighbor) const;
    
    UFUNCTION(BlueprintPure)
    float GetCullDistanceMargin() const;
    
    UFUNCTION(BlueprintPure)
    float GetCullDistance() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCueName() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, float> GetAudioVolumeValueMap(EAtomAudioVolumeType Type);
    
    UFUNCTION(BlueprintPure)
    int32 GetAtomComponentID() const;
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* GetAtomComponentFromID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    FAtomAppliedValueParam GetAtomAppliedValueParam();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentByID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectorLabels();
    
    UFUNCTION(BlueprintCallable)
    void ClearPreferredOutputPort();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutputPort();
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
    UFUNCTION(BlueprintCallable)
    void AttachAreaSoundVolume(AAtomAreaSoundVolume* sound_shape_volume);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
    

    // Fix for true pure virtual functions not being implemented
};

