#pragma once
#include "CoreMinimal.h"
#include "ELobbyStampCategory.generated.h"

UENUM()
enum class ELobbyStampCategory : uint8 {
    Battle,
    Greeting,
    Emotions,
    Others,
    Favorite,
    All,
};

