#pragma once
#include "CoreMinimal.h"
#include "LobbyTmpUserData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyTmpUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _name;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isFemale;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshHar;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshHed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshHaf;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshBdu;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshBtm;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _meshSho;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _skinColor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _hairColor;
    
    POLARIS_API FLobbyTmpUserData();
};

