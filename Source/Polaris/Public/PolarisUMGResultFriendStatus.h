#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResultFriendStatus.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGResultFriendStatus : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResultFriendStatus();

    UFUNCTION(BlueprintImplementableEvent)
    bool Successful();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRelationshipWithOpponent(int32 friends_request_status, bool is_already_following);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Running();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Request(bool request_friends, const FString& cosmos_id, const FString& platform_id, int32 platform_tag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimInPlaying();
    
};

