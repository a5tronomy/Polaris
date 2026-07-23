#pragma once
#include "CoreMinimal.h"
#include "ELobbyTemplateMessageSubCategory.generated.h"

UENUM()
enum class ELobbyTemplateMessageSubCategory : uint8 {
    None,
    Character,
    Rank,
    BattleNum,
    Stage,
    Reason,
    Status,
    LaungeArea,
    GameMode,
    PlayWord,
    Customize,
    SeriesTitle,
};

