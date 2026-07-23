#pragma once
#include "CoreMinimal.h"
#include "SurfaceData.h"
#include "DesignAssignStruct_Surface.generated.h"

class USurfacePreset;

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct_Surface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isUseSurfacePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USurfacePreset* Assign_Surface_Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSurfaceData Assign_Surface_Data;
    
    FDesignAssignStruct_Surface();
};

