#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPolarisCharacterAnimStatus.h"
#include "LobbyAvatarData_Struct.h"
#include "LobbyNetwork.h"
#include "LobbyGameInstanceSubsystem.generated.h"

class AActor;
class APolarisCharacterActor;
class ULobbyAvatarData;
class ULobbyBlackPen;
class ULobbyBlocks;
class ULobbyEmote;
class ULobbyEnemyInstance;
class ULobbyFriends;
class ULobbyInformation;
class ULobbyInventory;
class ULobbyMachineManager;
class ULobbyMatchingAnywhere;
class ULobbyNetworkObject;
class ULobbyNetworkSelect;
class ULobbyNpcTreasure;
class ULobbyPlayerStatus;
class ULobbyStamp;
class ULobbyTreasureEvent;
class ULobbyWatch;
class UPolarisParentalControl;

UCLASS(BlueprintType)
class POLARIS_API ULobbyGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnLobbyPlayerCharacter, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FForceCloseReport);
    
    UPROPERTY(BlueprintReadWrite)
    int32 _levelState;
    
    UPROPERTY(BlueprintReadWrite)
    FVector _location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator _rotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isSitting;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _seatId;
    
    UPROPERTY(BlueprintReadOnly)
    FVector _resumeLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator _resumeRotation;
    
    UPROPERTY(BlueprintReadWrite)
    bool _bReturnToLobby;
    
    UPROPERTY(BlueprintReadWrite)
    bool _bGotoCustomize;
    
    UPROPERTY(BlueprintReadWrite)
    bool _bGoToAnother;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isFemale;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isRandomFemale;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isArcadeController;
    
    UPROPERTY(BlueprintReadWrite)
    FString _dummyCosmosAddress;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDisableKamuiInput;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isUseNetwork;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isFixLobby;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDebugLength;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDebugForceFogOff;
    
    UPROPERTY(BlueprintReadWrite)
    FLobbyAvatarData_Struct _customize;
    
    UPROPERTY(BlueprintReadWrite)
    bool _bEmoteOffset;
    
    UPROPERTY(BlueprintReadWrite)
    FString _displayName;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isAlwaysMouseCursor;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isAlwaysMouseCamera;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDisplayPolarisId;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isEnemyDirectMove;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> _emoteShortcuts;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isCrossPlatform;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _interval;
    
    UPROPERTY(BlueprintReadWrite)
    bool _debugUiBlankSelectTest;
    
    UPROPERTY(BlueprintAssignable)
    FForceCloseReport OnForceCloseReport;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnLobbyPlayerCharacter OnSpawnLobbyPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite)
    FLobbyNetwork _network;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyNetworkObject* _networkObject;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyWatch* _watch;
    
    UPROPERTY()
    ULobbyEmote* _lobbyEmote;
    
    UPROPERTY()
    ULobbyBlocks* _blocks;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyFriends* _friends;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyInformation* _information;
    
    UPROPERTY()
    ULobbyMachineManager* _machines;
    
    UPROPERTY()
    ULobbyPlayerStatus* _playerStatus;
    
    UPROPERTY()
    ULobbyInventory* _inventory;
    
    UPROPERTY(BlueprintReadWrite)
    UPolarisParentalControl* _parentalcontrol;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyMatchingAnywhere* MatchingAnywhere;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyNetworkSelect* _lobbyNetworkSelect;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyBlackPen* _blackPen;
    
    UPROPERTY()
    ULobbyEnemyInstance* _enemyInstance;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyStamp* _stamp;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyNpcTreasure* _npcTreasure;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyTreasureEvent* _treasureEvent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastEnteredPasscode;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLoungeStandByStarted;
    
    ULobbyGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAnimation(APolarisCharacterActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadCharacter(int32 fighter_id, UPARAM(Ref) FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void StartDeleteCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnLobbyPlayerCharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToLobby(int32 levelState);
    
    UFUNCTION(BlueprintCallable)
    void SetResumeLocationAndRotation(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetGoToAnother(const AActor* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetPushedCamera();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PushCamera(const FRotator& Rotator, bool isLevelEnd);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGotoAnotherLevel2(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting, int32 seatId);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGotoAnotherLevel(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting);
    
    UFUNCTION(BlueprintCallable)
    void PopCamera(FRotator& Rotator, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationByStatus(EPolarisCharacterAnimStatus Status);
    
    UFUNCTION(BlueprintPure)
    bool IsLoadingCharacter();
    
    UFUNCTION(BlueprintPure)
    bool IsInitializedNetwork() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTekkenPowerString();
    
    UFUNCTION(BlueprintPure)
    FText GetPlayerName();
    
    UFUNCTION(BlueprintCallable)
    bool GetAndClearLoungeRelocation();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseReport();
    
};

