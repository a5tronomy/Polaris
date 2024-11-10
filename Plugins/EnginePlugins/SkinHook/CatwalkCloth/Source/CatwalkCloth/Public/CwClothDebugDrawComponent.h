#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "CwClothDebugDrawComponent.generated.h"

class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCwClothDebugDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* VertexDebugDrawMaterial;
    
    UPROPERTY()
    UMaterialInterface* SimulationMeshDebugDrawMaterial;
    
    UCwClothDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

