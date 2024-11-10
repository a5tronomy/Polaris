#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeSSQualityMode.h"
#include "XeSSBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeSSBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeSSQualityMode(EXeSSQualityMode QualityMode);
    
    UFUNCTION(BlueprintPure)
    static bool IsXeSSSupported();
    
    UFUNCTION(BlueprintCallable)
    static bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);
    
    UFUNCTION(BlueprintPure)
    static EXeSSQualityMode GetXeSSQualityMode();
    
    UFUNCTION(BlueprintPure)
    static TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();
    
    UFUNCTION(BlueprintPure)
    static EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);
    
};

