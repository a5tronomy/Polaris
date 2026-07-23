#pragma once
#include "CoreMinimal.h"
#include "LobbySaveData.h"
#include "LobbySaveDataChat.generated.h"

UCLASS()
class POLARIS_API ULobbySaveDataChat : public ULobbySaveData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool IsDirty;
    
public:
    ULobbySaveDataChat();

    UFUNCTION(BlueprintCallable)
    bool ShouldClearTemplateMessage();
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetTemplateMessages() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTemplateMessageNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTemplateMessage(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetStamps() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStampNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStamp(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTemplateMessage();
    
    UFUNCTION(BlueprintCallable)
    int32 AddTemplateMessage(int32 InId);
    
    UFUNCTION(BlueprintCallable)
    int32 AddStamp(int32 InId);
    
};

