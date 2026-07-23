#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnGetResourceDatasDelegate.h"
#include "OnGetTagDataDelegate.h"
#include "OnResponsedDelegate.h"
#include "OnUploadedDelegate.h"
#include "DebugFileShareBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UDebugFileShareBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugFileShareBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UploadNewPNG(const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const TArray<FString>& Tags, const FOnUploaded& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void UploadNewJPEG(const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const TArray<FString>& Tags, const FOnUploaded& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTags(int32 resourceId, const TArray<FString>& Tags, const FOnResponsed& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void UpdatePNG(int32 resourceId, const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const FOnUploaded& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateJPEG(int32 resourceId, const FString& DisplayName, const FString& Filename, const TArray<uint8>& imageData, const FOnUploaded& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void GetTagData(const FString& tagName, const FOnGetTagData& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void GetResourceDatasByTagIds(const TArray<int32>& tagIds, const FOnGetResourceDatas& Callback);
    
    UFUNCTION(BlueprintCallable)
    static void GetResourceDatasByFileNames(const TArray<FString>& fileNames, const FOnGetResourceDatas& Callback);
    
};

