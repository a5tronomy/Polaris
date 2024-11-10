#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELobbyReportScreenType.h"
#include "PlayerProfileData.h"
#include "ProfileGameInstanceSubsystem.generated.h"

class ALobbyInputActor;
class APolarisCharacterActor;
class AProfileController;
class ULobbyUserWidget;

UCLASS(BlueprintType)
class POLARIS_API UProfileGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProfileCloseCallback);
    
private:
    UPROPERTY()
    AProfileController* ProfileController;
    
    UPROPERTY()
    ALobbyInputActor* InputActor;
    
    UPROPERTY()
    FString ViewUserId;
    
    UPROPERTY()
    FString OwnUserId;
    
    UPROPERTY()
    FPlayerProfileData ViewProfileData;
    
    UPROPERTY()
    FPlayerProfileData OwnProfileData;
    
    UPROPERTY()
    ELobbyReportScreenType reportScreenType;
    
    UPROPERTY()
    FString ReportBattleId;
    
    UPROPERTY()
    FProfileCloseCallback OnProfileClosed;
    
    UPROPERTY(Instanced)
    ULobbyUserWidget* ProfileMenu;
    
public:
    UProfileGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAnimation(APolarisCharacterActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetViewUserId(const FString& user_id);
    
    UFUNCTION(BlueprintCallable)
    void SetViewProfileData(const FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable)
    void SetReportScreenType(ELobbyReportScreenType screen_type);
    
    UFUNCTION(BlueprintCallable)
    void SetReportBattleId(const FString& report_battle_id);
    
    UFUNCTION(BlueprintCallable)
    void SetRefProfileMenu(ULobbyUserWidget* Menu);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileController(AProfileController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileCloseCallback(UProfileGameInstanceSubsystem::FProfileCloseCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnProfileData(const FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable)
    void SetInputManager(ALobbyInputActor* input_actor);
    
    UFUNCTION(BlueprintPure)
    int64 GetViewUserIdToInt64();
    
    UFUNCTION(BlueprintPure)
    FString GetViewUserId() const;
    
    UFUNCTION(BlueprintPure)
    FPlayerProfileData GetViewProfileData();
    
    UFUNCTION(BlueprintPure)
    ELobbyReportScreenType GetReportScreenType();
    
    UFUNCTION(BlueprintPure)
    FString GetReportBattleId();
    
    UFUNCTION(BlueprintPure)
    AProfileController* GetProfileController();
    
    UFUNCTION(BlueprintPure)
    FPlayerProfileData GetOwnProfileData();
    
    UFUNCTION(BlueprintPure)
    ALobbyInputActor* GetInputManager();
    
    UFUNCTION(BlueprintCallable)
    void ExitScene();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteProfileCloseCallback();
    
    UFUNCTION(BlueprintCallable)
    void ClearRefProfileMenu();
    
};

