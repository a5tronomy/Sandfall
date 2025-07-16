#include "LGUIRenderTargetGeometrySource.h"

ULGUIRenderTargetGeometrySource::ULGUIRenderTargetGeometrySource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeometryMode = ELGUIRenderTargetGeometryMode::Plane;
    this->CylinderArcAngle = 45.00f;
    this->bOverrideStaticMeshMaterial = true;
    this->bEnableInteractOnBackside = false;
    this->bFlipVerticalOnGLES = true;
    this->BodySetup = NULL;
    this->MaterialInstance = NULL;
}

void ULGUIRenderTargetGeometrySource::SetPivot(const FVector2D Value) {
}

void ULGUIRenderTargetGeometrySource::SetGeometryMode(ELGUIRenderTargetGeometryMode Value) {
}

void ULGUIRenderTargetGeometrySource::SetFlipVerticalOnGLES(bool Value) {
}

void ULGUIRenderTargetGeometrySource::SetEnableInteractOnBackside(bool Value) {
}

void ULGUIRenderTargetGeometrySource::SetCylinderArcAngle(float Value) {
}

void ULGUIRenderTargetGeometrySource::SetCanvas(ULGUICanvas* Value) {
}

FIntPoint ULGUIRenderTargetGeometrySource::GetRenderTargetSize() const {
    return FIntPoint{};
}

UTextureRenderTarget2D* ULGUIRenderTargetGeometrySource::GetRenderTarget() const {
    return NULL;
}

FVector2D ULGUIRenderTargetGeometrySource::GetPivot() const {
    return FVector2D{};
}

bool ULGUIRenderTargetGeometrySource::GetOverrideStaticMeshMaterial() const {
    return false;
}

UMaterialInstanceDynamic* ULGUIRenderTargetGeometrySource::GetMaterialInstance() const {
    return NULL;
}

ELGUIRenderTargetGeometryMode ULGUIRenderTargetGeometrySource::GetGeometryMode() const {
    return ELGUIRenderTargetGeometryMode::Plane;
}

bool ULGUIRenderTargetGeometrySource::GetFlipVerticalOnGLES() const {
    return false;
}

bool ULGUIRenderTargetGeometrySource::GetEnableInteractOnBackside() const {
    return false;
}

float ULGUIRenderTargetGeometrySource::GetCylinderArcAngle() const {
    return 0.0f;
}

ULGUICanvas* ULGUIRenderTargetGeometrySource::GetCanvas() const {
    return NULL;
}


