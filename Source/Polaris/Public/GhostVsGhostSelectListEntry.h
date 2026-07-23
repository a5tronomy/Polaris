#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GhostVsGhostSelectListEntry.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class POLARIS_API UGhostVsGhostSelectListEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString CharacterNameTextId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UTexture2D* CharacterTexture;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UTexture2D* RankTexture;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TekkenPower;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FDateTime UpdateAt;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 UpdateCount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 BattleVersion;
    
    UGhostVsGhostSelectListEntry();

};

