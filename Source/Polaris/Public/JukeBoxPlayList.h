#pragma once
#include "CoreMinimal.h"
#include "JukeBoxPlayList.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FJukeBoxPlayList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SeriesId;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite)
    FString textId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MyListNo;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PlayType;
    
    UPROPERTY(BlueprintReadWrite)
    bool Selected;
    
    UPROPERTY(BlueprintReadWrite)
    bool Store;
    
    UPROPERTY(BlueprintReadWrite)
    bool Unlocked;
    
    POLARIS_API FJukeBoxPlayList();
};

