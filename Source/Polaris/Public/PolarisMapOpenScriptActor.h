#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisMapOpenScriptActor.generated.h"

UCLASS()
class POLARIS_API APolarisMapOpenScriptActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PersistentLevelName;
    
    APolarisMapOpenScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnMapChangeBP(FString& Message, bool bBegin);
    
};

