#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "LobbyChatBalloonData.h"
#include "LobbyNameLayerWidget.generated.h"

class AActor;
class ULobbyNameLayerWidget;
class UObject;
class USceneComponent;

UCLASS(EditInlineNew)
class POLARIS_API ULobbyNameLayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TMap<UObject*, float> _objectDepth;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TMap<UObject*, UUserWidget*> _extraWidgets;
    
public:
    ULobbyNameLayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SortObjectDepth();
    
public:
    UFUNCTION(BlueprintCallable)
    static ULobbyNameLayerWidget* LobbyGetNameLayerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEnableTargetArrow(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetBallonChatNew2(AActor* Actor, const FLobbyChatBalloonData& ChatBalloonData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplRemoveExtraWidget(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplRemoveActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplOverrideName(AActor* Actor, const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplDebugDisableShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddExtraWidget(UObject* Object, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddAvatar(USceneComponent* AvatarHead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddActor(AActor* Actor, const FVector& Offset, const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMachineGuide2(AActor* Actor, const FVector& Offset, bool Guide, bool Arrow);
    
};

