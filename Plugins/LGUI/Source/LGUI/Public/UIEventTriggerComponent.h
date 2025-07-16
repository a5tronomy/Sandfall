#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIBaseEventDynamicDelegateDelegate.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerClickInterface.h"
#include "LGUIPointerDownUpInterface.h"
#include "LGUIPointerDragDropInterface.h"
#include "LGUIPointerDragInterface.h"
#include "LGUIPointerEnterExitInterface.h"
#include "LGUIPointerEventDynamicDelegateDelegate.h"
#include "LGUIPointerScrollInterface.h"
#include "LGUIPointerSelectDeselectInterface.h"
#include "UIEventTriggerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEventTriggerComponent : public UActorComponent, public ILGUIPointerEnterExitInterface, public ILGUIPointerDownUpInterface, public ILGUIPointerClickInterface, public ILGUIPointerDragInterface, public ILGUIPointerDragDropInterface, public ILGUIPointerScrollInterface, public ILGUIPointerSelectDeselectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool AllowEventBubbleUp;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerEnter;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerExit;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerDown;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerUp;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerClick;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerBeginDrag;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerDrag;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerEndDrag;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerDragDrop;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerScroll;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerSelect;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnPointerDeselect;
    
public:
    UUIEventTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerUp(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerSelect(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerScroll(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerExit(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerEnter(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerEndDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerDragDrop(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerDown(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerDeselect(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerClick(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnPointerBeginDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerUp(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerSelect(const FLGUIBaseEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerScroll(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerExit(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerEnter(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerEndDrag(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerDragDrop(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerDrag(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerDown(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerDeselect(const FLGUIBaseEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerClick(const FLGUIPointerEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnPointerBeginDrag(const FLGUIPointerEventDynamicDelegate& InDelegate);
    

    // Fix for true pure virtual functions not being implemented
};

