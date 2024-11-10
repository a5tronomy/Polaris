#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStoreItemType.h"
#include "PolarisIngameStoreMenuPanelData.generated.h"

class UPolarisUMGStoreButton;
class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API UPolarisIngameStoreMenuPanelData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoreItemType select_type_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* texture_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText title_text_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPolarisUMGStoreButton* reference_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_category_item;
    
    UPolarisIngameStoreMenuPanelData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text, bool enable_category);
    
    UFUNCTION(BlueprintCallable)
    void Configure(int32 ID, UPolarisIngameStoreMenuPanelData::FAction OnDecide, UPolarisIngameStoreMenuPanelData::FAction OnSelect, UPolarisIngameStoreMenuPanelData::FAction onUnselect);
    
};

