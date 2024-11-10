#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PolarisColorBlendComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisColorBlendComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Target;
    
    UPROPERTY(EditAnywhere)
    bool IsParentComponent;
    
    UPROPERTY(EditAnywhere)
    FVector4 startColor;
    
    UPROPERTY(EditAnywhere)
    FVector4 endColor;
    
    UPROPERTY(EditAnywhere)
    float delaySecond;
    
    UPROPERTY(EditAnywhere)
    float endSecond;
    
    UPolarisColorBlendComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayEX(UPrimitiveComponent* NewTarget, float NewDelaySecond, float NewEndSecond, FVector4 NewStartColor, FVector4 NewEndColor);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintPure)
    bool IsFinish() const;
    
};

