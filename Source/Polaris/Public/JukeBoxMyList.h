#pragma once
#include "CoreMinimal.h"
#include "JukeBoxMyList.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FJukeBoxMyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadWrite)
    FString SceneTextId;
    
    UPROPERTY(BlueprintReadWrite)
    bool Climax;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BgmId;
    
    UPROPERTY(BlueprintReadWrite)
    FString BgmTextId;
    
    UPROPERTY(BlueprintReadWrite)
    bool Unlocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool NewMark;
    
    POLARIS_API FJukeBoxMyList();
};

