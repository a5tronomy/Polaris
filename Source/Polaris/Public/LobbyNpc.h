#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyTreasureInfo.h"
#include "LobbyNpc.generated.h"

UCLASS()
class POLARIS_API ALobbyNpc : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isDevelopmentOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _isTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _treasureEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _treasureMsg_Exist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _treasureMsg_Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _treasureMsg_Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _treasureMsg_Fail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> _treasureUnlockIndices;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isExistTreasure;
    
    UPROPERTY(BlueprintReadWrite)
    FLobbyTreasureInfo _treasureInfo;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isReturenFromEvent;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isTreasureSuccess;
    
    ALobbyNpc(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FString ImplGetTreasureMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAccess();
    
};

