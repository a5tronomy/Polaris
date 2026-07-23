#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGCommunityMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCommunityMenu : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCommunityMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void RequestSetVisibilityRecursive(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestClose(bool Immediate);
    
    UFUNCTION(BlueprintCallable)
    void InvokeOnCloseCallback();
    
};

