#include "PolarisEditorModule.h"
#include "PhoenixTypeActions.h"
#include "PolarisTypeActions.h"
#include "SDockTab.h"
#include "STextBlock.h"
#include "ToolMenus.h"
#include "WindTypeActions.h"

IMPLEMENT_MODULE(FPolarisGameEditor, PolarisGameEditor)

#define LOCTEXT_NAMESPACE "FPolarisGameEditor"

void FPolarisGameEditor::StartupModule()
{
	// Register asset types
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
	PolarisGameAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Polaris")),
		LOCTEXT("PolarisAssetCategory", "Polaris"));

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAuraCharacterItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseCharacterItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseEyeItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FBaseMakeItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FCustomizeItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FCustomizeSetActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FEffectCharacterItemActions(PolarisGameAssetCategoryBit)));
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FItemPrefabActions(PolarisGameAssetCategoryBit)));

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FPhoenixDynamicBoneBinaryActions(PolarisGameAssetCategoryBit)));

	RegisterAssetTypeAction(AssetTools, MakeShareable(new FWindSourceActions(PolarisGameAssetCategoryBit)));
}

void FPolarisGameEditor::ShutdownModule()
{
	// Unregister the details customization
	//@TODO: Unregister them

	// Unregister all the asset types that we registered
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
		}
	}
		
	CreatedAssetTypeActions.Empty();
}

void FPolarisGameEditor::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

#undef LOCTEXT_NAMESPACE
