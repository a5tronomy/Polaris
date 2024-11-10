#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "EMobState.h"
#include "PolarisMobAnimInstance.generated.h"

class UAnimSequenceBase;
class UMobAnimationSet;

UCLASS(NonTransient)
class POLARIS_API UPolarisMobAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMobState BaseMobstate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator FocusRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator transRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator FixedFocusRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequenceBase*> IdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequenceBase*> TerrorAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimSequenceBase*> CheerAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IdleAnimationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TerrorAnimationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CheerAnimationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InitAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheerTransTimeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TerrorTransTimeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* IdleAnimationFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* TerrorAnimationFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* CheerAnimationFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMobAnimationSet* AnimationAssetFromActor;
    
    UPolarisMobAnimInstance();

};

