#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "PlatformManaMovie.generated.h"

UCLASS()
class CRIWARERUNTIME_API UPlatformManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UManaMovie* ManaMovie;
    
public:
    UPlatformManaMovie();

};

