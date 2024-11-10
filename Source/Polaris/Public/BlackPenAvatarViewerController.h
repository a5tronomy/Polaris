#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenAvatarViewerController.generated.h"

class AActor;

UCLASS()
class POLARIS_API ABlackPenAvatarViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
    ABlackPenAvatarViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRightTrigger(bool isPressing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRightStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLeftTrigger(bool isPressing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLeftStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SpawnAvatar(const TArray<int32>& EquipItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAvatarHidden(bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEmote(FName emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetAvatarActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusCamera(int32 EquipItems);
    
};

