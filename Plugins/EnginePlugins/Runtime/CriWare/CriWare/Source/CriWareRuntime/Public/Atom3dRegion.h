#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Atom3dRegion.generated.h"

class UAtom3dRegionHandle;

UCLASS(BlueprintType, EditInlineNew)
class CRIWARERUNTIME_API UAtom3dRegion : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UAtom3dRegionHandle* Handle;
    
public:
    UAtom3dRegion();

    UFUNCTION(BlueprintCallable)
    void SetHandle(UAtom3dRegionHandle* InHandle);
    
    UFUNCTION(BlueprintCallable)
    UAtom3dRegionHandle* GetHandle();
    
};

