#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DummyMobAction.h"
#include "DummyMobEffect.h"
#include "EMobVATMovePatern.h"
#include "PolarisActionVATMobBase.generated.h"

class APolarisActionVATMobBase;
class UMaterialInstanceDynamic;
class UNiagaraSystem;

UCLASS()
class POLARIS_API APolarisActionVATMobBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisActionVATMobBase*> VATActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDummyMobAction> DummyMobActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDummyMobEffect> DummyMobEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ElapsedFrameInThisLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartAnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 totalframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> AnchorLocationNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedGen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisableSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AppearSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpacityIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseInitByLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFixWalkRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMobVATMovePatern nowMovePatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMobVATMovePatern nowDitherPatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GeneralVATSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 nowActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseNativeTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bThisFrameJumpedByNative;
    
    APolarisActionVATMobBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float WalkNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVATActionTimeline();
    
    UFUNCTION(BlueprintCallable)
    void SetTickInterval(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerTotalFrame(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerSpeedGen(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerOpacityIntensity(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDMIScalerDelay(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDMIBPTimer(TArray<UMaterialInstanceDynamic*> DMI, float Val);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectNative(UNiagaraSystem* FX, FDummyMobEffect _effect);
    
    UFUNCTION(BlueprintCallable)
    void InitByLoopNative();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitByLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerTotalFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerSpeedGen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDMIScalerOpacityIntensity();
    
    UFUNCTION(BlueprintCallable)
    float FirstWalkToOnRailNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress);
    
    UFUNCTION(BlueprintCallable)
    bool CheckStartOffset(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void CheckMovePatern(float Delta, int32 action_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFromShedullerEffect(FDummyMobEffect effect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFromMobManagerAction(FDummyMobAction Action);
    
};

