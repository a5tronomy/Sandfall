#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELTweenEase.h"
#include "EUIRenderableRaycastType.h"
#include "EUIRenderableType.h"
#include "UIItem.h"
#include "UIBaseRenderable.generated.h"

class ULTweener;
class UUIRenderableCustomRaycast;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIBaseRenderable : public UUIItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    EUIRenderableRaycastType RaycastType;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUIRenderableCustomRaycast* CustomRaycastObject;
    
    UPROPERTY(EditAnywhere)
    float VisiblePixelThreadhold;
    
public:
    UUIBaseRenderable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRaycastType(EUIRenderableRaycastType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomRaycastObject(UUIRenderableCustomRaycast* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Value);
    
    UFUNCTION(BlueprintPure)
    EUIRenderableType GetUIRenderableType() const;
    
    UFUNCTION(BlueprintPure)
    EUIRenderableRaycastType GetRaycastType() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetFinalColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetFinalAlpha01() const;
    
    UFUNCTION(BlueprintPure)
    UUIRenderableCustomRaycast* GetCustomRaycastObject() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* ColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* ColorFrom(FColor StartValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AlphaFrom(float StartValue, float Duration, float Delay, ELTweenEase Ease);
    
};

