#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbyChatAddressType.h"
#include "EPlayerNameDisplayMode.h"
#include "LobbyChatAddressInfo.h"
#include "LobbyChatData.h"
#include "LobbyChatBlueprintFunctionLibrary.generated.h"

class ULobbyChatText;
class ULobbyChatTextAddressBook;
class ULobbyChatTextBalloon;
class ULobbyChatTextMessages;
class ULobbyChatTextSender;

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbyChatBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendTextLocal(const FLobbyChatAddressInfo& InSendTo, const FLobbyChatData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool SendText(const FLobbyChatAddressInfo& InSendTo, const FString& InMessage, FName InStampName, int32 InTemplateId, int32 InTemplateSubId);
    
    UFUNCTION(BlueprintCallable)
    static void SendSystemAllCategory(const FString& InMessage, bool InMessageID);
    
    UFUNCTION(BlueprintCallable)
    static void SendSystem(ELobbyChatAddressType Address, const FString& InMessageID, bool All);
    
    UFUNCTION(BlueprintCallable)
    static void SelfBalloon(const ELobbyChatAddressType& Address, const FString& Message, const FName& stampName, int32 templateId, int32 InTemplateSubId);
    
    UFUNCTION(BlueprintCallable)
    static bool ParseBattleResultMessageId(int32 InMessage, int32& OutMessageType, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    static bool OutputChatLog(bool InOutput, const FString& InTitle, const FString& InLog, bool InVerbose, bool InCallstack);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPressedLeftMouseButton();
    
    UFUNCTION(BlueprintPure)
    static EPlayerNameDisplayMode GetPlayerNameMode();
    
    UFUNCTION(BlueprintPure)
    static ULobbyChatTextSender* GetChatSender();
    
    UFUNCTION(BlueprintPure)
    static ULobbyChatTextMessages* GetChatMessages();
    
    UFUNCTION(BlueprintPure)
    static ULobbyChatTextBalloon* GetChatBalloon();
    
    UFUNCTION(BlueprintPure)
    static ULobbyChatTextAddressBook* GetChatAddressBook();
    
    UFUNCTION(BlueprintPure)
    static ULobbyChatText* GetChat();
    
    UFUNCTION(BlueprintCallable)
    static bool EnableChatUpdate();
    
    UFUNCTION(BlueprintCallable)
    static void ChatKeyboardEnable(bool InEnable);
    
};

