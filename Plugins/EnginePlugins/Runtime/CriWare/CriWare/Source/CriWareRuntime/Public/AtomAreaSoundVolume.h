#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "AtomAreaSoundVolume.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS()
class CRIWARERUNTIME_API AAtomAreaSoundVolume : public AVolume {
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
    float SoundStopDistance;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnableAtomCompoentPack;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAutoPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDeterminationFromVolumeBoundaryPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableRepeatPlayWhenSoundStop;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    TArray<UAtomComponent*> AtomComponents;
    
    UPROPERTY(EditAnywhere)
    TArray<USoundAtomCue*> Sounds;
    
    AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable)
    void DestroySounds();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAtomComponent*> CreateSounds(FVector listener_location);
    
};

