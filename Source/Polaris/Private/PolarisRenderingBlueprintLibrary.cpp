#include "PolarisRenderingBlueprintLibrary.h"

UPolarisRenderingBlueprintLibrary::UPolarisRenderingBlueprintLibrary() {
}

void UPolarisRenderingBlueprintLibrary::TransformByBoxSphereBounds(const FBoxSphereBounds& BoundingBox, const FTransform& Transform, FBoxSphereBounds& Result) {
}

void UPolarisRenderingBlueprintLibrary::PolarisDrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material) {
}

void UPolarisRenderingBlueprintLibrary::PolarisClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor) {
}

bool UPolarisRenderingBlueprintLibrary::IsFullyContainedFrustum(const FMatrix& ProjectionViewMatrix, const FVector& Origin, const FVector& BoxExtent) {
    return false;
}

void UPolarisRenderingBlueprintLibrary::CleanupRenderTarget(UMaterialInstanceDynamic* Mid, FName ParameterName) {
}

void UPolarisRenderingBlueprintLibrary::CleanupAllRenderTargets(UMaterialInstanceDynamic* Mid) {
}

void UPolarisRenderingBlueprintLibrary::CheckEffectMaterialParameterCollection(const UObject* WorldContextObject) {
}


