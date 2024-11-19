// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeItemEditorToolkit.h"
#include "CustomizeItem.h"
#include "PropertyEditorModule.h"
#include "SCustomizeItemEditorViewport.h"
#include "Widgets/Docking/SDockTab.h"
#include "Modules/ModuleManager.h"

const FName FCustomizeItemEditorToolkit::ViewportId(TEXT("CustomizeEditorViewportTab"));
const FName FCustomizeItemEditorToolkit::DetailsId(TEXT("CustomizeEditorDetailsTab"));

void FCustomizeItemEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	CustomizeItem = Cast<UCustomizeItem>(InObjects[0]);
	
	// This is our actual asset layout.
	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("CustomizeItemEditorLayout")
	->AddArea
	(
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewSplitter()
				->SetSizeCoefficient(0.6f)
				->SetOrientation(Orient_Horizontal)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.8f)
					->AddTab(ViewportId, ETabState::OpenedTab)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.2f)
					->AddTab(DetailsId, ETabState::OpenedTab)
				)
			));

	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "CustomizeItemEditor", Layout, true, true, InObjects);
}

void FCustomizeItemEditorToolkit::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	// This registers the tabs and the windows.
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(INVTEXT("Customize Item Editor"));

	InTabManager->RegisterTabSpawner(ViewportId, FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
	{
		return SNew(SDockTab)
		[
			SNew(SCustomizeItemEditorViewport)
		];
	}))
	.SetDisplayName(INVTEXT("Viewport"))
	.SetGroup(WorkspaceMenuCategory.ToSharedRef());
	
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObjects(TArray<UObject*>{ CustomizeItem });
	InTabManager->RegisterTabSpawner(DetailsId, FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
	{
		return SNew(SDockTab)
		[
			DetailsView
		];
	}))
	.SetDisplayName(INVTEXT("Details"))
	.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void FCustomizeItemEditorToolkit::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

	InTabManager->UnregisterTabSpawner(ViewportId);
	InTabManager->UnregisterTabSpawner(DetailsId);
}
