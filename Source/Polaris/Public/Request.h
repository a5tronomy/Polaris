#pragma once
#include "CoreMinimal.h"
#include "Request.generated.h"

class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UTextureRenderTarget2D* TextureRenderTarget;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    POLARIS_API FRequest();
};

