#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "DebugPolarisCheatManager.generated.h"

UCLASS()
class POLARIS_API UDebugPolarisCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UDebugPolarisCheatManager();

    UFUNCTION(Exec)
    void PolarisShowMouseCursor(bool bShow);
    
};

