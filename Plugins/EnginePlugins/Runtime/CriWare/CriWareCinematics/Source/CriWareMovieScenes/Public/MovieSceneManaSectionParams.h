#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneManaSectionParams.generated.h"

class UAtomComponent;
class UManaPlayer;
class UManaSource;
class UManaTexture;

USTRUCT()
struct FMovieSceneManaSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UAtomComponent* AtomComponent;
    
    UPROPERTY()
    UManaSource* ManaSource;
    
    UPROPERTY()
    UManaTexture* ManaTexture;
    
    UPROPERTY()
    UManaPlayer* ManaPlayer;
    
    UPROPERTY()
    FFrameNumber SectionStartFrame;
    
    UPROPERTY()
    FFrameNumber SectionEndFrame;
    
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    FFrameNumber StartFrameOffset;
    
    CRIWAREMOVIESCENES_API FMovieSceneManaSectionParams();
};

