#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneManaSectionParams.h"
#include "MovieSceneManaSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneManaSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneManaSectionParams Params;
    
public:
    CRIWAREMOVIESCENES_API FMovieSceneManaSectionTemplate();
};

