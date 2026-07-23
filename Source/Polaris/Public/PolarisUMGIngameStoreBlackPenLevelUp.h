#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreDialogMenu.h"
#include "PolarisUMGIngameStoreBlackPenLevelUp.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenLevelUp : public UPolarisUMGIngameStoreDialogMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName extra_in_anim_name;
    
public:
    UPolarisUMGIngameStoreBlackPenLevelUp();

    UFUNCTION(BlueprintImplementableEvent)
    void SetLevelUpInfo(int32 before, int32 after);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetExtraFlag(bool is_extra);
    
};

