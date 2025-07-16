#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELTweenEase.h"
#include "EUIProceduralBodyTextureMode.h"
#include "EUIProceduralRectTextureScaleMode.h"
#include "EUIProceduralRectUnitMode.h"
#include "UIBatchMeshRenderable.h"
#include "UISpriteRenderableInterface.h"
#include "UIProceduralRect.generated.h"

class ULGUIProceduralRectData;
class ULGUISpriteData_BaseObject;
class ULTweener;
class UTexture;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIProceduralRect : public UUIBatchMeshRenderable, public IUISpriteRenderableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector4f CornerRadius;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode CornerRadiusUnitMode;
    
    UPROPERTY(EditAnywhere)
    bool bSoftEdge;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBody;
    
    UPROPERTY(EditAnywhere)
    FColor BodyColor;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralBodyTextureMode BodyTextureMode;
    
    UPROPERTY(EditAnywhere)
    UTexture* BodyTexture;
    
    UPROPERTY(EditAnywhere)
    ULGUISpriteData_BaseObject* BodySpriteTexture;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectTextureScaleMode BodyTextureScaleMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBodyGradient;
    
    UPROPERTY(EditAnywhere)
    FColor BodyGradientColor;
    
    UPROPERTY(EditAnywhere)
    FVector2f BodyGradientCenter;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode BodyGradientCenterUnitMode;
    
    UPROPERTY(EditAnywhere)
    FVector2f BodyGradientRadius;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode BodyGradientRadiusUnitMode;
    
    UPROPERTY(EditAnywhere)
    float BodyGradientRotation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBorder;
    
    UPROPERTY(EditAnywhere)
    float BorderWidth;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode BorderWidthUnitMode;
    
    UPROPERTY(EditAnywhere)
    FColor BorderColor;
    
    UPROPERTY(EditAnywhere)
    bool bEnableBorderGradient;
    
    UPROPERTY(EditAnywhere)
    FColor BorderGradientColor;
    
    UPROPERTY(EditAnywhere)
    FVector2f BorderGradientCenter;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode BorderGradientCenterUnitMode;
    
    UPROPERTY(EditAnywhere)
    FVector2f BorderGradientRadius;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode BorderGradientRadiusUnitMode;
    
    UPROPERTY(EditAnywhere)
    float BorderGradientRotation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableInnerShadow;
    
    UPROPERTY(EditAnywhere)
    FColor InnerShadowColor;
    
    UPROPERTY(EditAnywhere)
    float InnerShadowSize;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode InnerShadowSizeUnitMode;
    
    UPROPERTY(EditAnywhere)
    float InnerShadowBlur;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode InnerShadowBlurUnitMode;
    
    UPROPERTY(EditAnywhere)
    float InnerShadowAngle;
    
    UPROPERTY(EditAnywhere)
    float InnerShadowDistance;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode InnerShadowDistanceUnitMode;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRadialFill;
    
    UPROPERTY(EditAnywhere)
    FVector2f RadialFillCenter;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode RadialFillCenterUnitMode;
    
    UPROPERTY(EditAnywhere)
    float RadialFillRotation;
    
    UPROPERTY(EditAnywhere)
    float RadialFillAngle;
    
    UPROPERTY(EditAnywhere)
    bool bEnableOuterShadow;
    
    UPROPERTY(EditAnywhere)
    FColor OuterShadowColor;
    
    UPROPERTY(EditAnywhere)
    float OuterShadowSize;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode OuterShadowSizeUnitMode;
    
    UPROPERTY(EditAnywhere)
    float OuterShadowBlur;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode OuterShadowBlurUnitMode;
    
    UPROPERTY(EditAnywhere)
    float OuterShadowAngle;
    
    UPROPERTY(EditAnywhere)
    float OuterShadowDistance;
    
    UPROPERTY(EditAnywhere)
    EUIProceduralRectUnitMode OuterShadowDistanceUnitMode;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    ULGUIProceduralRectData* ProceduralRectData;
    
    UPROPERTY(EditAnywhere)
    bool bRaycastSupportCornerRadius;
    
public:
    UUIProceduralRect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSoftEdge(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeFromBodyTexture();
    
    UFUNCTION(BlueprintCallable)
    void SetRaycastSupportCornerRadius(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialFillRotation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialFillCenterUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialFillCenter(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialFillAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowSizeUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowDistanceUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowBlurUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowBlur(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterShadowAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowSizeUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowDistanceUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowBlurUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowBlur(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerShadowAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRadialFill(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableOuterShadow(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInnerShadow(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBorderGradient(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBorder(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBodyGradient(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBody(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerRadiusUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerRadius(const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderWidthUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderWidth(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientRotation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientRadiusUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientRadius(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientCenterUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderGradientCenter(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTextureScaleMode(EUIProceduralRectTextureScaleMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTextureMode(EUIProceduralBodyTextureMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTexture(UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodySpriteTexture(ULGUISpriteData_BaseObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientRotation(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientRadiusUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientRadius(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientCenterUnitMode(EUIProceduralRectUnitMode Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyGradientCenter(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyColor(const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* RadialFillRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* RadialFillCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* RadialFillAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowSizeTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowDistanceTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowBlurTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OuterShadowAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowSizeTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowDistanceTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowBlurTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowAngleTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* InnerShadowAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintPure)
    bool GetSoftEdge() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRaycastSupportCornerRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadialFillRotation() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetRadialFillCenterUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2f GetRadialFillCenter() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadialFillAngle() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetOuterShadowSizeUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetOuterShadowSize() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetOuterShadowDistanceUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetOuterShadowDistance() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetOuterShadowColor() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetOuterShadowBlurUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetOuterShadowBlur() const;
    
    UFUNCTION(BlueprintPure)
    float GetOuterShadowAngle() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetInnerShadowSizeUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetInnerShadowSize() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetInnerShadowDistanceUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetInnerShadowDistance() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetInnerShadowColor() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetInnerShadowBlurUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetInnerShadowBlur() const;
    
    UFUNCTION(BlueprintPure)
    float GetInnerShadowAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableRadialFill() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableOuterShadow() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableInnerShadow() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableBorderGradient() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableBorder() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableBodyGradient() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableBody() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetCornerRadiusUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector4f GetCornerRadius() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetBorderWidthUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetBorderWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetBorderGradientRotation() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetBorderGradientRadiusUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2f GetBorderGradientRadius() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetBorderGradientColor() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetBorderGradientCenterUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2f GetBorderGradientCenter() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetBorderColor() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectTextureScaleMode GetBodyTextureScaleMode() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralBodyTextureMode GetBodyTextureMode() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetBodyTexture() const;
    
    UFUNCTION(BlueprintPure)
    ULGUISpriteData_BaseObject* GetBodySpriteTexture() const;
    
    UFUNCTION(BlueprintPure)
    float GetBodyGradientRotation() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetBodyGradientRadiusUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2f GetBodyGradientRadius() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetBodyGradientColor() const;
    
    UFUNCTION(BlueprintPure)
    EUIProceduralRectUnitMode GetBodyGradientCenterUnitMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector2f GetBodyGradientCenter() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetBodyColor() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* CornerRadiusTo(FVector4 endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderWidthTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderGradientRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderGradientRadiusTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderGradientColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderGradientCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderGradientAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BorderAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyGradientRotationTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyGradientRadiusTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyGradientColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyGradientCenterTo(FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyGradientAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* BodyAlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    

    // Fix for true pure virtual functions not being implemented
};

