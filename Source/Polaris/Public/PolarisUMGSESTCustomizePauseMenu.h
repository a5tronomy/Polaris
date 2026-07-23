#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSESTCustomizePauseMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSESTCustomizePauseMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSESTCustomizePauseMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonDisplayGrid(int32 Index, bool display_grid, bool play_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayButtonAnim(int32 Index, FName anim_name, bool Loop, bool stop_all_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnim(FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMenu(const TArray<FString>& item_names);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeGridMenu(const TArray<FString>& Labels);
    
};

