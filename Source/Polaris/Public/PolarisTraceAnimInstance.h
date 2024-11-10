#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PolarisAnimNode_ModifyBoneArray.h"
#include "PolarisTraceAnimInstance.generated.h"

UCLASS(NonTransient)
class POLARIS_API UPolarisTraceAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPolarisAnimNode_ModifyBoneArray BoneArrayNode;
    
public:
    UPolarisTraceAnimInstance();

};

