#pragma once
#include "CoreMinimal.h"
#include "LobbyLoungeData.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGELoungeInfoDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGELoungeInfoDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGELoungeInfoDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FLobbyLoungeData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingHideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
};

