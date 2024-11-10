#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EColorFilterType.h"
#include "EColorSupportType.h"
#include "EMaskCharacterFilterType.h"
#include "EMaskStageFilterType.h"
#include "PolarisLightOptionSubsystem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisLightOptionSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 EffectBrightness;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ColorFilterLevel;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CharacterFilterLevel;
    
    UPROPERTY(BlueprintReadWrite)
    EColorSupportType ColorSupportType;
    
    UPROPERTY(BlueprintReadWrite)
    EColorFilterType ColorFilterType;
    
    UPROPERTY(BlueprintReadWrite)
    EMaskCharacterFilterType CharacterFilterType;
    
    UPROPERTY(BlueprintReadWrite)
    EMaskStageFilterType StageFilterType;
    
    UPolarisLightOptionSubsystem();

};

