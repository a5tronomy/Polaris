#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "PolarisSpotLightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PolarisIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PolarisIntensityScale2;
    
    UPolarisSpotLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetPolarisScale() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyPolarisScale();
    
};

