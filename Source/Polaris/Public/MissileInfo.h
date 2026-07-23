#pragma once
#include "CoreMinimal.h"
#include "MissileInstance.h"
#include "MissileInstanceInfo.h"
#include "Templates/SubclassOf.h"
#include "MissileInfo.generated.h"

class APolarisCharacterMissile;
class APolarisItemBaseActor;

USTRUCT(BlueprintType)
struct FMissileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisCharacterMissile> MissileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxInstanceNum;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FMissileInstanceInfo> SpawnedHandles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FMissileInstance> MissileInstance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsBorrowMainMesh;
    
    UPROPERTY(EditAnywhere)
    FName MissileTag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    APolarisItemBaseActor* MissileItemActor;
    
    POLARIS_API FMissileInfo();
};

