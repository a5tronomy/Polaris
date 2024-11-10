#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGBallSelectDamageSetMoveType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBallSelectDamageSet.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBallSelectDamageSet : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBallSelectDamageSet();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowDamageSetUMG();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeUMG(int32 side, const FString& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideDamageSetUMG();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideDamageUMG(int32 damage_level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCursorMoveUMG(int32 damage_level, EPolarisUMGBallSelectDamageSetMoveType move_type);
    
    UFUNCTION(BlueprintCallable)
    void CallSelectLevelCallback(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideLevelCallback(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void CallCursorRightCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorLeftCallback();
    
};

