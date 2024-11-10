#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "AddMessageDelegateNewDelegate.h"
#include "ELobbyChatAddressType.h"
#include "ELobbyChatBehavior.h"
#include "LobbyChatData.h"
#include "RemoveMessageDelegateNewDelegate.h"
#include "LobbyChatTextMessages.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatTextMessages : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRemoveMessageDelegateNew OnMessageRemoveDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAddMessageDelegateNew OnMessageAddDelegate;
    
    ULobbyChatTextMessages();

    UFUNCTION(BlueprintCallable)
    void SetReportUser(FDateTime InDateTime, const FString& InOnlineId);
    
    UFUNCTION(BlueprintPure)
    bool HasMessageType(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid);
    
    UFUNCTION(BlueprintPure)
    bool HasMessageTextId(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const FString& InTextId) const;
    
    UFUNCTION(BlueprintPure)
    bool HasMessage(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid) const;
    
    UFUNCTION(BlueprintPure)
    bool GetReportText(int32& OutUnixTime, FString& OutOnlineId, FString& OutText) const;
    
    UFUNCTION(BlueprintPure)
    bool GetMessageNew(ELobbyChatBehavior InBehavior, FLobbyChatData& OutInfo, const int32& InGuid) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FLobbyChatData> GetMessageLatest(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, int32 InNum);
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetMessageIds(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType);
    
    UFUNCTION(BlueprintCallable)
    void AddMessageReceive(ELobbyChatAddressType InType, const FString& InMessage, const FString& InCosmosId, const FString& InPolarisId, const FString& InPlatformId, const FString& InOnlineId, const FString& InUserName);
    
};

