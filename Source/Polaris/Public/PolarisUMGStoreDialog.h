#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoreDialogSmallTextType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoreDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoreDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoreDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut(EStoreDialogSmallTextType dialog_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn(EStoreDialogSmallTextType dialog_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetEffectiveDateText(int32 coin_num, FDateTime date);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CursorEvent(int32 move_x, int32 move_y);
    
};

