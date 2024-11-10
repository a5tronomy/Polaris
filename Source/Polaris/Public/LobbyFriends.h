#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyFriendsMember.h"
#include "LobbyFriends.generated.h"

class ULobbyFriends;

UCLASS(BlueprintType)
class POLARIS_API ULobbyFriends : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnsetRival, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSetRival, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRemoveFollow, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDownloadRival, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDownloadFollows, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCallbackSuccess_Status, bool, isSuccess, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCallbackSuccess, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCallbackBool, bool, isEnableCrossplay);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddFollow, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyDownloadFriendList, int32, Count);
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _friends;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _pfFriends;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FLobbyFriendsMember> _unplayedPfFriends;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _friendRequest;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _friendPending;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _follows;
    
    UPROPERTY(BlueprintReadOnly)
    int64 _rivalCosmosId;
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyFriendsMember _rivalInfo;
    
    ULobbyFriends();

    UFUNCTION(BlueprintCallable)
    void UnsetRival(ULobbyFriends::FOnUnsetRival OnUnsetRival);
    
    UFUNCTION(BlueprintCallable)
    void TestKamuiFunction();
    
    UFUNCTION(BlueprintCallable)
    void SetRival(int64 cosmosId, ULobbyFriends::FOnSetRival OnSetRival);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFriend(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess OnRemoveFriend);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFollow(int64 cosmosId, ULobbyFriends::FOnRemoveFollow OnRemoveFollow);
    
    UFUNCTION(BlueprintPure)
    static ULobbyFriends* OnlineFriend();
    
    UFUNCTION(BlueprintCallable)
    static void LobbyOpenResolvePrivilegeUI(ULobbyFriends::FOnCallbackBool OnFinishOpenResolvePrivilegeUI);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyClearOpenResolvePrivilegeUI();
    
    UFUNCTION(BlueprintPure)
    bool IsRival(int64 cosmosId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPfFriend(int64 cosmosId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPdFriend(int64 cosmosId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFriend(int64 cosmosId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFollow(int64 cosmosId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFriendNum(const FString& loungeId) const;
    
    UFUNCTION(BlueprintPure)
    void GetFriendList(TArray<FName>& friends) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFollowNum(const FString& loungeId) const;
    
    UFUNCTION(BlueprintCallable)
    void FriendRequest(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnRequestFriend);
    
    UFUNCTION(BlueprintCallable)
    void DownloadRival(ULobbyFriends::FOnDownloadRival OnDownloadRival, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DownloadPfFriendList(ULobbyFriends::FOnCallbackSuccess OnDownloadPfFriendList);
    
    UFUNCTION(BlueprintCallable)
    void DownloadFriendRequest(ULobbyFriends::FOnCallbackSuccess OnDownloadFriendRequest, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DownloadFriendPending(ULobbyFriends::FOnCallbackSuccess OnDownloadFriendPending);
    
    UFUNCTION(BlueprintCallable)
    void DownloadFriendList(ULobbyFriends::FLobbyDownloadFriendList OnDownloadFriendList, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DownloadFollows(ULobbyFriends::FOnDownloadFollows OnDownloadFollows, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void DenyPending(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnDenyPending);
    
    UFUNCTION(BlueprintCallable)
    void CancelRequest(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess OnCancelRequest);
    
    UFUNCTION(BlueprintCallable)
    void ApprovePending(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnApprovePending);
    
    UFUNCTION(BlueprintCallable)
    void AddFollow(int64 cosmosId, ULobbyFriends::FOnAddFollow OnAddFollow);
    
};

