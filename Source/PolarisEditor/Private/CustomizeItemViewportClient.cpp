// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizeItemViewportClient.h"

FCustomizeItemViewportClient::FCustomizeItemViewportClient(FPreviewScene& InPreviewScene,
	const TSharedRef<SEditorViewport>& InEditorViewport) : FEditorViewportClient(nullptr, &InPreviewScene, StaticCastSharedRef<SEditorViewport>(InEditorViewport))
{
	// Configure client settings
	SetRealtime(true);
	EngineShowFlags.SetCompositeEditorPrimitives(true);
}

void FCustomizeItemViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);
}
