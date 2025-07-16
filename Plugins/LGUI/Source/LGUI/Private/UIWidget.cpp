#include "UIWidget.h"

UUIWidget::UUIWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimingPolicy = EWidgetTimingPolicy::RealTime;
    this->WidgetClass = NULL;
    this->bManuallyRedraw = false;
    this->RedrawTime = 0.00f;
    this->ResolutionScale = 1.00f;
    this->bWindowFocusable = true;
    this->WindowVisibility = EWindowVisibility::SelfHitTestInvisible;
    this->bApplyGammaCorrection = false;
    this->TickWhenOffscreen = false;
    this->RenderTarget = NULL;
    this->TickMode = ETickMode::Enabled;
    this->Widget = NULL;
}

void UUIWidget::SetWindowVisibility(EWindowVisibility InVisibility) {
}

void UUIWidget::SetWindowFocusable(bool bInWindowFocusable) {
}

void UUIWidget::SetWidget(UUserWidget* NewWidget) {
}

void UUIWidget::SetTickWhenOffscreen(const bool bWantTickWhenOffscreen) {
}

void UUIWidget::SetTickMode(ETickMode InTickMode) {
}

void UUIWidget::SetResolutionScale(float Value) {
}

void UUIWidget::SetRedrawTime(float InRedrawTime) {
}

void UUIWidget::SetManuallyRedraw(bool bUseManualRedraw) {
}

void UUIWidget::SetBackgroundColor(const FLinearColor NewBackgroundColor) {
}

void UUIWidget::RequestRenderUpdate() {
}

bool UUIWidget::IsWidgetVisible() const {
    return false;
}

EWindowVisibility UUIWidget::GetWindowVisiblility() const {
    return EWindowVisibility::Visible;
}

bool UUIWidget::GetWindowFocusable() const {
    return false;
}

UUserWidget* UUIWidget::GetWidget() const {
    return NULL;
}

UUserWidget* UUIWidget::GetUserWidgetObject() const {
    return NULL;
}

bool UUIWidget::GetTickWhenOffscreen() const {
    return false;
}

float UUIWidget::GetResolutionScale() const {
    return 0.0f;
}

UTextureRenderTarget2D* UUIWidget::GetRenderTarget() const {
    return NULL;
}

float UUIWidget::GetRedrawTime() const {
    return 0.0f;
}

bool UUIWidget::GetManuallyRedraw() const {
    return false;
}

FVector2D UUIWidget::GetCurrentDrawSize() const {
    return FVector2D{};
}


