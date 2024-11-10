#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NpcAvatarMeshData.h"
#include "NpcAvatarData.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UNpcAvatarData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 slotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FNpcAvatarMeshData> meshDatas;
    
    UNpcAvatarData();

};

