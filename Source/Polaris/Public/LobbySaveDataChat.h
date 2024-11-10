#pragma once
#include "CoreMinimal.h"
#include "LobbySaveData.h"
#include "LobbySaveDataChat.generated.h"

UCLASS()
class POLARIS_API ULobbySaveDataChat : public ULobbySaveData {
    GENERATED_BODY()
public:
    ULobbySaveDataChat();

    UFUNCTION(BlueprintCallable)
    void SetTemplateMessage(int32 InIndex, int32 InId);
    
    UFUNCTION(BlueprintCallable)
    void SetStamp(int32 InIndex, int32 InId);
    
    UFUNCTION(BlueprintPure)
    int32 GetTemplateMessageNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTemplateMessage(int32 InIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStampNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStamp(int32 InIndex) const;
    
};

