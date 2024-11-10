#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PolarisSceneColorCaptureComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisSceneColorCaptureComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* TextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    
    UPolarisSceneColorCaptureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EndCapture();
    
    UFUNCTION(BlueprintCallable)
    void BeginCapture();
    
};

