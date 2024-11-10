#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ESupportUEAnimationMode.h"
#include "MotHeadAnimInstance.generated.h"

UCLASS(NonTransient)
class MOTHEADANIMATIONRUNTIME_API UMotHeadAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ControlLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESupportUEAnimationMode SupportUEAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceFirstUpdatePhoenix;
    
    UMotHeadAnimInstance();

};

