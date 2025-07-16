#include "UIItem.h"

UUIItem::UUIItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUIActive = true;
    this->hierarchyIndex = -1;
    this->flattenHierarchyIndex = 0;
    this->bRaycastTarget = false;
    this->TraceChannel = TraceTypeQuery3;
    this->bIsCanvasUIItem = false;
}

ULTweener* UUIItem::WidthTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::VerticalAnchoredPositionTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

void UUIItem::SetWidth(float Value) {
}

void UUIItem::SetVerticalAnchorMinMax(FVector2D Value, bool bKeepSize, bool bKeepRelativeLocation) {
}

void UUIItem::SetVerticalAnchoredPosition(float Value) {
}

void UUIItem::SetTraceChannel(TEnumAsByte<ETraceTypeQuery> InTraceChannel) {
}

void UUIItem::SetSizeDelta(FVector2D Value) {
}

void UUIItem::SetRaycastTarget(bool newBool) {
}

void UUIItem::SetPivot(FVector2D Value) {
}

void UUIItem::SetIsUIActive(bool Active) {
}

void UUIItem::SetHorizontalAndVerticalAnchorMinMax(FVector2D MinValue, FVector2D MaxValue, bool bKeepSize, bool bKeepRelativeLocation) {
}

void UUIItem::SetHorizontalAnchorMinMax(FVector2D Value, bool bKeepSize, bool bKeepRelativeLocation) {
}

void UUIItem::SetHorizontalAnchoredPosition(float Value) {
}

void UUIItem::SetHierarchyIndex(int32 inInt) {
}

void UUIItem::SetHeight(float Value) {
}

void UUIItem::SetDisplayName(const FString& InName) {
}

void UUIItem::SetAsLastHierarchy() {
}

void UUIItem::SetAsFirstHierarchy() {
}

void UUIItem::SetAnchorTop(float Value) {
}

void UUIItem::SetAnchorRight(float Value) {
}

void UUIItem::SetAnchorMin(FVector2D Value) {
}

void UUIItem::SetAnchorMax(FVector2D Value) {
}

void UUIItem::SetAnchorLeft(float Value) {
}

void UUIItem::SetAnchoredPosition(FVector2D Value) {
}

void UUIItem::SetAnchorData(const FUIAnchorData& Value) {
}

void UUIItem::SetAnchorBottom(float Value) {
}

ULTweener* UUIItem::PivotTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

bool UUIItem::IsWorldSpaceUI() const {
    return false;
}

bool UUIItem::IsScreenSpaceOverlayUI() const {
    return false;
}

bool UUIItem::IsRenderTargetUI() const {
    return false;
}

bool UUIItem::IsRaycastTarget() const {
    return false;
}

ULTweener* UUIItem::HorizontalAnchoredPositionTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::HeightTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

float UUIItem::GetWidth() const {
    return 0.0f;
}

float UUIItem::GetVerticalAnchoredPosition() const {
    return 0.0f;
}

TEnumAsByte<ETraceTypeQuery> UUIItem::GetTraceChannel() const {
    return TraceTypeQuery1;
}

FVector2D UUIItem::GetSizeDelta() const {
    return FVector2D{};
}

UUIItem* UUIItem::GetRootUIItemInHierarchy() const {
    return NULL;
}

ULGUICanvas* UUIItem::GetRootCanvas() const {
    return NULL;
}

ULGUICanvas* UUIItem::GetRenderCanvas() const {
    return NULL;
}

FVector2D UUIItem::GetPivot() const {
    return FVector2D{};
}

UUIItem* UUIItem::GetParentUIItem() const {
    return NULL;
}

float UUIItem::GetLocalSpaceTop() const {
    return 0.0f;
}

FVector2D UUIItem::GetLocalSpaceRightTopPoint() const {
    return FVector2D{};
}

float UUIItem::GetLocalSpaceRight() const {
    return 0.0f;
}

FVector2D UUIItem::GetLocalSpaceLeftBottomPoint() const {
    return FVector2D{};
}

float UUIItem::GetLocalSpaceLeft() const {
    return 0.0f;
}

FVector2D UUIItem::GetLocalSpaceCenter() const {
    return FVector2D{};
}

float UUIItem::GetLocalSpaceBottom() const {
    return 0.0f;
}

bool UUIItem::GetIsUIActiveSelf() const {
    return false;
}

bool UUIItem::GetIsUIActiveInHierarchy() const {
    return false;
}

float UUIItem::GetHorizontalAnchoredPosition() const {
    return 0.0f;
}

int32 UUIItem::GetHierarchyIndex() const {
    return 0;
}

float UUIItem::GetHeight() const {
    return 0.0f;
}

int32 UUIItem::GetFlattenHierarchyIndex() const {
    return 0;
}

FString UUIItem::GetDisplayName() const {
    return TEXT("");
}

ULGUICanvasScaler* UUIItem::GetCanvasScaler() const {
    return NULL;
}

UUICanvasGroup* UUIItem::GetCanvasGroup() const {
    return NULL;
}

TArray<UUIItem*> UUIItem::GetAttachUIChildren() const {
    return TArray<UUIItem*>();
}

UUIItem* UUIItem::GetAttachUIChild(int32 Index) const {
    return NULL;
}

float UUIItem::GetAnchorTop() const {
    return 0.0f;
}

float UUIItem::GetAnchorRight() const {
    return 0.0f;
}

FVector2D UUIItem::GetAnchorMin() const {
    return FVector2D{};
}

FVector2D UUIItem::GetAnchorMax() const {
    return FVector2D{};
}

float UUIItem::GetAnchorLeft() const {
    return 0.0f;
}

FVector2D UUIItem::GetAnchoredPosition() const {
    return FVector2D{};
}

FUIAnchorData UUIItem::GetAnchorData() const {
    return FUIAnchorData{};
}

float UUIItem::GetAnchorBottom() const {
    return 0.0f;
}

UUIItem* UUIItem::FindChildByDisplayName(const FString& InName, bool IncludeChildren) const {
    return NULL;
}

TArray<UUIItem*> UUIItem::FindChildArrayByDisplayName(const FString& InName, bool IncludeChildren) const {
    return TArray<UUIItem*>();
}

ULTweener* UUIItem::AnchorTopTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::AnchorRightTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::AnchorLeftTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::AnchoredPositionTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIItem::AnchorBottomTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}


