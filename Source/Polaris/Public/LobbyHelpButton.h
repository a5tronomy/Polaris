#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyHelpButtonIconType.h"
#include "ELobbyHelpButtonSceneType.h"
#include "LobbyHelpButton.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyHelpButton : public UObject {
    GENERATED_BODY()
public:
    ULobbyHelpButton();

    UFUNCTION(BlueprintCallable)
    void Scene(ELobbyHelpButtonSceneType InType);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceButton(ELobbyHelpButtonIconType InIconType, FName InTextId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveButton(ELobbyHelpButtonIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyButton(const TMap<ELobbyHelpButtonIconType, FName>& InIconTypesAndTexts);
    
    UFUNCTION(BlueprintPure)
    static void GetReplacedButtons(TMap<ELobbyHelpButtonIconType, FName>& OutIconTypesAndTexts);
    
    UFUNCTION(BlueprintPure)
    static void GetRemovedButtons(TArray<ELobbyHelpButtonIconType>& OutIconTypes);
    
    UFUNCTION(BlueprintPure)
    static void GetModifiedButtons(TMap<ELobbyHelpButtonIconType, FName>& OutIconTypesAndTexts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Begin();
    
};

