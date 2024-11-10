#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvatarItemData.h"
#include "AvatarCustomizeDebugFL.generated.h"

class UDataTable;
class UObject;

UCLASS(BlueprintType)
class POLARIS_API UAvatarCustomizeDebugFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAvatarCustomizeDebugFL();

    UFUNCTION(BlueprintCallable)
    static void SortAvatarItemOrderMap(const TMap<int32, int64>& Source, TMap<int32, int64>& Result);
    
    UFUNCTION(BlueprintCallable)
    static FAvatarItemData SetAvatarItemDataReleaseVersion(FAvatarItemData AvatarItemData, int32 ReleaseVersion);
    
    UFUNCTION(BlueprintCallable)
    static void SetAssetThumbnail(const FAssetData& AssetData, const TArray<FColor>& colorDatas, int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable)
    static void SaveAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void ReimportDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTableAsCSV(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static FString GetObjectJson(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAvatarItemDataReleaseVersion(const FAvatarItemData& AvatarItemData);
    
    UFUNCTION(BlueprintCallable)
    static void GetAssetThumbnailImageData(UObject* Asset, TArray<uint8>& ImageDatas);
    
    UFUNCTION(BlueprintCallable)
    static void CopyDataTable(UDataTable* sourceDataTable, UDataTable* targetDataTable);
    
};

