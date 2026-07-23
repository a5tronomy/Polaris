#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyBlackPenBanner.h"
#include "LobbyBlackPen.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyBlackPen : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyLotteryBlackPenMission, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyDownloadBlackPenBanner, bool, isSuccess);
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyBlackPenBanner _banner;
    
    ULobbyBlackPen();

    UFUNCTION(BlueprintCallable)
    void LotteryBlackPenMission(ULobbyBlackPen::FLobbyLotteryBlackPenMission OnLotteryBlackPenMission);
    
    UFUNCTION(BlueprintCallable)
    void DownloadBlackPenBanner(ULobbyBlackPen::FLobbyDownloadBlackPenBanner OnDownloadBlackPenBanner);
    
};

