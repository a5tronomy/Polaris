#include "DebugFileShareBlueprintLibrary.h"

UDebugFileShareBlueprintLibrary::UDebugFileShareBlueprintLibrary() {
}

void UDebugFileShareBlueprintLibrary::UploadNewPNG(const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const TArray<FString>& Tags, const FOnUploaded& Callback) {
}

void UDebugFileShareBlueprintLibrary::UploadNewJPEG(const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const TArray<FString>& Tags, const FOnUploaded& Callback) {
}

void UDebugFileShareBlueprintLibrary::UpdateTags(int32 resourceId, const TArray<FString>& Tags, const FOnResponsed& Callback) {
}

void UDebugFileShareBlueprintLibrary::UpdatePNG(int32 resourceId, const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const FOnUploaded& Callback) {
}

void UDebugFileShareBlueprintLibrary::UpdateJPEG(int32 resourceId, const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const FOnUploaded& Callback) {
}

void UDebugFileShareBlueprintLibrary::GetTagData(const FString& tagName, const FOnGetTagData& Callback) {
}

void UDebugFileShareBlueprintLibrary::GetResourceDatasByTagIds(const TArray<int32>& tagIds, const FOnGetResourceDatas& Callback) {
}

void UDebugFileShareBlueprintLibrary::GetResourceDatasByFileNames(const TArray<FString>& fileNames, const FOnGetResourceDatas& Callback) {
}


