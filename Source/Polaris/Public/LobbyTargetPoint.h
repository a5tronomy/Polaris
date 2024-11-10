#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "ELobbyTargetPointType.h"
#include "LobbyTargetPoint.generated.h"

class ALobbyTargetPoint;

UCLASS()
class POLARIS_API ALobbyTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyTargetPointType _type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _index;
    
    ALobbyTargetPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void LobbyGetTargetPoints(ELobbyTargetPointType Type, TArray<ALobbyTargetPoint*>& targetPoints);
    
    UFUNCTION(BlueprintCallable)
    static ALobbyTargetPoint* LobbyGetTargetPoint(ELobbyTargetPointType Type);
    
};

