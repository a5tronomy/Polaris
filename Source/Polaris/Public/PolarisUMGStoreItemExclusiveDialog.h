#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStoreDialog.h"
#include "PolarisUMGStoreItemExclusiveDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoreItemExclusiveDialog : public UPolarisUMGStoreDialog {
    GENERATED_BODY()
public:
    UPolarisUMGStoreItemExclusiveDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPartText(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWarningText(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddText(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPartText(const FString& text_id);
    
};

