#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PolarisWrinkleComponent.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisWrinkleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* WrinkleTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* WrinkleMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* WrinkleMaterial;
    
    UPolarisWrinkleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize(USkeletalMeshComponent* MeshComponent, int32 materialIndex);
    
};

