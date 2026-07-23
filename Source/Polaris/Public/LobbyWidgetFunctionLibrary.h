#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbyWidgetFunctionLibrary.generated.h"

class AActor;
class AGameModeBase;
class UPolarisUMGELoungeInfoDialog;
class UPolarisUMGLobbySelect;
class UUserWidget;

UCLASS(BlueprintType)
class POLARIS_API ULobbyWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbyWidgetFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static UPolarisUMGLobbySelect* CreateLobbySelectWidget(AGameModeBase* game_mode, bool IsLaungeMenu);
    
    UFUNCTION(BlueprintCallable)
    static UPolarisUMGELoungeInfoDialog* CreateLobbyMiniInfo(AGameModeBase* game_mode);
    
    UFUNCTION(BlueprintCallable)
    static AActor* CreateLobbyLogin(AGameModeBase* game_mode);
    
    UFUNCTION(BlueprintCallable)
    static UPolarisUMGELoungeInfoDialog* CreateLobbyInfo(AGameModeBase* game_mode);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* CreateEventIcon(AGameModeBase* game_mode);
    
};

