#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyUiManager.generated.h"

UCLASS()
class POLARIS_API ALobbyUiManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventOnParam, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEvent);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool _isMenuActive;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnEvent _OnMenuCancel;
    
    UPROPERTY(BlueprintAssignable)
    FOnEventOnParam _OnMenuDecide;
    
    UPROPERTY(BlueprintAssignable)
    FOnEvent _OnTalkFinish;
    
    ALobbyUiManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool LobbyIsMenuActive();
    
    UFUNCTION(BlueprintCallable)
    static AActor* LobbyGetUiManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplUpdateMaps(const TArray<AActor*>& Dummys, const TArray<AActor*>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplShowForProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplShowAreaNpcMenu(AActor* AreaNpc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplNpcTalk(const FString& Name, const TArray<FString>& Messages);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplHideForProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplDebugDisableMinimap();
    
    UFUNCTION(BlueprintCallable)
    void CallOnTalkFinish();
    
    UFUNCTION(BlueprintCallable)
    void CallOnMenuDecide(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void CallOnMenuCancel();
    
};

