#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMBuddyMemoIconType.h"
#include "EPolarisTAMBuddyMemoItemType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMBuddyMemo.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMBuddyMemo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMBuddyMemo();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetVisibilityItemBG(EPolarisTAMBuddyMemoItemType item_type, bool is_visibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetVisibilityItem(EPolarisTAMBuddyMemoItemType item_type, bool is_visibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetVisibility(bool is_visibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetNameTextItem(EPolarisTAMBuddyMemoItemType item_type, FName Text, bool is_text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetIconItem(EPolarisTAMBuddyMemoItemType item_type, EPolarisTAMBuddyMemoIconType icon_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetCommandTextItem(EPolarisTAMBuddyMemoItemType item_type, FName Text, bool is_text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOutItem(EPolarisTAMBuddyMemoItemType item_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInItem(EPolarisTAMBuddyMemoItemType item_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn(bool is_right_side);
    
};

