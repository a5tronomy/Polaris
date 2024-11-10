#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PolarisMenuEventSubsystem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisMenuEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuTitleSequence, int32, sequenceNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuInputFocus, bool, out);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuInOut, bool, out);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuBrightnessInOut, bool, out, bool, hdr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoge, int32, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecideMenu, int32, item_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeGameMode, int32, gamemode_id, int32, gamemode_sub_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeFighter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraFocus, bool, out);
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnHoge OnHogeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeGameMode OnChangeGameModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDecideMenu OnDecideMenuDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDecideMenu OnDecideShortcutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnMenuInOut OnMenuInOutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnMenuBrightnessInOut OnMenuBrightnessInOutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnMenuTitleSequence OnMenuTitleSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnMenuInputFocus OnMenuInputFocusDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnCameraFocus OnCameraFocusDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnChangeFighter OnChangeFighterDelegate;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool bImmediate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool bBlack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool bUseLatestSequenceNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    int32 LatestSequenceNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    bool LatestFocusOut;
    
    UPolarisMenuEventSubsystem();

    UFUNCTION(BlueprintPure)
    void GetAnalogAxisRight(float& X, float& Y) const;
    
};

