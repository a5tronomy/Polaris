#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AvatarCustomizeGameController.generated.h"

UCLASS()
class POLARIS_API AAvatarCustomizeGameController : public AActor {
    GENERATED_BODY()
public:
    AAvatarCustomizeGameController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateVerticalCursor(int32 Cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateShoulderCursor(int32 Cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRightTrigger(bool isPressing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRightStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLeftTrigger(bool isPressing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLeftStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHorizontalCursor(int32 Cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartScene();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpecialRightPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpecialLeftPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFaceButtonTopPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFaceButtonLeftPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<uint8> GetVerticalCursorMask();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetMaxVerticalCursorCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetMaxShoulderCursorCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetMaxHorizontalCursorCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCurrentVerticalCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCurrentShoulderCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetCurrentHorizontalCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanRepeatHorizontalCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Cancel();
    
};

