#pragma once
#include "CoreMinimal.h"
#include "ContentPanelData.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreDialogMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreDialogMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreDialogMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RepWarningText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPlatformPanel(const TArray<FContentPanelData>& content_list);
    
};

