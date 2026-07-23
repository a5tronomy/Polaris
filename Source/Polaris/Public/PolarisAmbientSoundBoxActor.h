#pragma once
#include "CoreMinimal.h"
#include "PolarisAmbientSoundShapeActor.h"
#include "PolarisAmbientSoundBoxActor.generated.h"

UCLASS()
class POLARIS_API APolarisAmbientSoundBoxActor : public APolarisAmbientSoundShapeActor {
    GENERATED_BODY()
public:
    APolarisAmbientSoundBoxActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndInside();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInside();
    
};

