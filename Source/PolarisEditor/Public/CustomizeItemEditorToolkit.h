// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"

class UCustomizeItem;

class FCustomizeItemEditorToolkit : public FAssetEditorToolkit
{
public:
	
	static const FName ViewportId;
	static const FName DetailsId;
	
	void InitEditor(const TArray<UObject*>& InObjects);
 
	void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
	void UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
 
	FName GetToolkitFName() const override { return "PolarisCutomizeItemEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("Customize Item Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "Customize Item"; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }
	
private:
	UCustomizeItem* CustomizeItem;
};
