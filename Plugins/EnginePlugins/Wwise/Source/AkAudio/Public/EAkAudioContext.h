#pragma once
#include "CoreMinimal.h"
#include "EAkAudioContext.generated.h"

UENUM()
enum class EAkAudioContext {
    Foreign,
    GameplayAudio,
    EditorAudio,
    AlwaysActive,
};

