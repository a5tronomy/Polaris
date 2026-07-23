#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisRenderingBlueprintLibrary.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class UPolarisRenderingBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisRenderingBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static void TransformByBoxSphereBounds(const FBoxSphereBounds& BoundingBox, const FTransform& Transform, FBoxSphereBounds& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisDrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    
    UFUNCTION(BlueprintPure)
    static bool IsFullyContainedFrustum(const FMatrix& ProjectionViewMatrix, const FVector& Origin, const FVector& BoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static void CleanupRenderTarget(UMaterialInstanceDynamic* Mid, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static void CleanupAllRenderTargets(UMaterialInstanceDynamic* Mid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckEffectMaterialParameterCollection(const UObject* WorldContextObject);
    
};

