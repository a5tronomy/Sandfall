#pragma once
#include "CoreMinimal.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerDragInterface.h"
#include "LGUIScrollbarDynamicDelegateDelegate.h"
#include "UIScrollbarDirectionType.h"
#include "UISelectableComponent.h"
#include "UIScrollbarComponent.generated.h"

class AUIBaseActor;
class UUIItem;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIScrollbarComponent : public UUISelectableComponent, public ILGUIPointerDragInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AUIBaseActor> HandleActor;
    
    UPROPERTY(EditAnywhere)
    UIScrollbarDirectionType directionType;
    
    UPROPERTY(EditAnywhere)
    float NavigationChangeInterval;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> Handle;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUIItem> HandleArea;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnValueChange;
    
public:
    UUIScrollbarComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSlideEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetValueAndSize(float InValue, float InSize, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue, bool fireEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(float InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationChangeInterval(float InValue);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterSlideEvent(const FLGUIScrollbarDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetSize() const;
    
    UFUNCTION(BlueprintPure)
    float GetNavigationChangeInterval() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetHandleActor() const;
    
    UFUNCTION(BlueprintPure)
    UIScrollbarDirectionType GetDirectionType() const;
    

    // Fix for true pure virtual functions not being implemented
};

