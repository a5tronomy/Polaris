// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomizeItemViewportClient.h"
#include "PreviewScene.h"
#include "SEditorViewport.h"

class UCustomizeItem;
/**
 * 
 */
class SCustomizeItemEditorViewport : public SEditorViewport
{
public:
	SLATE_BEGIN_ARGS(SCustomizeItemEditorViewport) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	
	// virtual void BindCommands() override;
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
	
private:
	FPreviewScene PreviewScene;

	// Viewport client
	TSharedPtr<FCustomizeItemViewportClient> ViewportClient;
};
