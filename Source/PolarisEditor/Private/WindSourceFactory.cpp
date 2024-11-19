#include "WindSourceFactory.h"
#include "WindSourceAsset.h"

UWindSourceFactory::UWindSourceFactory()
{
	SupportedClass = UWindSourceAsset::StaticClass();
	bCreateNew = true;
}

UObject* UWindSourceFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                              UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UWindSourceAsset>(InParent, InClass, InName, Flags, Context);
}
