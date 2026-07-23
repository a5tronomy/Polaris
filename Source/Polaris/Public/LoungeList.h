#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyLoungeData.h"
#include "LoungeList.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULoungeList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _lounges;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _crossLounges;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _platformLounges;
    
    ULoungeList();

    UFUNCTION(BlueprintPure)
    TMap<FString, FLobbyLoungeData> GetLounges(bool canCrossPlay) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FLobbyLoungeData> GetELounges(const FString& eLoungeId, bool canCrossPlay) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetELoungeIds(bool canCrossPlay) const;
    
};

