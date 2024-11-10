#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyFriendsMember.h"
#include "LobbyLoungeData.h"
#include "UserListDataArray.h"
#include "LobbyNetworkSelect.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyNetworkSelect : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSetTekkenName, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnJoinLounge, bool, isSuccess, bool, isOver, bool, isNotFound);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyUploadAvatarChange, int32, mainSlotNo);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnSearched, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_FiveParams(FLobbyOnBestLobby, bool, isSuccess, const FString&, loungeId, const FString&, loungeUrl, const FString&, loungeName, int32, loungePlatform);
    DECLARE_DYNAMIC_DELEGATE(FLobbyForceRename);
    
    UPROPERTY(BlueprintReadOnly)
    FString _selectedLobbyId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _selectedLobbyUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FString _selectedLobbyName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _selectedLobbyPlatform;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _lounges2;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _crossAreaLounges;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FLobbyLoungeData> _platformAreaLounges;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FUserListDataArray> _pfFriends;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FUserListDataArray> _friends;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _friends2;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int64, FLobbyFriendsMember> _pfFriends2;
    
    UPROPERTY(BlueprintReadOnly)
    FString _bestLoungeId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _bestLoungeUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FString _bestLoungeName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _bestLoungePlatform;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _currentLoungeNameVersion;
    
    ULobbyNetworkSelect();

    UFUNCTION(BlueprintCallable)
    void UploadAvatarChange(bool isFirstUpload, ULobbyNetworkSelect::FLobbyUploadAvatarChange OnUploadAvatarChange);
    
    UFUNCTION(BlueprintCallable)
    void SetTekkenName(const FString& playerName, const FString& Language, ULobbyNetworkSelect::FOnSetTekkenName OnSetTekkenName);
    
    UFUNCTION(BlueprintCallable)
    void SearchFriendLobbies(ULobbyNetworkSelect::FLobbyOnSearched OnSearched);
    
    UFUNCTION(BlueprintCallable)
    void SearchBestLobby(ULobbyNetworkSelect::FLobbyOnBestLobby OnBestLobby);
    
    UFUNCTION(BlueprintCallable)
    void SearchAreaLobbies(const FString& lobbyAreaId, ULobbyNetworkSelect::FLobbyOnSearched OnSearched);
    
    UFUNCTION(BlueprintCallable)
    void LobbyForceRename(ULobbyNetworkSelect::FLobbyForceRename OnForceRename);
    
    UFUNCTION(BlueprintCallable)
    void JoinLounge(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform, ULobbyNetworkSelect::FOnJoinLounge OnJoinLounge);
    
    UFUNCTION(BlueprintPure)
    FString GetLoungeName(const FString& lobbyPlace, const FString& lobbyName) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDefaultLobbyArea() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentLoungeName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentLoungeId() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAndClearReserveAnotherLoungeId(FString& loungeId, FString& loungeUrl, FString& loungeName, int32& loungePlatform);
    
    UFUNCTION(BlueprintCallable)
    void DecideFriendLounge(const FString& loungeName);
    
};

