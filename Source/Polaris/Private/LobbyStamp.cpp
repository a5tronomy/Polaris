#include "LobbyStamp.h"

ULobbyStamp::ULobbyStamp() {
    this->_dataTable = NULL;
}

ULobbyStamp* ULobbyStamp::LobbyStampData() {
    return NULL;
}

void ULobbyStamp::GetStampIndices(TArray<FName>& Result) {
}

TMap<FName, FLobbyStampInfo> ULobbyStamp::GetMap() const {
    return TMap<FName, FLobbyStampInfo>();
}

bool ULobbyStamp::GetInfo(const FName& Index, FLobbyStampInfo& Info) {
    return false;
}


