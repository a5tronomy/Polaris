#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CriFsLoader.generated.h"

class UCriFsLoaderComponent;

UCLASS(MinimalAPI)
class ACriFsLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCriFsLoaderComponent* LoaderComponent;
    
    ACriFsLoader(const FObjectInitializer& ObjectInitializer);

};

