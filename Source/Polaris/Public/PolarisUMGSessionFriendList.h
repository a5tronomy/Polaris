#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSessionFriendList.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSessionFriendList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool CanInviteOnlySamePlatform;
    
    UPolarisUMGSessionFriendList();

    UFUNCTION(BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResumeInput();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenProfile(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable)
    void OnInvite(const FString& cosmos_id, bool is_platform_friend);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasClosed();
    
};

