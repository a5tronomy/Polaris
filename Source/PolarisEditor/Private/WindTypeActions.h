#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "WindSourceAsset.h"

class FWindSourceActions : public FAssetTypeActions_Base
{
public:
	FWindSourceActions(EAssetTypeCategories::Type InAssetCategory);
	
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_WindSource", "Wind Source"); }
	virtual FColor GetTypeColor() const override { return FColor(200, 200, 200); }
	virtual UClass* GetSupportedClass() const override { return UWindSourceAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return PolarisCategory; }
	
private:
	EAssetTypeCategories::Type PolarisCategory;
};
