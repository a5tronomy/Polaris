#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InviteSessionList.h"
#include "SessionPlayerName.h"
#include "SessionBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API USessionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyInviteSessionListDelegate, FInviteSessionList, Data);
    
    USessionBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RefuseInvite(const FString& session_id_string, const FString& cosmos_id_string);
    
    UFUNCTION(BlueprintPure)
    static bool IsSelf(const FString& cosmos_id);
    
    UFUNCTION(BlueprintPure)
    static float GetRemainWaitingConfirmTime();
    
    UFUNCTION(BlueprintCallable)
    static void GetInviteSessionList(USessionBlueprintFunctionLibrary::FLobbyInviteSessionListDelegate OnInviteSessionList);
    
    UFUNCTION(BlueprintPure)
    static FString GetDisplayName(const FSessionPlayerName& session_player_name);
    
    UFUNCTION(BlueprintPure)
    static bool ExistsInvitedSessions();
    
    UFUNCTION(BlueprintPure)
    static FDateTime ConvertToLocalDateTime(const FDateTime& UtcDateTime);
    
};

