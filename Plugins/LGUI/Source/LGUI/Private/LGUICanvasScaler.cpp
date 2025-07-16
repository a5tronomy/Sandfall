#include "LGUICanvasScaler.h"

ULGUICanvasScaler::ULGUICanvasScaler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectionType = ECameraProjectionMode::Perspective;
    this->FOVAngle = 60.00f;
    this->NearClipPlane = 1.00f;
    this->FarClipPlane = 10000.00f;
    this->UIScaleMode = ELGUICanvasScaleMode::ConstantPixelSize;
    this->MatchFromWidthToHeight = 1.00f;
    this->ScreenMatchMode = ELGUICanvasScreenMatchMode::MatchWidthOrHeight;
    this->CustomScale = NULL;
}

void ULGUICanvasScaler::SetUIScaleMode(ELGUICanvasScaleMode Value) {
}

void ULGUICanvasScaler::SetScreenMatchMode(ELGUICanvasScreenMatchMode Value) {
}

void ULGUICanvasScaler::SetReferenceResolution(FVector2D Value) {
}

void ULGUICanvasScaler::SetProjectionType(TEnumAsByte<ECameraProjectionMode::Type> Value) {
}

void ULGUICanvasScaler::SetNearClipPlane(float Value) {
}

void ULGUICanvasScaler::SetMatchFromWidthToHeight(float Value) {
}

void ULGUICanvasScaler::SetFovAngle(float Value) {
}

void ULGUICanvasScaler::SetFarClipPlane(float Value) {
}

void ULGUICanvasScaler::SetCustomScale(ULGUICanvasScalerCustomScale* Value) {
}

bool ULGUICanvasScaler::ProjectWorldToScreen(APlayerController* Player, const FVector& Position3D, FVector2D& OutPosition2D) const {
    return false;
}

bool ULGUICanvasScaler::Project3DToScreen(const FVector& Position3D, FVector2D& OutPosition2D) const {
    return false;
}

ELGUICanvasScaleMode ULGUICanvasScaler::GetUIScaleMode() {
    return ELGUICanvasScaleMode::ConstantPixelSize;
}

ELGUICanvasScreenMatchMode ULGUICanvasScaler::GetScreenMatchMode() {
    return ELGUICanvasScreenMatchMode::MatchWidthOrHeight;
}

FVector2D ULGUICanvasScaler::GetReferenceResolution() {
    return FVector2D{};
}

TEnumAsByte<ECameraProjectionMode::Type> ULGUICanvasScaler::GetProjectionType() const {
    return ECameraProjectionMode::Perspective;
}

float ULGUICanvasScaler::GetNearClipPlane() const {
    return 0.0f;
}

float ULGUICanvasScaler::GetMatchFromWidthToHeight() {
    return 0.0f;
}

float ULGUICanvasScaler::GetFOVAngle() const {
    return 0.0f;
}

float ULGUICanvasScaler::GetFarClipPlane() const {
    return 0.0f;
}

ULGUICanvasScalerCustomScale* ULGUICanvasScaler::GetCustomScale() const {
    return NULL;
}

void ULGUICanvasScaler::ForceUpdate() {
}

FVector2D ULGUICanvasScaler::ConvertPositionFromViewportToLGUICanvas(const FVector2D& position) const {
    return FVector2D{};
}

FVector2D ULGUICanvasScaler::ConvertPositionFromLGUICanvasToViewport(const FVector2D& position) const {
    return FVector2D{};
}


