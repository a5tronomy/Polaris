#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGIngameStoreBlackPenSpecialBG.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenSpecialBG : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName in_name;
    
    UPROPERTY(EditAnywhere)
    FName out_name;
    
    UPROPERTY(EditAnywhere)
    FName stay_name;
    
    UPROPERTY(BlueprintReadOnly)
    UWidgetAnimation* in_anim;
    
    UPROPERTY(BlueprintReadOnly)
    UWidgetAnimation* out_anim;
    
    UPROPERTY(BlueprintReadOnly)
    UWidgetAnimation* stay_anim;
    
public:
    UPolarisUMGIngameStoreBlackPenSpecialBG();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayStay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayIn();
    
};

