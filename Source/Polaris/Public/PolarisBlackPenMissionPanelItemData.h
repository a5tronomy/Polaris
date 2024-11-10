#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisBlackPenMissionPanelItemData.generated.h"

class UPolarisUMGStoreButton;

UCLASS(Blueprintable)
class POLARIS_API UPolarisBlackPenMissionPanelItemData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText title_text_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPolarisUMGStoreButton* reference_button;
    
    UPolarisBlackPenMissionPanelItemData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void CreatePanelData(const FText& title_text);
    
    UFUNCTION(BlueprintCallable)
    void Configure(int32 ID, UPolarisBlackPenMissionPanelItemData::FAction OnDecide, UPolarisBlackPenMissionPanelItemData::FAction OnSelect, UPolarisBlackPenMissionPanelItemData::FAction onUnselect);
    
};

