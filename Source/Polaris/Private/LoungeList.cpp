#include "LoungeList.h"

ULoungeList::ULoungeList() {
}

TMap<FString, FLobbyLoungeData> ULoungeList::GetLounges(bool canCrossPlay) const {
    return TMap<FString, FLobbyLoungeData>();
}

TMap<FString, FLobbyLoungeData> ULoungeList::GetELounges(const FString& eLoungeId, bool canCrossPlay) const {
    return TMap<FString, FLobbyLoungeData>();
}

TArray<FString> ULoungeList::GetELoungeIds(bool canCrossPlay) const {
    return TArray<FString>();
}


