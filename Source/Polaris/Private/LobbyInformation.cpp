#include "LobbyInformation.h"

ULobbyInformation::ULobbyInformation() {
}

void ULobbyInformation::Test1201(ULobbyInformation::FLobbyTest1201 OnTest1201) {
}

void ULobbyInformation::Test1200(ULobbyInformation::FLobbyTest1200 OnTest1200) {
}

void ULobbyInformation::ShowPlatformStoreItem(const FString& ItemId, ULobbyInformation::FOnCallbackStatus OnFinishPlatformStore) {
}

void ULobbyInformation::ShowPlatformStore(ULobbyInformation::FOnCallbackStatus OnFinishPlatformStore) {
}

void ULobbyInformation::SetAlreadyReadFlag(const FString& infoId) {
}

void ULobbyInformation::LogCount(ULobbyInformation::FOnLogCount OnLogCount) {
}

int32 ULobbyInformation::LobbyGetGameModeSubStoreByNewsIndex() {
    return 0;
}

int32 ULobbyInformation::LobbyGetGameModeStoreIndex() {
    return 0;
}

void ULobbyInformation::LobbyDecideGameModeStoreByNews() {
}

void ULobbyInformation::LobbyClearShowPlatformStore() {
}

bool ULobbyInformation::IsValidLog(int32 Index) {
    return false;
}

void ULobbyInformation::GetLogValue(int32 Index, FLobbyInformationLog& Result) {
}

void ULobbyInformation::DownloadLog(int32 Index, ULobbyInformation::FOnDownloadLog OnDownloadLog) {
}

void ULobbyInformation::DownloadInformations(ULobbyInformation::FLobbyDownloadInformations OnDownloadInformations) {
}

void ULobbyInformation::DebugBuyup(ULobbyInformation::FOnDebugBuyup OnDebugBuyup) {
}

void ULobbyInformation::ClearAutomaticFlags(ULobbyInformation::FLobbyClearAutomaticFlags OnClearAutomaticFlags) {
}


