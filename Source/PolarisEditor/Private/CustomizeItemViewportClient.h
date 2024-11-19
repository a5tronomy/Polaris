// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorViewportClient.h"

// Based of Paper Editor Viewport CLient.
class FCustomizeItemViewportClient : public FEditorViewportClient
{
public:
	FCustomizeItemViewportClient(FPreviewScene& InPreviewScene, const TSharedRef<SEditorViewport>& InEditorViewport);

	virtual void Tick(float DeltaSeconds) override;
};
