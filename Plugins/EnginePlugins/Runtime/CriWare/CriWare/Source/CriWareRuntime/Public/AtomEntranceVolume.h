#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtomEntranceVolume.generated.h"

class AAtomAudioVolume;

UCLASS()
class CRIWARERUNTIME_API AAtomEntranceVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_bEnabled)
    uint8 bEnabled: 1;
    
public:
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_bEnabled)
    TArray<TWeakObjectPtr<AAtomAudioVolume>> NeighbourhoodAudioVolumeArray;
    
    AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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
    
};

