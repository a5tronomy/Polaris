#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SurfaceData.h"
#include "SurfacePreset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API USurfacePreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSurfaceData Preset_Surface_Data;
    
    USurfacePreset();

};

