#include "PolarisPostProcessVolume.h"

#include "Editor.h"
#include "ActorFactories/ActorFactoryBoxVolume.h"
#include "Components/BrushComponent.h"

APolarisPostProcessVolume::APolarisPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	BoxBrushSize = FVector(32, 32, 32);
	GetRootComponent()->Bounds.SphereRadius = BoxBrushSize.Size();
}


