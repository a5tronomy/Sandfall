#pragma once
#include "CoreMinimal.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerDragInterface.h"
#include "LGUISliderDynamicDelegateDelegate.h"
#include "UISelectableComponent.h"
#include "UISliderDirectionType.h"
#include "UISliderComponent.generated.h"

class AUIBaseActor;
class UUIItem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISliderComponent : public UUISelectableComponent, public ILGUIPointerDragInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    bool WholeNumbers;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> FillActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> HandleActor;
    
    UPROPERTY(EditAnywhere)
    UISliderDirectionType directionType;
    
    UPROPERTY(EditAnywhere)
    float NavigationChangeInterval;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> Fill;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> FillArea;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> Handle;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> HandleArea;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnValueChange;
    
public:
    UUISliderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSlideEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationChangeInterval(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float InMinValue, bool KeepRelativeValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InMaxValue, bool KeepRelativeValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterSlideEvent(const FLGUISliderDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetWholeNumber() const;
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetNavigationChangeInterval() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetHandleActor() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetFillActor() const;
    
    UFUNCTION(BlueprintPure)
    UISliderDirectionType GetDirectionType() const;
    

    // Fix for true pure virtual functions not being implemented
};

