#include "LobbyTreasureEvent.h"

ULobbyTreasureEvent::ULobbyTreasureEvent() {
}

bool ULobbyTreasureEvent::IsExist(const FString& eventId) const {
    return false;
}

bool ULobbyTreasureEvent::IsCleard(const FString& eventId) const {
    return false;
}

void ULobbyTreasureEvent::Api3100(const FString& eventId, const TArray<int32>& unlockIndices, ULobbyTreasureEvent::FOnApi3100 OnApi3100) {
}


