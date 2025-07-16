#pragma once
#include "CoreMinimal.h"
#include "EScrollViewScrollbarVisibility.h"
#include "LGUILayoutInterface.h"
#include "UIScrollViewComponent.h"
#include "UIScrollViewWithScrollbarComponent.generated.h"

class AUIBaseActor;
class UUIScrollbarComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIScrollViewWithScrollbarComponent : public UUIScrollViewComponent, public ILGUILayoutInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> Viewport;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> HorizontalScrollbar;
    
    UPROPERTY(EditAnywhere)
    EScrollViewScrollbarVisibility HorizontalScrollbarVisibility;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> VerticalScrollbar;
    
    UPROPERTY(EditAnywhere)
    EScrollViewScrollbarVisibility VerticalScrollbarVisibility;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIScrollbarComponent> HorizontalScrollbarComp;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIScrollbarComponent> VerticalScrollbarComp;
    
public:
    UUIScrollViewWithScrollbarComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVerticalScrollbarVisibility(EScrollViewScrollbarVisibility Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalScrollbarVisibility(EScrollViewScrollbarVisibility Value);
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetViewport() const;
    
    UFUNCTION(BlueprintPure)
    EScrollViewScrollbarVisibility GetVerticalScrollbarVisibility() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetVerticalScrollbar() const;
    
    UFUNCTION(BlueprintPure)
    EScrollViewScrollbarVisibility GetHorizontalScrollbarVisibility() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetHorizontalScrollbar() const;
    

    // Fix for true pure virtual functions not being implemented
};

