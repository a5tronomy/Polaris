#pragma once
#include "CoreMinimal.h"
#include "LobbyInformationData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyInformationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString infoId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 infoType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 infoTransition;
    
    UPROPERTY(BlueprintReadOnly)
    FString infoTransitionStrParam1;
    
    UPROPERTY(BlueprintReadOnly)
    int32 infoTransitionNumParam1;
    
    UPROPERTY(BlueprintReadOnly)
    FString arbitraryCategoryText;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    FString Text;
    
    UPROPERTY(BlueprintReadOnly)
    int32 alreadyReadFlag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 automaticDisplayFlag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 infoDisplayOrderID;
    
    UPROPERTY(BlueprintReadOnly)
    FString infoImageIdBig;
    
    UPROPERTY(BlueprintReadOnly)
    FString infoImageIdSmall;
    
    UPROPERTY(BlueprintReadOnly)
    int32 bannerDisplayOrderID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 bannerTransitionType;
    
    UPROPERTY(BlueprintReadOnly)
    FString bannerTransition;
    
    UPROPERTY(BlueprintReadOnly)
    FString bannerText1;
    
    UPROPERTY(BlueprintReadOnly)
    FString bannerText2;
    
    UPROPERTY(BlueprintReadOnly)
    FString bannerImageId;
    
    POLARIS_API FLobbyInformationData();
};

