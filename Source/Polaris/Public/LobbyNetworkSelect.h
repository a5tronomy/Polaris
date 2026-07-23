#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyLoginResult.h"
#include "LobbyLoungeData.h"
#include "LobbyNetworkSelect.generated.h"

class ULoungeList;

UCLASS(BlueprintType)
class POLARIS_API ULobbyNetworkSelect : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSetTekkenName, int32, Status);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinLoungeEL, bool, isSuccess, ELobbyLoginResult, Result);
    DECLARE_DYNAMIC_DELEGATE_FourParams(FOnJoinLounge, bool, isSuccess, bool, isOver, bool, isNotFound, bool, isAbsent);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyUploadAvatarChange, int32, mainSlotNo);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnSearched, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnEventSearched, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_FiveParams(FLobbyOnBestLobby, bool, isSuccess, const FString&, loungeId, const FString&, loungeUrl, const FString&, loungeName, int32, loungePlatform);
    
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
    ULoungeList* _eLoungeList;
    
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
    void SetRequestedTargetCosmosId(const int64 TargetCosmosId);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestedLoungeData(const FLobbyLoungeData& loungeData);
    
    UFUNCTION(BlueprintCallable)
    void SearchFriendLobbies(ULobbyNetworkSelect::FLobbyOnSearched OnSearched);
    
    UFUNCTION(BlueprintCallable)
    void SearchEventLobbies(ULobbyNetworkSelect::FLobbyOnEventSearched OnSearched, bool usePreResult);
    
    UFUNCTION(BlueprintCallable)
    void SearchBestLobby(ULobbyNetworkSelect::FLobbyOnBestLobby OnBestLobby);
    
    UFUNCTION(BlueprintCallable)
    void SearchAreaLobbies(const FString& lobbyAreaId, ULobbyNetworkSelect::FLobbyOnSearched OnSearched);
    
    UFUNCTION(BlueprintCallable)
    void JoinLoungeEL(ULobbyNetworkSelect::FOnJoinLoungeEL OnJoinLounge);
    
    UFUNCTION(BlueprintCallable)
    void JoinLounge(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform, ULobbyNetworkSelect::FOnJoinLounge OnJoinLounge);
    
    UFUNCTION(BlueprintPure)
    bool IsELounge(const FString& loungeId) const;
    
    UFUNCTION(BlueprintPure)
    bool HasRequestedData() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetRequestedTargetCosmosId() const;
    
    UFUNCTION(BlueprintPure)
    FLobbyLoungeData GetRequestedLoungeData() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLoungePlayerCoordEL(int64 TargetCosmosId, ULobbyNetworkSelect::FOnJoinLoungeEL OnGetPlayerCoord);
    
    UFUNCTION(BlueprintCallable)
    void GetLoungePlayerCoord(int64 TargetCosmosId, ULobbyNetworkSelect::FOnJoinLounge OnGetPlayerCoord);
    
    UFUNCTION(BlueprintPure)
    FString GetLoungeName(const FString& lobbyPlace, const FString& lobbyName) const;
    
    UFUNCTION(BlueprintPure)
    FLobbyLoungeData GetLoungeData(const FString& loungeId) const;
    
    UFUNCTION(BlueprintPure)
    FLobbyLoungeData GetJoiningLoungeData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEventLobbiesNum() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDefaultLobbyArea() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentLoungeName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentLoungeId() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAndClearReserveAnotherLoungeId(FString& loungeId, FString& loungeUrl, FString& loungeName, int32& loungePlatform, int64& beginTargetCosmosId);
    
};

