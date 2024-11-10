#include "LobbyEmoteInfo.h"

FLobbyEmoteInfo::FLobbyEmoteInfo() {
    this->EnableCancel = false;
    this->Category = ELobbyEmoteCategory::None;
    this->Always = false;
    this->unlockId = 0;
    this->Interpolation = ELobbyEmoteInterpolation::Default;
    this->Type = ELobbyEmoteType::None;
    this->rarity = 0;
}

