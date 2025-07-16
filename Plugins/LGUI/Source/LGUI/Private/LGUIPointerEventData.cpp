#include "LGUIPointerEventData.h"

ULGUIPointerEventData::ULGUIPointerEventData() {
    this->InputType = ELGUIPointerInputType::Pointer;
    this->pointerID = 0;
    this->enterComponent = NULL;
    this->FaceIndex = -1;
    this->raycaster = NULL;
    this->mouseButtonType = EMouseButtonType::Left;
    this->pressComponent = NULL;
    this->pressDistance = 0.00f;
    this->pressRaycaster = NULL;
    this->clickTime = 0.00f;
    this->ReleaseTime = 0.00f;
    this->pressTime = 0.00f;
    this->isDragging = false;
    this->dragComponent = NULL;
}

void ULGUIPointerEventData::SetHighlightedComponentForNavigation(USceneComponent* InComp) {
}

bool ULGUIPointerEventData::IsPointerOverUI() {
    return false;
}

FVector ULGUIPointerEventData::GetWorldPointSpherical() const {
    return FVector{};
}

FVector ULGUIPointerEventData::GetWorldPointInPlane() const {
    return FVector{};
}

FVector ULGUIPointerEventData::GetLocalPointInPlane() const {
    return FVector{};
}

USceneComponent* ULGUIPointerEventData::GetHighlightedComponentForNavigation() const {
    return NULL;
}

FVector ULGUIPointerEventData::GetDragRayOrigin() const {
    return FVector{};
}

FVector ULGUIPointerEventData::GetDragRayDirection() const {
    return FVector{};
}

FVector ULGUIPointerEventData::GetCumulativeMoveDelta() const {
    return FVector{};
}


