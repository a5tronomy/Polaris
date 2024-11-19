

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "WindSourceFactory.generated.h"

/**
 * 
 */
UCLASS()
class UWindSourceFactory : public UFactory
{
	GENERATED_BODY()

	UWindSourceFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
};
