#include "UIProceduralRect.h"

UUIProceduralRect::UUIProceduralRect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CornerRadiusUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->bSoftEdge = true;
    this->bEnableBody = true;
    this->BodyTextureMode = EUIProceduralBodyTextureMode::Texture;
    this->BodyTexture = NULL;
    this->BodySpriteTexture = NULL;
    this->BodyTextureScaleMode = EUIProceduralRectTextureScaleMode::Stretch;
    this->bEnableBodyGradient = false;
    this->BodyGradientCenterUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->BodyGradientRadiusUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->BodyGradientRotation = 0.00f;
    this->bEnableBorder = false;
    this->BorderWidth = 2.00f;
    this->BorderWidthUnitMode = EUIProceduralRectUnitMode::Value;
    this->bEnableBorderGradient = false;
    this->BorderGradientCenterUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->BorderGradientRadiusUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->BorderGradientRotation = 0.00f;
    this->bEnableInnerShadow = false;
    this->InnerShadowSize = 0.00f;
    this->InnerShadowSizeUnitMode = EUIProceduralRectUnitMode::Value;
    this->InnerShadowBlur = 4.00f;
    this->InnerShadowBlurUnitMode = EUIProceduralRectUnitMode::Value;
    this->InnerShadowAngle = 45.00f;
    this->InnerShadowDistance = 0.00f;
    this->InnerShadowDistanceUnitMode = EUIProceduralRectUnitMode::Value;
    this->bEnableRadialFill = false;
    this->RadialFillCenterUnitMode = EUIProceduralRectUnitMode::Percentage;
    this->RadialFillRotation = 0.00f;
    this->RadialFillAngle = 270.00f;
    this->bEnableOuterShadow = false;
    this->OuterShadowSize = 0.00f;
    this->OuterShadowSizeUnitMode = EUIProceduralRectUnitMode::Value;
    this->OuterShadowBlur = 4.00f;
    this->OuterShadowBlurUnitMode = EUIProceduralRectUnitMode::Value;
    this->OuterShadowAngle = 45.00f;
    this->OuterShadowDistance = 4.00f;
    this->OuterShadowDistanceUnitMode = EUIProceduralRectUnitMode::Value;
    this->ProceduralRectData = NULL;
    this->bRaycastSupportCornerRadius = true;
}

void UUIProceduralRect::SetSoftEdge(bool Value) {
}

void UUIProceduralRect::SetSizeFromBodyTexture() {
}

void UUIProceduralRect::SetRaycastSupportCornerRadius(bool Value) {
}

void UUIProceduralRect::SetRadialFillRotation(float Value) {
}

void UUIProceduralRect::SetRadialFillCenterUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetRadialFillCenter(const FVector2D& Value) {
}

void UUIProceduralRect::SetRadialFillAngle(float Value) {
}

void UUIProceduralRect::SetOuterShadowSizeUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetOuterShadowSize(float Value) {
}

void UUIProceduralRect::SetOuterShadowDistanceUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetOuterShadowDistance(float Value) {
}

void UUIProceduralRect::SetOuterShadowColor(const FColor& Value) {
}

void UUIProceduralRect::SetOuterShadowBlurUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetOuterShadowBlur(float Value) {
}

void UUIProceduralRect::SetOuterShadowAngle(float Value) {
}

void UUIProceduralRect::SetInnerShadowSizeUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetInnerShadowSize(float Value) {
}

void UUIProceduralRect::SetInnerShadowDistanceUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetInnerShadowDistance(float Value) {
}

void UUIProceduralRect::SetInnerShadowColor(const FColor& Value) {
}

void UUIProceduralRect::SetInnerShadowBlurUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetInnerShadowBlur(float Value) {
}

void UUIProceduralRect::SetInnerShadowAngle(float Value) {
}

void UUIProceduralRect::SetEnableRadialFill(bool Value) {
}

void UUIProceduralRect::SetEnableOuterShadow(bool Value) {
}

void UUIProceduralRect::SetEnableInnerShadow(bool Value) {
}

void UUIProceduralRect::SetEnableBorderGradient(bool Value) {
}

void UUIProceduralRect::SetEnableBorder(bool Value) {
}

void UUIProceduralRect::SetEnableBodyGradient(bool Value) {
}

void UUIProceduralRect::SetEnableBody(bool Value) {
}

void UUIProceduralRect::SetCornerRadiusUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetCornerRadius(const FVector4& Value) {
}

void UUIProceduralRect::SetBorderWidthUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetBorderWidth(float Value) {
}

void UUIProceduralRect::SetBorderGradientRotation(float Value) {
}

void UUIProceduralRect::SetBorderGradientRadiusUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetBorderGradientRadius(const FVector2D& Value) {
}

void UUIProceduralRect::SetBorderGradientColor(const FColor& Value) {
}

void UUIProceduralRect::SetBorderGradientCenterUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetBorderGradientCenter(const FVector2D& Value) {
}

void UUIProceduralRect::SetBorderColor(const FColor& Value) {
}

void UUIProceduralRect::SetBodyTextureScaleMode(EUIProceduralRectTextureScaleMode Value) {
}

void UUIProceduralRect::SetBodyTextureMode(EUIProceduralBodyTextureMode Value) {
}

void UUIProceduralRect::SetBodyTexture(UTexture* Value) {
}

void UUIProceduralRect::SetBodySpriteTexture(ULGUISpriteData_BaseObject* Value) {
}

void UUIProceduralRect::SetBodyGradientRotation(float Value) {
}

void UUIProceduralRect::SetBodyGradientRadiusUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetBodyGradientRadius(const FVector2D& Value) {
}

void UUIProceduralRect::SetBodyGradientColor(const FColor& Value) {
}

void UUIProceduralRect::SetBodyGradientCenterUnitMode(EUIProceduralRectUnitMode Value) {
}

void UUIProceduralRect::SetBodyGradientCenter(const FVector2D& Value) {
}

void UUIProceduralRect::SetBodyColor(const FColor& Value) {
}

ULTweener* UUIProceduralRect::RadialFillRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::RadialFillCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::RadialFillAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowSizeTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowDistanceTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowBlurTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::OuterShadowAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowSizeTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowDistanceTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowBlurTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::InnerShadowAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

bool UUIProceduralRect::GetSoftEdge() const {
    return false;
}

bool UUIProceduralRect::GetRaycastSupportCornerRadius() const {
    return false;
}

float UUIProceduralRect::GetRadialFillRotation() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetRadialFillCenterUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector2f UUIProceduralRect::GetRadialFillCenter() const {
    return FVector2f{};
}

float UUIProceduralRect::GetRadialFillAngle() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetOuterShadowSizeUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetOuterShadowSize() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetOuterShadowDistanceUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetOuterShadowDistance() const {
    return 0.0f;
}

FColor UUIProceduralRect::GetOuterShadowColor() const {
    return FColor{};
}

EUIProceduralRectUnitMode UUIProceduralRect::GetOuterShadowBlurUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetOuterShadowBlur() const {
    return 0.0f;
}

float UUIProceduralRect::GetOuterShadowAngle() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetInnerShadowSizeUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetInnerShadowSize() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetInnerShadowDistanceUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetInnerShadowDistance() const {
    return 0.0f;
}

FColor UUIProceduralRect::GetInnerShadowColor() const {
    return FColor{};
}

EUIProceduralRectUnitMode UUIProceduralRect::GetInnerShadowBlurUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetInnerShadowBlur() const {
    return 0.0f;
}

float UUIProceduralRect::GetInnerShadowAngle() const {
    return 0.0f;
}

bool UUIProceduralRect::GetEnableRadialFill() const {
    return false;
}

bool UUIProceduralRect::GetEnableOuterShadow() const {
    return false;
}

bool UUIProceduralRect::GetEnableInnerShadow() const {
    return false;
}

bool UUIProceduralRect::GetEnableBorderGradient() const {
    return false;
}

bool UUIProceduralRect::GetEnableBorder() const {
    return false;
}

bool UUIProceduralRect::GetEnableBodyGradient() const {
    return false;
}

bool UUIProceduralRect::GetEnableBody() const {
    return false;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetCornerRadiusUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector4f UUIProceduralRect::GetCornerRadius() const {
    return FVector4f{};
}

EUIProceduralRectUnitMode UUIProceduralRect::GetBorderWidthUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

float UUIProceduralRect::GetBorderWidth() const {
    return 0.0f;
}

float UUIProceduralRect::GetBorderGradientRotation() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetBorderGradientRadiusUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector2f UUIProceduralRect::GetBorderGradientRadius() const {
    return FVector2f{};
}

FColor UUIProceduralRect::GetBorderGradientColor() const {
    return FColor{};
}

EUIProceduralRectUnitMode UUIProceduralRect::GetBorderGradientCenterUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector2f UUIProceduralRect::GetBorderGradientCenter() const {
    return FVector2f{};
}

FColor UUIProceduralRect::GetBorderColor() const {
    return FColor{};
}

EUIProceduralRectTextureScaleMode UUIProceduralRect::GetBodyTextureScaleMode() const {
    return EUIProceduralRectTextureScaleMode::Stretch;
}

EUIProceduralBodyTextureMode UUIProceduralRect::GetBodyTextureMode() const {
    return EUIProceduralBodyTextureMode::Texture;
}

UTexture* UUIProceduralRect::GetBodyTexture() const {
    return NULL;
}

ULGUISpriteData_BaseObject* UUIProceduralRect::GetBodySpriteTexture() const {
    return NULL;
}

float UUIProceduralRect::GetBodyGradientRotation() const {
    return 0.0f;
}

EUIProceduralRectUnitMode UUIProceduralRect::GetBodyGradientRadiusUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector2f UUIProceduralRect::GetBodyGradientRadius() const {
    return FVector2f{};
}

FColor UUIProceduralRect::GetBodyGradientColor() const {
    return FColor{};
}

EUIProceduralRectUnitMode UUIProceduralRect::GetBodyGradientCenterUnitMode() const {
    return EUIProceduralRectUnitMode::Value;
}

FVector2f UUIProceduralRect::GetBodyGradientCenter() const {
    return FVector2f{};
}

FColor UUIProceduralRect::GetBodyColor() const {
    return FColor{};
}

ULTweener* UUIProceduralRect::CornerRadiusTo(FVector4 endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderWidthTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderGradientRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderGradientRadiusTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderGradientColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderGradientCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderGradientAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BorderAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyGradientRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyGradientRadiusTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyGradientColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyGradientCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyGradientAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIProceduralRect::BodyAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}


