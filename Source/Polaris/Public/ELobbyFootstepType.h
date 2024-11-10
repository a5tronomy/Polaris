#pragma once
#include "CoreMinimal.h"
#include "ELobbyFootstepType.generated.h"

UENUM()
enum class ELobbyFootstepType : uint8 {
    None,
    Step,
    Jump,
    Landing,
};

