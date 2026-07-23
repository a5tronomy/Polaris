#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlaystationTournamentsTutorialMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlaystationTournamentsTutorialMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlaystationTournamentsTutorialMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkMenu(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkCategory(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMenuButton(int32 Index, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenuButton(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectTab(int32 Category);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateTab(const TArray<FString>& tabs);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMenuButton(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
};

