#include "LobbyHelpButton.h"

ULobbyHelpButton::ULobbyHelpButton() {
}

void ULobbyHelpButton::Scene(ELobbyHelpButtonSceneType InType) {
}

void ULobbyHelpButton::ReplaceButton(ELobbyHelpButtonIconType InIconType, FName InTextId) {
}

void ULobbyHelpButton::RemoveButton(ELobbyHelpButtonIconType InIconType) {
}

void ULobbyHelpButton::ModifyButton(const TMap<ELobbyHelpButtonIconType, FName>& InIconTypesAndTexts) {
}

void ULobbyHelpButton::GetReplacedButtons(TMap<ELobbyHelpButtonIconType, FName>& OutIconTypesAndTexts) {
}

void ULobbyHelpButton::GetRemovedButtons(TArray<ELobbyHelpButtonIconType>& OutIconTypes) {
}

void ULobbyHelpButton::GetModifiedButtons(TMap<ELobbyHelpButtonIconType, FName>& OutIconTypesAndTexts) {
}

bool ULobbyHelpButton::End_Implementation() {
    return false;
}

bool ULobbyHelpButton::Begin_Implementation() {
    return false;
}


