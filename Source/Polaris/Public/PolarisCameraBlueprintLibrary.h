#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisCameraBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class POLARIS_API UPolarisCameraBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisCameraBlueprintLibrary();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void PolarisGetCameraTransform(const UObject* WorldContextObject, int32 PlayerIndex, bool bGameOnly, FTransform& Transform, float& FOV, float& FOVNative, bool& EditorAlt);
    
};

