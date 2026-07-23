#pragma once
#include "CoreMinimal.h"
#include "PolarisButton.h"
#include "StoreButtonAnim.h"
#include "StoreButtonAnimName.h"
#include "PolarisUMGStoreButton.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoreButton : public UPolarisButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 cursor_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 cursor_y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoreButtonAnimName anim_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_se;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool is_selected_button;
    
    UPROPERTY()
    FStoreButtonAnim anims;
    
public:
    UPolarisUMGStoreButton();

    UFUNCTION(BlueprintCallable)
    void PlayDecideSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCursorSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonNormal(int32 num_loop);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonIn(int32 num_loop);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonHover(int32 num_loop);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonClick(int32 num_loop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyMenuAnimIn();
    
    UFUNCTION(BlueprintPure)
    int32 GetCursorY() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCursorX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallStoreSceneEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallItemDetailSceneEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallBlackPenSceneEvent();
    
};

