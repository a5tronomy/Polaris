#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisSoundData.h"
#include "PolarisSoundDataName.h"
#include "PolarisSoundDataNiagara.h"
#include "PolarisSoundDataStoryBgmCtrlAct.h"
#include "PolarisSoundDataAsset.generated.h"

class UAkAudioBank;
class UAkAudioEvent;

UCLASS(BlueprintType)
class POLARIS_API UPolarisSoundDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioBank* AudioBank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundData> SoundDataBattleSysTone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundData> SoundDataMotionTone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundData> SoundDataVoiceTone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundData> SoundDataItemTone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundDataName> SoundDataDramaTone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisSoundDataNiagara> SoundDataNiagara;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataStoryBgmCore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataYbBgmCore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataCharacterEpisodeBgmCore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataStoryBgmPause;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataStoryBgmResume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FPolarisSoundDataStoryBgmCtrlAct> SoundDataStoryBgmCtrlActMap;
    
    UPolarisSoundDataAsset();

};

