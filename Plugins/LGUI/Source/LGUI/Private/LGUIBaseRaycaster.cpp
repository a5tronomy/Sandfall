#include "LGUIBaseRaycaster.h"

ULGUIBaseRaycaster::ULGUIBaseRaycaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->pointerID = -1;
    this->Depth = 0;
    this->rayLength = 10000.00f;
    this->TraceChannel = TraceTypeQuery3;
    this->eventFireType = ELGUIEventFireType::TargetActorAndAllItsComponents;
    this->clickThreshold = 5.00f;
    this->holdToDrag = false;
    this->holdToDragTime = 0.50f;
}

void ULGUIBaseRaycaster::SetHoldToDragTime(float Value) {
}

void ULGUIBaseRaycaster::SetHoldToDrag(bool Value) {
}

void ULGUIBaseRaycaster::SetClickThreshold(float Value) {
}

TEnumAsByte<ETraceTypeQuery> ULGUIBaseRaycaster::GetTraceChannel() const {
    return TraceTypeQuery1;
}

FVector ULGUIBaseRaycaster::GetRayOrigin() const {
    return FVector{};
}

float ULGUIBaseRaycaster::GetRayLength() const {
    return 0.0f;
}

FVector ULGUIBaseRaycaster::GetRayDirection() const {
    return FVector{};
}

int32 ULGUIBaseRaycaster::GetPointerID() const {
    return 0;
}

float ULGUIBaseRaycaster::GetHoldToDragTime() const {
    return 0.0f;
}

bool ULGUIBaseRaycaster::GetHoldToDrag() const {
    return false;
}

ELGUIEventFireType ULGUIBaseRaycaster::GetEventFireType() const {
    return ELGUIEventFireType::TargetActorAndAllItsComponents;
}

int32 ULGUIBaseRaycaster::GetDepth() const {
    return 0;
}

float ULGUIBaseRaycaster::GetClickThreshold() const {
    return 0.0f;
}

bool ULGUIBaseRaycaster::GetAffectByGamePause() const {
    return false;
}

void ULGUIBaseRaycaster::DeactivateRaycaster() {
}

void ULGUIBaseRaycaster::ActivateRaycaster() {
}


