#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtomAudioVolumeParameters.h"
#include "SnapshotSwitchSettings.h"
#include "AtomAudioVolume.generated.h"

class AAtomEntranceVolume;
class UAtomAudioVolumeSettings;

UCLASS()
class CRIWARERUNTIME_API AAtomAudioVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName CollisionProfile;
    
    UPROPERTY(EditAnywhere)
    bool bAutoSettingEntranceVolume;
    
    UPROPERTY(EditAnywhere)
    bool bAutoSettingNeighbourAudioVolumeToEntranceVolume;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> AudioVolumeTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideAtomAudioVolume;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAtomAudioVolumeSettings* AtomAudioVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAtomAudioVolumeParameters AtomAudioVolumeSettingsOverrides;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AAtomEntranceVolume*> EntranceVolumes;
    
    AAtomAudioVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReverbSettings(const FSnapshotSwitchSettings& NewReverbSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
private:
    UFUNCTION()
    void OnRep_bEnabled();
    
public:
    UFUNCTION(BlueprintPure)
    float GetPriority() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    static void EnableAllAudioVolume(bool bEnable);
    
};

