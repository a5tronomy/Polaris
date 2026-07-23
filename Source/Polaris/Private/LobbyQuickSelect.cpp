#include "LobbyQuickSelect.h"

ULobbyQuickSelect::ULobbyQuickSelect() {
}

void ULobbyQuickSelect::SetRankRange(int32 rankRange) {
}

void ULobbyQuickSelect::SetRandomPlayerSide(bool isRandom) {
}

void ULobbyQuickSelect::SetQuickMatchRankRange(int32 rankRange) {
}

void ULobbyQuickSelect::SetPlayerSideLeft(bool isLeft) {
}

void ULobbyQuickSelect::SetMatchingCrossplay(bool bRankmatch, bool isCrossplay) {
}

void ULobbyQuickSelect::SetLineQuality(bool bRankmatch, int32 lineQuality) {
}

void ULobbyQuickSelect::OpenQuickPlayerCustomizeSelect() {
}

void ULobbyQuickSelect::OpenQuickCustomizeSelect() {
}

void ULobbyQuickSelect::OpenQuickCharacterSelect() {
}

bool ULobbyQuickSelect::IsRandomPlayerSide() const {
    return false;
}

bool ULobbyQuickSelect::IsPlayerSideLeft() const {
    return false;
}

bool ULobbyQuickSelect::IsOpenPlayerCustomizeSelect() const {
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

FString ULobbyQuickSelect::GetSelectedPlayerCustomizeSlotName() const {
    return TEXT("");
}

FString ULobbyQuickSelect::GetSelectedCustomizeSlotName() const {
    return TEXT("");
}

void ULobbyQuickSelect::GetSelectedCharacter(int32& FighterId, int32& costumeTypeId, int32& customizeSlotIndex) const {
}

TArray<FString> ULobbyQuickSelect::GetRankRangeText() {
    return TArray<FString>();
}

int32 ULobbyQuickSelect::GetRankRangeDefaultIndex() const {
    return 0;
}

int32 ULobbyQuickSelect::GetRankRange() const {
    return 0;
}

int32 ULobbyQuickSelect::GetQuickMatchRankRangeDefaultIndex() const {
    return 0;
}

int32 ULobbyQuickSelect::GetQuickMatchRankRange() const {
    return 0;
}

int32 ULobbyQuickSelect::GetLineQuality(bool bRankmatch) {
    return 0;
}

TArray<FString> ULobbyQuickSelect::GetInformationBarText() {
    return TArray<FString>();
}

void ULobbyQuickSelect::GetFighterNameTextId(int32 InFighterId, FString& OutFighterName) const {
}


