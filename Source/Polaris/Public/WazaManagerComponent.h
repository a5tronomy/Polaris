#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityItemData.h"
#include "WazaManagerComponent.generated.h"

class UItemPrefab;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWazaManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FAbilityItemData> AbilityItems;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 AnimatingID_Now;
    
    UWazaManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 RemoveAbilityItem(int32 ItemPositionId, int32 acc_num);
    
    UFUNCTION(BlueprintCallable)
    bool HasAbilityItem(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityItemData(int32 ID, FAbilityItemData& Data);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAbilityItem(int32 _Pos, UItemPrefab* source_ip, int32 acc_num, int32 itemId_Override);
    
};

