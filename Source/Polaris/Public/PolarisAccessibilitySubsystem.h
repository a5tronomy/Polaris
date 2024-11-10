#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PolarisAccessibilitySubsystem.generated.h"

class UTexture;

UCLASS()
class POLARIS_API UPolarisAccessibilitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTexture* CurrentTexture;
    
    UPROPERTY()
    UTexture* TextureToRelease;
    
public:
    UPolarisAccessibilitySubsystem();

};

