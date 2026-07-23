#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyMatchGuide.generated.h"

UCLASS()
class POLARIS_API ALobbyMatchGuide : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetSessionInformation, bool, isSuccess);
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FString _sessionName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _maxJoinNum;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _joinNum;
    
    UPROPERTY(BlueprintReadOnly)
    bool _passcodeFlag;
    
    UPROPERTY(BlueprintReadOnly)
    int64 _cosmosId;
    
public:
    ALobbyMatchGuide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetSessionInformation(const FString& sessionId, ALobbyMatchGuide::FOnGetSessionInformation OnGetSessionInformation);
    
};

