#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenuClampDelegateDelegate.h"
#include "PolarisUMGTextMenuDelegateDelegate.h"
#include "PolarisUMGTextMenuEditingDelegateDelegate.h"
#include "PolarisUMGTextMenuSelectableDelegateDelegate.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTextMenu.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTextMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTextMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void TransitionPrevMenu();
    
    UFUNCTION(BlueprintCallable)
    void TransitionNextMenu();
    
    UFUNCTION(BlueprintCallable)
    void SubCurrentMenuParam();
    
    UFUNCTION(BlueprintCallable)
    void StartTextMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectable(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuParam(int32 ID, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMenuParam(int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCommand(int32 ID);
    
    UFUNCTION(BlueprintPure)
    UTextBlock* GetMenuText(int32 ID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMenuParam(int32 ID) const;
    
    UFUNCTION(BlueprintPure)
    UTextBlock* GetCurrentMenuText() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentMenuParam() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentMenuIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentMenuId() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecCommand(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void AddCurrentMenuParam();
    
    UFUNCTION(BlueprintCallable)
    void AddCommand(int32 ID, FPolarisUMGTextMenuDelegate Activate, FPolarisUMGTextMenuDelegate inactivate, FPolarisUMGTextMenuEditingDelegate editing, FPolarisUMGTextMenuSelectableDelegate selectable, FPolarisUMGTextMenuClampDelegate Clamp, UTextBlock* Text, int32 Param, int32 step, bool is_selectable);
    
};

