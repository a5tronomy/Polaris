#include "LobbyNetworkSelect.h"

ULobbyNetworkSelect::ULobbyNetworkSelect() {
    this->_selectedLobbyPlatform = 0;
    this->_eLoungeList = NULL;
    this->_bestLoungePlatform = 0;
    this->_currentLoungeNameVersion = 0;
}

void ULobbyNetworkSelect::UploadAvatarChange(bool isFirstUpload, ULobbyNetworkSelect::FLobbyUploadAvatarChange OnUploadAvatarChange) {
}

void ULobbyNetworkSelect::SetTekkenName(const FString& playerName, const FString& Language, ULobbyNetworkSelect::FOnSetTekkenName OnSetTekkenName) {
}

void ULobbyNetworkSelect::SetRequestedTargetCosmosId(const int64 TargetCosmosId) {
}

void ULobbyNetworkSelect::SetRequestedLoungeData(const FLobbyLoungeData& loungeData) {
}

void ULobbyNetworkSelect::SearchFriendLobbies(ULobbyNetworkSelect::FLobbyOnSearched OnSearched) {
}

void ULobbyNetworkSelect::SearchEventLobbies(ULobbyNetworkSelect::FLobbyOnEventSearched OnSearched, bool usePreResult) {
}

void ULobbyNetworkSelect::SearchBestLobby(ULobbyNetworkSelect::FLobbyOnBestLobby OnBestLobby) {
}

void ULobbyNetworkSelect::SearchAreaLobbies(const FString& lobbyAreaId, ULobbyNetworkSelect::FLobbyOnSearched OnSearched) {
}

void ULobbyNetworkSelect::JoinLoungeEL(ULobbyNetworkSelect::FOnJoinLoungeEL OnJoinLounge) {
}

void ULobbyNetworkSelect::JoinLounge(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform, ULobbyNetworkSelect::FOnJoinLounge OnJoinLounge) {
}

bool ULobbyNetworkSelect::IsELounge(const FString& loungeId) const {
    return false;
}

bool ULobbyNetworkSelect::HasRequestedData() const {
    return false;
}

int64 ULobbyNetworkSelect::GetRequestedTargetCosmosId() const {
    return 0;
}

FLobbyLoungeData ULobbyNetworkSelect::GetRequestedLoungeData() const {
    return FLobbyLoungeData{};
}

void ULobbyNetworkSelect::GetLoungePlayerCoordEL(int64 TargetCosmosId, ULobbyNetworkSelect::FOnJoinLoungeEL OnGetPlayerCoord) {
}

void ULobbyNetworkSelect::GetLoungePlayerCoord(int64 TargetCosmosId, ULobbyNetworkSelect::FOnJoinLounge OnGetPlayerCoord) {
}

FString ULobbyNetworkSelect::GetLoungeName(const FString& lobbyPlace, const FString& lobbyName) const {
    return TEXT("");
}

FLobbyLoungeData ULobbyNetworkSelect::GetLoungeData(const FString& loungeId) const {
    return FLobbyLoungeData{};
}

FLobbyLoungeData ULobbyNetworkSelect::GetJoiningLoungeData() const {
    return FLobbyLoungeData{};
}

int32 ULobbyNetworkSelect::GetEventLobbiesNum() const {
    return 0;
}

FString ULobbyNetworkSelect::GetDefaultLobbyArea() const {
    return TEXT("");
}

FString ULobbyNetworkSelect::GetCurrentLoungeName() const {
    return TEXT("");
}

FString ULobbyNetworkSelect::GetCurrentLoungeId() const {
    return TEXT("");
}

void ULobbyNetworkSelect::GetAndClearReserveAnotherLoungeId(FString& loungeId, FString& loungeUrl, FString& loungeName, int32& loungePlatform, int64& beginTargetCosmosId) {
}


