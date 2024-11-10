#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "StreamManaMovie.generated.h"

UCLASS()
class CRIWARERUNTIME_API UStreamManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    FString StreamUrl;
    
    UStreamManaMovie();

};

