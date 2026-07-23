#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectSequenceType.generated.h"

UENUM()
enum class ECharacterSelectSequenceType : uint8 {
    CharacterNone,
    CharacterEntry,
    CharacterDecide,
};

