#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomAisacControlParam.h"
#include "EManaPlayerTrack.h"
#include "ManaSoundComponent.generated.h"

class UManaPlayer;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UManaSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableSpatialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideVolumeMultiplier: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableLowPassFilter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowPassFilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PanSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAttenuationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAttenuationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAtomAisacControlParam> AisacControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> AttachedAisacs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString AudioTrackCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SubAudioTrackCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ExtraAudioTrackCategory;
    
protected:
    UPROPERTY(EditAnywhere)
    UManaPlayer* ManaPlayer;
    
public:
    UManaSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManaPlayer(UManaPlayer* NewManaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioTrackCategory(EManaPlayerTrack Track, const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAudioTrackCategory(EManaPlayerTrack Track);
    
    UFUNCTION(BlueprintPure)
    UManaPlayer* GetManaPlayer() const;
    
};

