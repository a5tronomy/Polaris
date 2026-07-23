#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGLobbySelect.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGLobbySelect : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnQuit, bool, isSuccess, const FString&, loungeId, const FString&, loungeUrl, const FString&, loungeName, int32, loungePlatform, int64, LoungeBeginTargetCosmosId);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnQuit OnQuitSelection;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsLoungeMenu;
    
    UPolarisUMGLobbySelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLobbySelection(bool IsForceBestLounge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLoadingDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyLoginSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoginWarpRetry();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsSelectingFriendLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLoadingDialog();
    
};

