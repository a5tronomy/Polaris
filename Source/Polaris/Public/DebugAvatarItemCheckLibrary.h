#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvatarItemInvalidData.h"
#include "DebugAvatarItemCheckLibrary.generated.h"

class UAvatarItemDataRepository;

UCLASS(BlueprintType)
class POLARIS_API UDebugAvatarItemCheckLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugAvatarItemCheckLibrary();

    UFUNCTION(BlueprintCallable)
    static FString GetWarningMessages(const int32 fixed_release_version, const TMap<int32, FAvatarItemInvalidData>& invalid_datas);
    
    UFUNCTION(BlueprintCallable)
    static FString GetErrorMessages(const int32 fixed_release_version, const TMap<int32, FAvatarItemInvalidData>& invalid_datas);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckHasInvalidItemData(UAvatarItemDataRepository* repository, TMap<int32, FAvatarItemInvalidData>& invalid_datas);
    
};

