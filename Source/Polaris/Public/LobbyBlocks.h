#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBlockMember.h"
#include "LobbyBlocks.generated.h"

class ULobbyBlocks;

UCLASS(BlueprintType)
class POLARIS_API ULobbyBlocks : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegate, bool, isSuccess);
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FOnlineBlockMember> _blockMembers;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int64> _pfblocks;
    
    UPROPERTY(BlueprintReadOnly)
    FString _tmpResult;
    
    ULobbyBlocks();

    UFUNCTION(BlueprintCallable)
    void Release(int64 cosmosId, ULobbyBlocks::FDelegate OnRelease);
    
    UFUNCTION(BlueprintPure)
    static ULobbyBlocks* OnlineBlock();
    
    UFUNCTION(BlueprintPure)
    bool IsBlock(int64 cosmosId, const FString& steamId);
    
    UFUNCTION(BlueprintCallable)
    void DownloadBlockList(ULobbyBlocks::FDelegate OnDownload, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void Add(int64 cosmosId, ULobbyBlocks::FDelegate OnAdd);
    
};

