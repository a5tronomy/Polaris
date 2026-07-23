#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleResultCommMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBattleResultCommMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleResultCommMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectedButton(int32 buttonIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonMessageId(int32 buttonIndex, int32 MessageType, int32 MessageId, int32 SubMessageId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsVisibleToUser();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 MessageType, int32 MessageId, int32 messageSubId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Close();
    
};

