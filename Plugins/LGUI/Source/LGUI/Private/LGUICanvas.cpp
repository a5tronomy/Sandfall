#include "LGUICanvas.h"
#include "LGUIMeshComponent.h"
#include "Templates/SubclassOf.h"

ULGUICanvas::ULGUICanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->renderMode = ELGUIRenderMode::WorldSpace;
    this->RenderTarget = NULL;
    this->RenderTargetUpdateMode = ELGUICanvasRenderTargetUpdateMode::Automatic;
    this->RenderTargetSizeMode = ELGUICanvasRenderTargetSizeMode::RenderTargetFitToCanvas;
    this->RenderTargetResolutionScale = 1.00f;
    this->pixelPerfect = false;
    this->bOverrideSorting = false;
    this->SortOrder = 0;
    this->clipType = ELGUICanvasClipType::None;
    this->ClipTexture = NULL;
    this->clipTextureHitTestThreshold = 0.10f;
    this->inheritRectClip = true;
    this->customClip = NULL;
    this->dynamicPixelsPerUnit = 1.00f;
    this->additionalShaderChannels = 0;
    this->DefaultMaterials[0] = NULL;
    this->DefaultMaterials[1] = NULL;
    this->DefaultMaterials[2] = NULL;
    this->BlendDepth = 0.00f;
    this->depthFade = 0;
    this->bEnableDepthTest = false;
    this->OverrideParameters = 0;
    this->DefaultMeshType = ULGUIMeshComponent::StaticClass();
}

void ULGUICanvas::SetSortOrderToLowestOfHierarchy(bool propagateToChildrenCanvas) {
}

void ULGUICanvas::SetSortOrderToHighestOfHierarchy(bool propagateToChildrenCanvas) {
}

void ULGUICanvas::SetSortOrder(int32 NewValue, bool propagateToChildrenCanvas) {
}

void ULGUICanvas::SetRenderTargetUpdateMode(ELGUICanvasRenderTargetUpdateMode Value) {
}

void ULGUICanvas::SetRenderTargetSizeMode(ELGUICanvasRenderTargetSizeMode Value) {
}

void ULGUICanvas::SetRenderTargetResolutionScale(float Value) {
}

void ULGUICanvas::SetRenderTarget(UTextureRenderTarget2D* Value) {
}

void ULGUICanvas::SetRenderMode(ELGUIRenderMode Value) {
}

void ULGUICanvas::SetRectClipOffset(FMargin newOffset) {
}

void ULGUICanvas::SetRectClipFeather(FVector2D newFeather) {
}

void ULGUICanvas::SetProjectionParameters(TEnumAsByte<ECameraProjectionMode::Type> InProjectionType, float InFovAngle, float InNearClipPlane, float InFarClipPlane) {
}

void ULGUICanvas::SetPixelPerfect(bool Value) {
}

void ULGUICanvas::SetOverrideViewRotation(bool InOverride, FRotator InValue) {
}

void ULGUICanvas::SetOverrideViewLoation(bool InOverride, FVector InValue) {
}

void ULGUICanvas::SetOverrideSorting(bool Value) {
}

void ULGUICanvas::SetOverrideProjectionMatrix(bool InOverride, FMatrix InValue) {
}

void ULGUICanvas::SetOverrideFovAngle(bool InOverride, float InValue) {
}

void ULGUICanvas::SetInheriRectClip(bool newBool) {
}

void ULGUICanvas::SetEnableDepthTest(bool Value) {
}

void ULGUICanvas::SetDynamicPixelsPerUnit(float NewValue) {
}

void ULGUICanvas::SetDepthFade(int32 Value) {
}

void ULGUICanvas::SetDefaultMeshType(TSubclassOf<ULGUIMeshComponent> InValue) {
}

void ULGUICanvas::SetDefaultMaterials(const TArray<UMaterialInterface*>& InMaterialArray) {
}

void ULGUICanvas::SetCustomClip(ULGUICanvasCustomClip* Value) {
}

void ULGUICanvas::SetClipType(ELGUICanvasClipType newClipType) {
}

void ULGUICanvas::SetClipTexture(UTexture2D* newTexture) {
}

void ULGUICanvas::SetBlendDepth(float Value) {
}

void ULGUICanvas::RequestUpdateForRenderTarget() {
}

UUIItem* ULGUICanvas::GetUIItem() const {
    return NULL;
}

int32 ULGUICanvas::GetSortOrder() const {
    return 0;
}

ULGUICanvas* ULGUICanvas::GetRootCanvas() const {
    return NULL;
}

bool ULGUICanvas::GetRequireUV3() const {
    return false;
}

bool ULGUICanvas::GetRequireUV2() const {
    return false;
}

bool ULGUICanvas::GetRequireUV1() const {
    return false;
}

bool ULGUICanvas::GetRequireTangent() const {
    return false;
}

bool ULGUICanvas::GetRequireNormal() const {
    return false;
}

ELGUICanvasRenderTargetUpdateMode ULGUICanvas::GetRenderTargetUpdateMode() const {
    return ELGUICanvasRenderTargetUpdateMode::Automatic;
}

ELGUICanvasRenderTargetSizeMode ULGUICanvas::GetRenderTargetSizeMode() const {
    return ELGUICanvasRenderTargetSizeMode::None;
}

float ULGUICanvas::GetRenderTargetResolutionScale() const {
    return 0.0f;
}

UTextureRenderTarget2D* ULGUICanvas::GetRenderTarget() const {
    return NULL;
}

ELGUIRenderMode ULGUICanvas::GetRenderMode() const {
    return ELGUIRenderMode::ScreenSpaceOverlay;
}

bool ULGUICanvas::GetPixelPerfect() const {
    return false;
}

bool ULGUICanvas::GetOverrideSorting() const {
    return false;
}

bool ULGUICanvas::GetInheritRectClip() const {
    return false;
}

bool ULGUICanvas::GetEnableDepthTest() const {
    return false;
}

float ULGUICanvas::GetDynamicPixelsPerUnit() const {
    return 0.0f;
}

int32 ULGUICanvas::GetDepthFade() const {
    return 0;
}

TSubclassOf<ULGUIMeshComponent> ULGUICanvas::GetDefaultMeshType() const {
    return NULL;
}

TArray<UMaterialInterface*> ULGUICanvas::GetDefaultMaterials() const {
    return TArray<UMaterialInterface*>();
}

ULGUICanvasCustomClip* ULGUICanvas::GetCustomClip() const {
    return NULL;
}

ELGUICanvasClipType ULGUICanvas::GetClipType() const {
    return ELGUICanvasClipType::None;
}

UTexture2D* ULGUICanvas::GetClipTexture() const {
    return NULL;
}

FVector2D ULGUICanvas::GetClipFeather() const {
    return FVector2D{};
}

float ULGUICanvas::GetBlendDepth() const {
    return 0.0f;
}

int32 ULGUICanvas::GetActualSortOrder() const {
    return 0;
}

ELGUICanvasRenderTargetUpdateMode ULGUICanvas::GetActualRenderTargetUpdateMode() const {
    return ELGUICanvasRenderTargetUpdateMode::Automatic;
}

ELGUICanvasRenderTargetSizeMode ULGUICanvas::GetActualRenderTargetSizeMode() const {
    return ELGUICanvasRenderTargetSizeMode::None;
}

float ULGUICanvas::GetActualRenderTargetResolutionScale() const {
    return 0.0f;
}

UTextureRenderTarget2D* ULGUICanvas::GetActualRenderTarget() const {
    return NULL;
}

ELGUIRenderMode ULGUICanvas::GetActualRenderMode() const {
    return ELGUIRenderMode::ScreenSpaceOverlay;
}

bool ULGUICanvas::GetActualPixelPerfect() const {
    return false;
}

float ULGUICanvas::GetActualDynamicPixelsPerUnit() const {
    return 0.0f;
}

int32 ULGUICanvas::GetActualDepthFade() const {
    return 0;
}

ULGUICanvasCustomClip* ULGUICanvas::GetActualCustomClip() const {
    return NULL;
}

ELGUICanvasClipType ULGUICanvas::GetActualClipType() const {
    return ELGUICanvasClipType::None;
}

float ULGUICanvas::GetActualBlendDepth() const {
    return 0.0f;
}


