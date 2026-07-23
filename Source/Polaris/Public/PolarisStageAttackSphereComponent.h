#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisStageAttackSphereComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisStageAttackSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageImpulseStrengthType ImpulseStrengthType;
    
    UPolarisStageAttackSphereComponent(const FObjectInitializer& ObjectInitializer);

};

