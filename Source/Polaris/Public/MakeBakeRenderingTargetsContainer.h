#pragma once
#include "CoreMinimal.h"
#include "MakeBakeRenderingTargetsContainer.generated.h"

class UTexture;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct POLARIS_API FMakeBakeRenderingTargetsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UTexture*> OriginalTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UTextureRenderTarget2D*> RenderTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTScalpMaskRGB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTScalpMaskA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTScalpMaskTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* RTNormal;
    
    FMakeBakeRenderingTargetsContainer();
};

