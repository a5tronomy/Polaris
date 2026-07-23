#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "SessionListData.h"
#include "PolarisUMGSessionList.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSessionList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSessionList();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSessionListNameType(int32 name_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSessionListDatas(const TArray<FSessionListData>& sessionListDatas);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOperationEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Select(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHideAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Cancel();
    
};

