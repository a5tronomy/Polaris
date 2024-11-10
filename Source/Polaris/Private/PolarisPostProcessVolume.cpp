#include "PolarisPostProcessVolume.h"

APolarisPostProcessVolume::APolarisPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	BoxBrushSize = FVector(32, 32, 32);
	GetRootComponent()->Bounds.SphereRadius = BoxBrushSize.Size();
}


