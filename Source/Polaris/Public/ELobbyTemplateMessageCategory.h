#pragma once
#include "CoreMinimal.h"
#include "ELobbyTemplateMessageCategory.generated.h"

UENUM()
enum class ELobbyTemplateMessageCategory : uint8 {
    None,
    History,
    All,
    Greeting,
    Battle,
    Emotions,
    Other,
};

