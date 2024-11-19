#pragma once
#include "AssetTypeCategories.h"
#include "Modules/ModuleInterface.h"

#define TEKKENGAME_EDITOR_MODULE_NAME "PolarisGameEditor"

class FSpawnTabArgs;
class SDockTab;
class IAssetTypeActions;
class IAssetTools;

class FPolarisGameEditor : public IModuleInterface
{
public:
	
	virtual void StartupModule() override;
	
	virtual void ShutdownModule() override;

	EAssetTypeCategories::Type GetPolarisGameAssetCategory() const { return PolarisGameAssetCategoryBit; }

private:

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;

	EAssetTypeCategories::Type PolarisGameAssetCategoryBit = EAssetTypeCategories::Misc;

	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);
};
