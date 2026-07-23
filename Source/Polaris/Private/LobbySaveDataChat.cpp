#include "LobbySaveDataChat.h"

ULobbySaveDataChat::ULobbySaveDataChat() {
    this->IsDirty = false;
}

bool ULobbySaveDataChat::ShouldClearTemplateMessage() {
    return false;
}

TArray<int32> ULobbySaveDataChat::GetTemplateMessages() const {
    return TArray<int32>();
}

int32 ULobbySaveDataChat::GetTemplateMessageNum() const {
    return 0;
}

int32 ULobbySaveDataChat::GetTemplateMessage(int32 InIndex) const {
    return 0;
}

TArray<int32> ULobbySaveDataChat::GetStamps() const {
    return TArray<int32>();
}

int32 ULobbySaveDataChat::GetStampNum() const {
    return 0;
}

int32 ULobbySaveDataChat::GetStamp(int32 InIndex) const {
    return 0;
}

void ULobbySaveDataChat::ClearTemplateMessage() {
}

int32 ULobbySaveDataChat::AddTemplateMessage(int32 InId) {
    return 0;
}

int32 ULobbySaveDataChat::AddStamp(int32 InId) {
    return 0;
}


