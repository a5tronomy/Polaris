#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_TimedPolarisStageAttack.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class POLARIS_API UAnimNotifyState_TimedPolarisStageAttack : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 no;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float power;
    
    UAnimNotifyState_TimedPolarisStageAttack();

};

