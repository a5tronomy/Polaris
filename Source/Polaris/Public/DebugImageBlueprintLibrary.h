#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugImageBlueprintLibrary.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(BlueprintType)
class POLARIS_API UDebugImageBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugImageBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void TakeWidgetScreenShot(UUserWidget* Widget, int32 Width, int32 Height, TArray<FColor>& resultColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureResource(const FString& texture_file_path, const TArray<uint8>& raw_data, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRawImage(const TArray<uint8>& raw, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void SaveImage(const TArray<FColor>& Data, int32 Width, int32 Height, const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool RenderWidget(UUserWidget* Widget, int32 Width, int32 Height, TArray<FColor>& resultColor);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* CreateTempTextureAsset(const FString& temp_asset_name, UTexture2D* original_asset);
    
};

