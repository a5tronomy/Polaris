#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AvatarItemData.h"
#include "ELobbyAvatarItemType.h"
#include "LobbyAvatarItemDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyAvatarItemDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyAvatarItemType item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FAvatarItemData> item_data_map;
    
    ULobbyAvatarItemDataAsset();

    UFUNCTION(BlueprintPure)
    FAvatarItemData GetItemData(int32 item_id) const;
    
};

