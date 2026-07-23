#include "LobbyTemplateMessage.h"

ULobbyTemplateMessage::ULobbyTemplateMessage() {
    this->SubCategoryDataAsset = NULL;
}

bool ULobbyTemplateMessage::IsContainFilterWord(const FLobbyTemplateMessageInfo& message_info, const FString& filter_word) {
    return false;
}

FString ULobbyTemplateMessage::GetLocalizedTextForList(const FLobbyTemplateMessageInfo& message_info) {
    return TEXT("");
}

FString ULobbyTemplateMessage::GetLocalizedText(int32 template_id, int32 template_sub_id) {
    return TEXT("");
}

ULobbyTemplateMessage* ULobbyTemplateMessage::GetLobbyTemplateMessage() {
    return NULL;
}


