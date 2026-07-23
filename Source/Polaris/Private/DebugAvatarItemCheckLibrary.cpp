#include "DebugAvatarItemCheckLibrary.h"

UDebugAvatarItemCheckLibrary::UDebugAvatarItemCheckLibrary() {
}

FString UDebugAvatarItemCheckLibrary::GetWarningMessages(const int32 fixed_release_version, const TMap<int32, FAvatarItemInvalidData>& invalid_datas) {
    return TEXT("");
}

FString UDebugAvatarItemCheckLibrary::GetErrorMessages(const int32 fixed_release_version, const TMap<int32, FAvatarItemInvalidData>& invalid_datas) {
    return TEXT("");
}

bool UDebugAvatarItemCheckLibrary::CheckHasInvalidItemData(UAvatarItemDataRepository* repository, TMap<int32, FAvatarItemInvalidData>& invalid_datas) {
    return false;
}


