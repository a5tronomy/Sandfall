#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "LGUIPointerDragInterface.h"
#include "LGUIPointerScrollInterface.h"
#include "LGUIScrollViewDynamicDelegateDelegate.h"
#include "UIScrollViewComponent.generated.h"

class AUIBaseActor;
class UUIItem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIScrollViewComponent : public ULGUILifeCycleUIBehaviour, public ILGUIPointerDragInterface, public ILGUIPointerScrollInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> Content;
    
    UPROPERTY(EditAnywhere)
    bool Horizontal;
    
    UPROPERTY(EditAnywhere)
    bool Vertical;
    
    UPROPERTY(EditAnywhere)
    bool OnlyOneDirection;
    
    UPROPERTY(EditAnywhere)
    float ScrollSensitivity;
    
    UPROPERTY(EditAnywhere)
    bool CanScrollInSmallSize;
    
    UPROPERTY(EditAnywhere)
    bool FlipDirectionInSmallSize;
    
    UPROPERTY(EditAnywhere)
    float DecelerateRate;
    
    UPROPERTY(EditAnywhere)
    bool RestrictRectArea;
    
    UPROPERTY(EditAnywhere)
    float OutOfRangeDamper;
    
    UPROPERTY(EditAnywhere)
    bool AllowEventBubbleUp;
    
    UPROPERTY(EditAnywhere)
    bool KeepProgress;
    
    UPROPERTY(EditAnywhere)
    FVector2D Progress;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> ContentUIItem;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> ContentParentUIItem;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnScroll;
    
public:
    UUIScrollViewComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterScrollEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetVertical(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollValue(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollProgress(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollDelta(FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictRectArea(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOutOfRangeDamper(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyOneDirection(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontal(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDecelerateRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanScrollInSmallSize(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void ScrollTo(UUIItem* InChild, bool InEaseAnimation, float InAnimationDuration);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterScrollEvent(const FLGUIScrollViewDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RectRangeChanged();
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVerticalRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVertical() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVelocity() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollSensitivity() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetScrollProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool GetRestrictRectArea() const;
    
    UFUNCTION(BlueprintPure)
    float GetOutOfRangeDamper() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOnlyOneDirection() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetHorizontalRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHorizontal() const;
    
    UFUNCTION(BlueprintPure)
    float GetDecelerateRate() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetContent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanScrollInSmallSize() const;
    

    // Fix for true pure virtual functions not being implemented
};

