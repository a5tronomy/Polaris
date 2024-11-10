#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MissileInfo.h"
#include "MissileInstanceInfo.h"
#include "MissileSpawnID.h"
#include "MissileManagerComponent.generated.h"

class APolarisCharacterActor;
class APolarisCharacterMissile;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMissileManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissileInfo> MissileInfo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalMissileCount;
    
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> OwnerPlayer;
    
    UMissileManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMissileInfo(int32 MissileHandle_t, FVector CurrentLocation, FVector CurrentDirection);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnMissileRequest(int32 MissileHandle_t, FMissileSpawnID SpawnID, int32 InstenceIndex, FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* GetSpawnedMissile(int32 MissileHandle_t);
    
    UFUNCTION(BlueprintCallable)
    FMissileInstanceInfo GetMissileInstanceInfo(int32 MissileHandle_t);
    
    UFUNCTION(BlueprintCallable)
    int32 CancelMissileRequest(int32 MissileHandle_t, bool IsDestory);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllMissiles(bool IsDestory);
    
};

