#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyTemplateMessageInfo.h"
#include "LobbyTemplateMessage.generated.h"

class ULobbyTemplateMessage;
class ULobbyTemplateMessageSubCategoryDataAsset;

UCLASS(BlueprintType)
class POLARIS_API ULobbyTemplateMessage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FLobbyTemplateMessageInfo> InfoMap;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, int32> OrderMap;
    
    UPROPERTY(BlueprintReadOnly)
    ULobbyTemplateMessageSubCategoryDataAsset* SubCategoryDataAsset;
    
    ULobbyTemplateMessage();

    UFUNCTION(BlueprintPure)
    bool IsContainFilterWord(const FLobbyTemplateMessageInfo& message_info, const FString& filter_word);
    
    UFUNCTION(BlueprintPure)
    FString GetLocalizedTextForList(const FLobbyTemplateMessageInfo& message_info);
    
    UFUNCTION(BlueprintPure)
    FString GetLocalizedText(int32 template_id, int32 template_sub_id);
    
    UFUNCTION(BlueprintPure)
    static ULobbyTemplateMessage* GetLobbyTemplateMessage();
    
};

