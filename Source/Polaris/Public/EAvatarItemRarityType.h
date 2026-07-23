#pragma once
#include "CoreMinimal.h"
#include "EAvatarItemRarityType.generated.h"

UENUM()
enum class EAvatarItemRarityType : uint8 {
    None,
    Default,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

