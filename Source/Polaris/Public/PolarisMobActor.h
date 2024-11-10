#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "GameFramework/Pawn.h"
#include "EMobState.h"
#include "EventOnInitBattleParam.h"
#include "PolarisReducibleInterface.h"
#include "PolarisMobActor.generated.h"

class UAnimSequence;
class USkeletalMeshComponent;

UCLASS()
class POLARIS_API APolarisMobActor : public APawn, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* myskeltalmesh;
    
    APolarisMobActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SetFocusTransNative(const FTransform& InFocusTrans);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNativeInitializeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetYawLimitNative() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetUseFocusNative() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FRotator GetTargetLookatRotNative();
    
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetSkeletalMeshNative();
    
    UFUNCTION(BlueprintImplementableEvent)
    UAnimSequence* GetRandomIdleNative(EMobState InMobState);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetPitchLimitNative() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    EMobState GetMobStateNative() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FTransform GetFocusTransNative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceReactionNative(int32 ID);
    

    // Fix for true pure virtual functions not being implemented
};

