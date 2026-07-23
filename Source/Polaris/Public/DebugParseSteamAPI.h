#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugParseSteamAPI.generated.h"

UCLASS()
class POLARIS_API ADebugParseSteamAPI : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _total_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _total_positive_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _total_negative_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _recent_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _recent_positive_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _recent_negative_review_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _current_player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _average_player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _game_title;
    
    ADebugParseSteamAPI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnResponseTitleName(const FString& res, const FString& app_id);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseRecentReviews(const FString& res);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseCurrentPlayerNum(const FString& res);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseAllReviews(const FString& res);
    
    UFUNCTION(BlueprintPure)
    FString GetAllReviewRankMsg(int32 rank);
    
    UFUNCTION(BlueprintCallable)
    int32 CalucTargetRatePositiveNum(int32 current_total, int32 current_positive, float Rate, int32& minus_negative);
    
    UFUNCTION(BlueprintPure)
    int32 CalucReviewRank(int32 positive_num, int32 all_num);
    
    UFUNCTION(BlueprintCallable)
    int32 CalucRequiredNextPositiveNum(int32 current_total, int32 current_positive, int32& minus_negative);
    
    UFUNCTION(BlueprintCallable)
    int32 CalucDaysUntilRateReached();
    
};

