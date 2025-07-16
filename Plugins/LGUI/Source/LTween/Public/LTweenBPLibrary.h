#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "Layout/Margin.h"
#include "ELTweenEase.h"
#include "LTweenColorSetterDynamicDelegate.h"
#include "LTweenDelegateHandleWrapper.h"
#include "LTweenDoubleSetterDynamicDelegate.h"
#include "LTweenFloatSetterDynamicDelegate.h"
#include "LTweenIntSetterDynamicDelegate.h"
#include "LTweenLinearColorSetterDynamicDelegate.h"
#include "LTweenQuaternionSetterDynamicDelegate.h"
#include "LTweenRotatorSetterDynamicDelegate.h"
#include "LTweenVector2SetterDynamicDelegate.h"
#include "LTweenVector3SetterDynamicDelegate.h"
#include "LTweenVector4SetterDynamicDelegate.h"
#include "LTweenerFloatDynamicDelegateDelegate.h"
#include "LTweenerSimpleDynamicDelegateDelegate.h"
#include "LTweenBPLibrary.generated.h"

class UBorder;
class UBorderSlot;
class UButton;
class UButtonSlot;
class UCanvasPanelSlot;
class UHorizontalBoxSlot;
class UImage;
class ULTweener;
class ULTweenerSequence;
class UMaterialInstanceDynamic;
class UObject;
class UOverlaySlot;
class UPrimitiveComponent;
class USceneComponent;
class UUserWidget;
class UVerticalBoxSlot;
class UWidget;

UCLASS(BlueprintType)
class LTWEEN_API ULTweenBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULTweenBPLibrary();

    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotatorTo_Sweep(USceneComponent* Target, FRotator endValue, bool ShortestPath, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotatorTo(USceneComponent* Target, FRotator endValue, bool ShortestPath, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotationQuaternionTo_Sweep(USceneComponent* Target, const FQuat& endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotationQuaternionTo(USceneComponent* Target, const FQuat& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotateEulerAngleTo_Sweep(USceneComponent* Target, FVector eulerAngle, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldRotateEulerAngleTo(USceneComponent* Target, FVector eulerAngle, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionZTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionZTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionYTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionYTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionXTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionXTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionTo_Sweep(USceneComponent* Target, FVector endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* WorldPositionTo(USceneComponent* Target, FVector endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* VirtualCall(UObject* WorldContextObject, float Duration, float Delay, const FLTweenerSimpleDynamicDelegate& Start, const FLTweenerFloatDynamicDelegate& Update, const FLTweenerSimpleDynamicDelegate& complete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* Vector4To(UObject* WorldContextObject, const FLTweenVector4SetterDynamic& setter, FVector4 StartValue, FVector4 endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* Vector3To(UObject* WorldContextObject, const FLTweenVector3SetterDynamic& setter, FVector StartValue, FVector endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* Vector2To(UObject* WorldContextObject, const FLTweenVector2SetterDynamic& setter, FVector2D StartValue, FVector2D endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UpdateCall(UObject* WorldContextObject, const FLTweenerFloatDynamicDelegate& Update);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnregisterUpdateEvent(UObject* WorldContextObject, const FLTweenDelegateHandleWrapper& delegateHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_VerticalBoxSlot_PaddingTo(UObject* WorldContextObject, UVerticalBoxSlot* Target, const FMargin& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_UserWidget_ColorAndOpacityTo(UObject* WorldContextObject, UUserWidget* Target, const FLinearColor& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_RenderTransform_TranslationTo(UObject* WorldContextObject, UWidget* Target, const FVector2D& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_RenderTransform_ShearTo(UObject* WorldContextObject, UWidget* Target, const FVector2D& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_RenderTransform_ScaleTo(UObject* WorldContextObject, UWidget* Target, const FVector2D& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_RenderTransform_AngleTo(UObject* WorldContextObject, UWidget* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_RenderOpacityTo(UObject* WorldContextObject, UWidget* Target, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_OverlaySlot_PaddingTo(UObject* WorldContextObject, UOverlaySlot* Target, const FMargin& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_Image_ColorAndOpacityTo(UObject* WorldContextObject, UImage* Target, const FLinearColor& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_HorizontalBoxSlot_PaddingTo(UObject* WorldContextObject, UHorizontalBoxSlot* Target, const FMargin& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_CanvasPanelSlot_SizeTo(UObject* WorldContextObject, UCanvasPanelSlot* Target, const FVector2D& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_CanvasPanelSlot_PositionTo(UObject* WorldContextObject, UCanvasPanelSlot* Target, const FVector2D& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_ButtonSlot_PaddingTo(UObject* WorldContextObject, UButtonSlot* Target, const FMargin& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_Button_ColorAndOpacityTo(UObject* WorldContextObject, UButton* Target, const FLinearColor& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_BorderSlot_PaddingTo(UObject* WorldContextObject, UBorderSlot* Target, const FMargin& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* UMG_Border_ContentColorAndOpacityTo(UObject* WorldContextObject, UBorder* Target, const FLinearColor& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* RotatorTo(UObject* WorldContextObject, const FLTweenRotatorSetterDynamic& setter, FRotator StartValue, FRotator endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* RepeatCall(UObject* WorldContextObject, FLTweenerSimpleDynamicDelegate callFunction, float DelayTime, float Interval, int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLTweenDelegateHandleWrapper RegisterUpdateEvent(UObject* WorldContextObject, const FLTweenerFloatDynamicDelegate& Update);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* QuaternionTo(UObject* WorldContextObject, const FLTweenQuaternionSetterDynamic& setter, FQuat StartValue, FQuat endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* MeshMaterialVectorParameterTo(UPrimitiveComponent* Target, int32 MaterialIndex, FName ParameterName, FLinearColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* MeshMaterialScalarParameterTo(UPrimitiveComponent* Target, int32 MaterialIndex, FName ParameterName, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* MaterialVectorParameterTo(UObject* WorldContextObject, UMaterialInstanceDynamic* Target, FName ParameterName, FLinearColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* MaterialScalarParameterTo(UObject* WorldContextObject, UMaterialInstanceDynamic* Target, FName ParameterName, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalScaleTo(USceneComponent* Target, FVector endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotatorTo_Sweep(USceneComponent* Target, FRotator endValue, bool ShortestPath, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotatorTo(USceneComponent* Target, FRotator endValue, bool ShortestPath, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotationQuaternionTo_Sweep(USceneComponent* Target, const FQuat& endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotationQuaternionTo(USceneComponent* Target, const FQuat& endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotateEulerAngleTo_Sweep(USceneComponent* Target, FVector eulerAngle, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalRotateEulerAngleTo(USceneComponent* Target, FVector eulerAngle, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionZTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionZTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionYTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionYTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionXTo_Sweep(USceneComponent* Target, double endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionXTo(USceneComponent* Target, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionTo_Sweep(USceneComponent* Target, FVector endValue, FHitResult& SweepHitResult, bool sweep, bool Teleport, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    static ULTweener* LocalPositionTo(USceneComponent* Target, FVector endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* LinearColorTo(UObject* WorldContextObject, const FLTweenLinearColorSetterDynamic& setter, FLinearColor StartValue, FLinearColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KillIfIsTweening(UObject* WorldContextObject, ULTweener* inTweener, bool callComplete);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTweening(UObject* WorldContextObject, ULTweener* inTweener);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* IntTo(UObject* WorldContextObject, const FLTweenIntSetterDynamic& setter, int32 StartValue, int32 endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* FloatTo(UObject* WorldContextObject, const FLTweenFloatSetterDynamic& setter, float StartValue, float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* DoubleTo(UObject* WorldContextObject, const FLTweenDoubleSetterDynamic& setter, double StartValue, double endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* DelayFrameCall(UObject* WorldContextObject, int32 FrameCount, const FLTweenerSimpleDynamicDelegate& delayComplete, bool affectByGamePause);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* DelayCall(UObject* WorldContextObject, float DelayTime, const FLTweenerSimpleDynamicDelegate& delayComplete, bool affectByGamePause, bool affectByTimeDilation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweenerSequence* CreateSequence(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULTweener* ColorTo(UObject* WorldContextObject, const FLTweenColorSetterDynamic& setter, FColor StartValue, FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ArrayKillIfIsTweening(UObject* WorldContextObject, const TArray<ULTweener*>& inTweenerArray, bool callComplete);
    
};

