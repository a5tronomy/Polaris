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
    
    UPROPERTY(EditAnywhere, Category = "Polaris|ColorBlendComponent")
    bool IsParentComponent;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|ColorBlendComponent")
    FVector4 startColor;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|ColorBlendComponent")
    FVector4 endColor;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|ColorBlendComponent")
    float delaySecond;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|ColorBlendComponent")
    float endSecond;
    
    UPolarisColorBlendComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Polaris|ColorBlendComponent")
    void PlayEX(UPrimitiveComponent* NewTarget, float NewDelaySecond, float NewEndSecond, FVector4 NewStartColor, FVector4 NewEndColor);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|ColorBlendComponent")
    void Play();
    
    UFUNCTION(BlueprintPure, Category = "Polaris|ColorBlendComponent")
    bool IsFinish() const;
    
};

