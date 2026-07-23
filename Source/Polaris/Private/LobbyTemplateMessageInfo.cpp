#include "LobbyTemplateMessageInfo.h"

FLobbyTemplateMessageInfo::FLobbyTemplateMessageInfo() {
    this->MessageId = 0;
    this->Category = ELobbyTemplateMessageCategory::None;
    this->Category2 = ELobbyTemplateMessageCategory::None;
    this->Category3 = ELobbyTemplateMessageCategory::None;
    this->SubCategory = ELobbyTemplateMessageSubCategory::None;
    this->ReleaseVersion = 0;
}

