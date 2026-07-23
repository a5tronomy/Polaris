#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyUIManager_Chat.generated.h"

UCLASS(Blueprintable)
class ULobbyUIManager_Chat : public UObject {
    GENERATED_BODY()
public:
    ULobbyUIManager_Chat();

    UFUNCTION(BlueprintCallable)
    void ToggleVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleChatButtonHelp(bool IsVisible, bool IsHideChatHideButtonHelp);
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveUI() const;
    
    UFUNCTION(BlueprintCallable)
    void HideUI();
    
    UFUNCTION(BlueprintCallable)
    void CloseChat();
    
    UFUNCTION(BlueprintCallable)
    void ActiveUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Active(bool InForce);
    
};

