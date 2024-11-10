#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerNameDisplayMode.h"
#include "OnPlayerNameChangedDelegate.h"
#include "LobbyChatText.generated.h"

class ULobbyChatTextAddressBook;
class ULobbyChatTextBalloon;
class ULobbyChatTextMessages;
class ULobbyChatTextSender;

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatText : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ULobbyChatTextBalloon* Balloon;
    
    UPROPERTY(Transient)
    ULobbyChatTextMessages* Messages;
    
    UPROPERTY(Transient)
    ULobbyChatTextSender* Sender;
    
    UPROPERTY(Transient)
    ULobbyChatTextAddressBook* Address;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerNameChanged OnPlayerNameChangedDelegate;
    
    ULobbyChatText();

    UFUNCTION(BlueprintCallable)
    void Tick(float InDeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    static void SetDirectChatInfo(int32 InWhisperPlatform012, const FString& InWhisperPlayerName, const FString& InWhisperCosmosId, const FString& InWhisperPlatformId, const FString& InWhisperPolarisId, const FString& InWhisperOnlineId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDirectChatInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerNameModeChange(EPlayerNameDisplayMode InPlayerNameMode);
    
    UFUNCTION(BlueprintPure)
    bool IsLobbyJoined() const;
    
    UFUNCTION(BlueprintPure)
    ULobbyChatTextSender* GetSender() const;
    
    UFUNCTION(BlueprintPure)
    ULobbyChatTextMessages* GetMessages() const;
    
private:
    UFUNCTION(BlueprintPure)
    static bool GetDirectChatInfo(int32& OutWhisperPlatform012, FString& OutWhisperPlayerName, FString& OutWhisperCosmosId, FString& OutWhisperPlatformId, FString& OutWhisperPolarisId, FString& OutWhisperOnlineId);
    
public:
    UFUNCTION(BlueprintPure)
    ULobbyChatTextBalloon* GetBalloon() const;
    
    UFUNCTION(BlueprintPure)
    ULobbyChatTextAddressBook* GetAddress() const;
    
};

