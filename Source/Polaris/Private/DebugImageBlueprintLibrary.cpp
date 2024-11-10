#include "DebugImageBlueprintLibrary.h"

UDebugImageBlueprintLibrary::UDebugImageBlueprintLibrary() {
}

void UDebugImageBlueprintLibrary::TakeWidgetScreenShot(UUserWidget* Widget, int32 Width, int32 Height, TArray<FColor>& resultColor) {
}

void UDebugImageBlueprintLibrary::SetTextureResource(const FString& texture_file_path, const TArray<uint8>& raw_data, int32 Width, int32 Height) {
}

void UDebugImageBlueprintLibrary::SaveRawImage(const TArray<uint8>& raw, const FString& FilePath) {
}

void UDebugImageBlueprintLibrary::SaveImage(const TArray<FColor>& Data, int32 Width, int32 Height, const FString& FilePath) {
}

bool UDebugImageBlueprintLibrary::RenderWidget(UUserWidget* Widget, int32 Width, int32 Height, TArray<FColor>& resultColor) {
    return false;
}

UTexture2D* UDebugImageBlueprintLibrary::CreateTempTextureAsset(const FString& temp_asset_name, UTexture2D* original_asset) {
    return NULL;
}


