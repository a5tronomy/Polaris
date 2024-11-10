#include "LobbyMatchingAnywhere.h"

ULobbyMatchingAnywhere::ULobbyMatchingAnywhere() {
    this->BattleMode = ELobbyMatchingAnywhere_BattleMode::Rank;
    this->CanChangeCrossPlayFlag = false;
}

void ULobbyMatchingAnywhere::Tick(float InDeltaSeconds) {
}

void ULobbyMatchingAnywhere::SetDefaultValues() {
}

void ULobbyMatchingAnywhere::SetBattleMode(ELobbyMatchingAnywhere_BattleMode InNewBattleMode) {
}

bool ULobbyMatchingAnywhere::CanChangeCrossPlay() const {
    return false;
}


