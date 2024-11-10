#pragma once
#include "CoreMinimal.h"
#include "EMobAlpacaMovePatern.generated.h"

UENUM()
enum class EMobAlpacaMovePatern {
    Idle,
    Walk,
    Huttobi,
    Escape,
    Respawn,
    Jump,
    Turn,
    Jump2,
    Respawn_Wait,
};

