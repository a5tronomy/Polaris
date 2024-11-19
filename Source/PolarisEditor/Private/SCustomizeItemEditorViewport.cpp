// Fill out your copyright notice in the Description page of Project Settings.


#include "SCustomizeItemEditorViewport.h"

void SCustomizeItemEditorViewport::Construct(const FArguments& InArgs)
{
	SEditorViewport::Construct(SEditorViewport::FArguments());

	ViewportClient = MakeShareable(new FCustomizeItemViewportClient(PreviewScene, SharedThis(this)));
}

TSharedRef<FEditorViewportClient> SCustomizeItemEditorViewport::MakeEditorViewportClient()
{
	return ViewportClient.ToSharedRef();
}
