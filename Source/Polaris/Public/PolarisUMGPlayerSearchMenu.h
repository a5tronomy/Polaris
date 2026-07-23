#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGPlayerSearchMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerSearchMenu : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerSearchMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void RequestSetVisibilityRecursive(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestClose(bool Immediate);
    
};

