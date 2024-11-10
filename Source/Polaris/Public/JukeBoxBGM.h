#pragma once
#include "CoreMinimal.h"
#include "JukeBoxBGM.generated.h"

USTRUCT(BlueprintType)
struct FJukeBoxBGM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BgmId;
    
    UPROPERTY(BlueprintReadWrite)
    FString BgmTextId;
    
    UPROPERTY(BlueprintReadWrite)
    bool Equipped;
    
    UPROPERTY(BlueprintReadWrite)
    bool Store;
    
    UPROPERTY(BlueprintReadWrite)
    bool Playing;
    
    UPROPERTY(BlueprintReadWrite)
    bool Unlocked;
    
    UPROPERTY(BlueprintReadWrite)
    bool NewMark;
    
    POLARIS_API FJukeBoxBGM();
};

