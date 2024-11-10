#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/GameViewportClient.h"
#include "PolarisGameViewportClient.generated.h"

class UTextureRenderTarget2D;

UCLASS(NonTransient)
class POLARIS_API UPolarisGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UTextureRenderTarget2D*, TEnumAsByte<ESceneCaptureSource>> m_capture_viewport_data;
    
public:
    UPolarisGameViewportClient();

};

