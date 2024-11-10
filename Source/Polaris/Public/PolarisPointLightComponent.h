#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "PolarisPointLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PolarisIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PolarisIntensityScale2;
    
    UPolarisPointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetPolarisScale() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPolarisScale();
    
};

