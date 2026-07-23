#pragma once
#include "CoreMinimal.h"
#include "EEngineIniFileType.generated.h"

UENUM()
namespace EEngineIniFileType {
    enum Type {
        EngBaseEngineIni,
        EngWindowsEngineIni,
        ProjDefaultEngineIni = 4,
        ProjWindowsEngineIni,
    };
}

