#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGReplayIdPlayer.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayIdPlayer : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayIdPlayer();

    UFUNCTION(BlueprintImplementableEvent)
    bool IsInputing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeUMG(const FString& Title, const FString& Initial, int32 maxLength);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasOutAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinalizeUMG();
    
    UFUNCTION(BlueprintCallable)
    void CallDecideCallback(const FString& Str);
    
    UFUNCTION(BlueprintCallable)
    FString CallCheckStringCallback(const FString& In);
    
    UFUNCTION(BlueprintCallable)
    void CallCancelCallback();
    
};

