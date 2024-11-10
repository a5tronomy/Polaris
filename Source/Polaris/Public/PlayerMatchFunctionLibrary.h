#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerMatchPlayerInfo.h"
#include "PlayerMatchFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UPlayerMatchFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerMatchFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static bool Equal(const FString& cosmos_id, const FPlayerMatchPlayerInfo& player_info);
    
};

