#include "LobbyQuickSelect.h"

ULobbyQuickSelect::ULobbyQuickSelect() {
}

void ULobbyQuickSelect::SetRankRange(int32 rankRange) {
}

void ULobbyQuickSelect::SetPlayerSideLeft(bool isLeft) {
}

void ULobbyQuickSelect::SetMatchingCrossplay(bool bRankmatch, bool isCrossplay) {
}

void ULobbyQuickSelect::SetLineQuality(bool bRankmatch, int32 lineQuality) {
}

void ULobbyQuickSelect::OpenQuickCustomizeSelect() {
}

void ULobbyQuickSelect::OpenQuickCharacterSelect() {
}

bool ULobbyQuickSelect::IsPlayerSideLeft() const {
    return false;
}

bool ULobbyQuickSelect::IsOpenCustomizeSelect() const {
    return false;
}

bool ULobbyQuickSelect::IsOpenCharacterSelect() const {
    return false;
}

bool ULobbyQuickSelect::IsMatchingCrossplay(bool bRankmatch) {
    return false;
}

FString ULobbyQuickSelect::GetSelectedCustomizeSlotName() const {
    return TEXT("");
}

void ULobbyQuickSelect::GetSelectedCharacter(int32& FighterId, int32& costumeTypeId, int32& customizeSlotIndex) const {
}

int32 ULobbyQuickSelect::GetRankRange() const {
    return 0;
}

int32 ULobbyQuickSelect::GetLineQuality(bool bRankmatch) {
    return 0;
}

void ULobbyQuickSelect::GetFighterNameTextId(int32 InFighterId, FString& OutFighterName) const {
}


