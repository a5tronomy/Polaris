#pragma once
#include "CoreMinimal.h"
#include "MotHeadAnimInstance.h"
#include "PolarisCharacterAnimInstance.generated.h"

class APolarisCharacterActor;
class UPolarisCharacterMotionOverrideData;

UCLASS(NonTransient)
class POLARIS_API UPolarisCharacterAnimInstance : public UMotHeadAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FacialBlend;
    
private:
    UPROPERTY()
    APolarisCharacterActor* Player;
    
public:
    UPROPERTY(BlueprintReadWrite)
    TSet<UPolarisCharacterMotionOverrideData*> MotionOverrideDatas;
    
    UPolarisCharacterAnimInstance();

};

