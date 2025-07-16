#include "LGUIRenderTargetInteraction.h"

ULGUIRenderTargetInteraction::ULGUIRenderTargetInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEventBubbleUp = false;
    this->LineTraceSource = NULL;
    this->pointerEventData = NULL;
}


