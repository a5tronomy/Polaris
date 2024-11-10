#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidgetInput.h"
#include "PolarisUserWidget.h"
#include "LobbyUserWidget.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API ULobbyUserWidget : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FLobbyUserWidgetInput _input;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> _requests;
    
public:
    ULobbyUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSelectVerticalEx(UPARAM(Ref) int32& Index, int32 Num, bool upTrg, bool downTrg, int32& OldValue, int32& NewValue, bool& IsChanged);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectVertical(UPARAM(Ref) int32& Index, int32 Num, int32& OldValue, int32& NewValue, bool& IsChanged);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectHorizontalEx(UPARAM(Ref) int32& Index, int32 Num, bool leftTrg, bool rightTrg, int32& OldValue, int32& NewValue, bool& IsChanged);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectHorizontal(UPARAM(Ref) int32& Index, int32 Num, int32& OldValue, int32& NewValue, bool& IsChanged);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ThaiVowelsReplace(const FString& inStr, FString& outStr);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDiactive();
    
    UFUNCTION(BlueprintCallable)
    void SetActive();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReserveCursorPositionToYellowBook();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveFromResidentViewPort();
    
    UFUNCTION(BlueprintPure)
    static bool PolarisIsFreeItem();
    
    UFUNCTION(BlueprintPure)
    bool IsResidentViewPort() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnableFreeitemBalloon();
    
    UFUNCTION(BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetZOrder(int32& ZOrder, bool& Success) const;
    
    UFUNCTION(BlueprintCallable)
    void DebugDisableButtonHelp();
    
    UFUNCTION(BlueprintCallable)
    void ClearTriggers();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpStamp02();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpStamp01();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpScene(const FString& Scene);
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpPush();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpPop();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpPlayerMatchInviteList();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpNewsTop();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyMenuMatching();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyMenu();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyHelpFriendSubMenu();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyHelpFriendList();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyHelpCommunityList();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyHelpChat01();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyChoiceRegionDetail();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpLobbyChoiceCommon();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpInviteListMenuDialog();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpInviteList();
    
    UFUNCTION(BlueprintCallable)
    int32 ButtonHelpDepth();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpDecide();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpBlocklistTop();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHelpBlank();
    
    UFUNCTION(BlueprintCallable)
    void AddToResidentViewPort(int32 ZOrder);
    
};

