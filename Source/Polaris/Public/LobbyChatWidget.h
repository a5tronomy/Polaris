#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatType.h"
#include "EPlayerNameDisplayMode.h"
#include "LobbyUserWidgetInput.h"
#include "PolarisUserWidget.h"
#include "LobbyChatWidget.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API ULobbyChatWidget : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FLobbyUserWidgetInput Input;
    
    UPROPERTY(BlueprintReadOnly)
    bool windowVisibleStart;
    
    ULobbyChatWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInput(bool InIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetActive(bool Inactive, bool InEnableSE);
    
    UFUNCTION(BlueprintCallable)
    void OpenProfile(const FString& in_cosmos_id, int32 in_submenu_type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetEnableInputChat(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerNameChanged(EPlayerNameDisplayMode in_player_name_mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitializeChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseProfile();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsWindowVisible();
    
    UFUNCTION(BlueprintPure)
    bool IsRightMouseButtonPushing();
    
    UFUNCTION(BlueprintPure)
    bool IsIgnoreInput() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    ELobbyChatType GetChatType() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTrigger();
    
    UFUNCTION(BlueprintCallable)
    void ClearRightMouseButtonPushing();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTutorialSetEventFlag();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTutorialSessionSetEventFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveLogChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveInputBoxChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveDirectChat(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId);
    
};

