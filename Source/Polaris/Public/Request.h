#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERequestType.h"
#include "Request.generated.h"

class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    ERequestType Type;
    
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UTextureRenderTarget2D* TextureRenderTarget;
    
    UPROPERTY()
    FLinearColor ClearColor;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    float EstimateTime;
    
    POLARIS_API FRequest();
};

