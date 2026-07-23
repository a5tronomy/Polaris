#include "ChatGameInstanceSubsystem.h"

UChatGameInstanceSubsystem::UChatGameInstanceSubsystem() {
    this->m_TextChat = NULL;
}

ULobbyChatText* UChatGameInstanceSubsystem::GetTextChat() {
    return NULL;
}

FString UChatGameInstanceSubsystem::GetStreamerModeName(const FString& Name) {
    return TEXT("");
}


