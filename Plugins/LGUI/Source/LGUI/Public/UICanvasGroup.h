#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELTweenEase.h"
#include "UICanvasGroup.generated.h"

class ULTweener;
class UUICanvasGroup;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUICanvasGroup : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Alpha;
    
    UPROPERTY(EditAnywhere)
    bool bInteractable;
    
    UPROPERTY(EditAnywhere)
    bool bRestrictNavigationArea;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreParentGroup;
    
public:
    UUICanvasGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInteractable(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreParentGroup(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Value);
    
    UFUNCTION(BlueprintPure)
    UUICanvasGroup* GetRestrictNavigationAreaCanvasGroup() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRestrictNavigationArea() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInteractable() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIgnoreParentGroup() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFinalInteractable() const;
    
    UFUNCTION(BlueprintPure)
    float GetFinalAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* AlphaFrom(float StartValue, float Duration, float Delay, ELTweenEase Ease);
    
};

