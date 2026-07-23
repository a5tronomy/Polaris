#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PolarisStageSetAttack.generated.h"

UCLASS(CollapseCategories)
class POLARIS_API UAnimNotify_PolarisStageSetAttack : public UAnimNotify {
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
    
    UAnimNotify_PolarisStageSetAttack();

};

