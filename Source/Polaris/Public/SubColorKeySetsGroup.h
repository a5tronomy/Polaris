#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESubColorKeySetsType.h"
#include "SubColorKeySets.h"
#include "SubColorKeySetsGroup.generated.h"

UCLASS(BlueprintType)
class POLARIS_API USubColorKeySetsGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_TipColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_MidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_H2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_L2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_H3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor_L3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_BaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_SSS_InnerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubColorKeySets SubColorKeySets_SSS_OuterColor;
    
    USubColorKeySetsGroup();

    UFUNCTION(BlueprintPure)
    void GetSubColorKeySets(FSubColorKeySets& _SubColorKeySets, ESubColorKeySetsType _type);
    
};

