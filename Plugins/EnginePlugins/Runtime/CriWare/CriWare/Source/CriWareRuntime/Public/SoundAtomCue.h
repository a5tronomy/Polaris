#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAisacControlWithVelocityParam.h"
#include "AtomCueInfo.h"
#include "EAtomLoopSetting.h"
#include "SoundAtomCue.generated.h"

class UAtom3dRegion;
class USoundAtomCueSheet;
class USoundAttenuation;

UCLASS(BlueprintType, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FString CueName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    EAtomLoopSetting LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyAtomParameter;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float Duration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float FirstWaveDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanStraddleAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDistanceToEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceToEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAreaSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UpdateRateForFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAtom3dRegion* Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableChangingAisacValueWithComponentVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAtomAisacControlWithVelocityParam> AisacControlSettings;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEconomicTick;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideEconomicTickSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EconomicTickDistanceMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EconomicTickFrequency;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableDistanceCulling;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideCullSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CullDistanceMargin;
    
    UPROPERTY()
    float EconomicTickMarginDistance;
    
    UPROPERTY()
    bool bLoopSettingByAtomCraft;
    
    UPROPERTY()
    bool bCullingSoundPlayingProcessByDistance;
    
    UPROPERTY()
    bool bUseLegacyCullingSettings;
    
    UPROPERTY()
    float MaxProcessDistance;
    
    UPROPERTY()
    bool bOverrideCullingSettings;
    
    UPROPERTY()
    float CullingMarginDistance;
    
    UPROPERTY()
    bool bLoop;
    
    UPROPERTY()
    USoundAttenuation* DefaultAttenuation;
    
    USoundAtomCue();

    UFUNCTION(BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION()
    bool IsEconomicTickEnabled() const;
    
    UFUNCTION()
    float GetMaxAttenuationDistanceToUse() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAttenuationDistanceToApply() const;
    
    UFUNCTION()
    float GetEconomicTickMarginDistanceToUse() const;
    
    UFUNCTION()
    float GetEconomicTickFrequencyToUse() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickFrequencyToApply() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickDistanceMarginToApply() const;
    
    UFUNCTION(BlueprintPure)
    float GetEconomicTickDistance() const;
    
    UFUNCTION()
    float GetEconomicTickBoundaryDistanceToUse() const;
    
    UFUNCTION()
    float GetCullingMarginDistanceToUse() const;
    
    UFUNCTION()
    float GetCullingBoundaryDistanceToUse() const;
    
    UFUNCTION(BlueprintPure)
    float GetCullDistanceMarginToApply() const;
    
    UFUNCTION(BlueprintPure)
    float GetCullDistance() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_GetCueInfo(UPARAM(Ref) FAtomCueInfo& CueInfo) const;
    
};

