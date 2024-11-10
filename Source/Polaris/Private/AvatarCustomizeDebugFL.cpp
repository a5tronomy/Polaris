#include "AvatarCustomizeDebugFL.h"

UAvatarCustomizeDebugFL::UAvatarCustomizeDebugFL() {
}

void UAvatarCustomizeDebugFL::SortAvatarItemOrderMap(const TMap<int32, int64>& Source, TMap<int32, int64>& Result) {
}

FAvatarItemData UAvatarCustomizeDebugFL::SetAvatarItemDataReleaseVersion(FAvatarItemData AvatarItemData, int32 ReleaseVersion) {
    return FAvatarItemData{};
}

void UAvatarCustomizeDebugFL::SetAssetThumbnail(const FAssetData& AssetData, const TArray<FColor>& colorDatas, int32 SizeX, int32 SizeY) {
}

void UAvatarCustomizeDebugFL::SaveAsset(UObject* Asset) {
}

void UAvatarCustomizeDebugFL::ReimportDataTable(UDataTable* DataTable) {
}

FString UAvatarCustomizeDebugFL::GetTableAsCSV(UDataTable* DataTable) {
    return TEXT("");
}

FString UAvatarCustomizeDebugFL::GetObjectJson(UObject* Object) {
    return TEXT("");
}

int32 UAvatarCustomizeDebugFL::GetAvatarItemDataReleaseVersion(const FAvatarItemData& AvatarItemData) {
    return 0;
}

void UAvatarCustomizeDebugFL::GetAssetThumbnailImageData(UObject* Asset, TArray<uint8>& ImageDatas) {
}

void UAvatarCustomizeDebugFL::CopyDataTable(UDataTable* sourceDataTable, UDataTable* targetDataTable) {
}


