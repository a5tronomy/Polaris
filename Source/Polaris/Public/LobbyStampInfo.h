#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELobbyStampCategory.h"
#include "LobbyStampInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLobbyStampInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SmallTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 unlockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyStampCategory Category;
    
    POLARIS_API FLobbyStampInfo();
};

