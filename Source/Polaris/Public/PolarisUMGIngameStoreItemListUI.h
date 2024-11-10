#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreItemListUI.generated.h"

class UGridPanel;
class UPolarisTextBlock;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreItemListUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGridPanel* GridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPolarisTextBlock* tb_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPolarisTextBlock* tb_title_1;
    
public:
    UPolarisUMGIngameStoreItemListUI();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetWidthNum() const;
    
};

