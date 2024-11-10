#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LobbyTreasureInfo.generated.h"

USTRUCT(BlueprintType)
struct FLobbyTreasureInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Shogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShogoBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GhostId;
    
    POLARIS_API FLobbyTreasureInfo();
};

