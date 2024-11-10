#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProfileController.generated.h"

class AProfileCameraController;

UCLASS()
class POLARIS_API AProfileController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool InputEnabled;
    
    AProfileController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCharacterLoadingIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentVerticalIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentHorizontalIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL3();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnL1();
    
    UFUNCTION(BlueprintCallable)
    void OnEndedEdit(bool is_save);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedViewType(int32 view_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancel(int32 device_type);
    
    UFUNCTION(BlueprintCallable)
    bool IsLightLevelLoaded(int32 view_type);
    
    UFUNCTION()
    bool IsEnableInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentVerticalRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentHorizontalRepeat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCharacterLoadingIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasEmote(const FString& pose_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentVerticalNum();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetCurrentVerticalMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentVerticalIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentHorizontalNum();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetCurrentHorizontalMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentHorizontalIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCurrentDynamicsWaumupStepNum();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GetCharaPoseVCItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    AActor* GetCharacterSpawnRoot();
    
    UFUNCTION(BlueprintImplementableEvent)
    AProfileCameraController* GetCameraController();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GetBGVCItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetBgUnlockId(const FString& bg_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<FString> GetAvatarPoseVCItem();
    
};

