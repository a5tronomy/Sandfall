#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELGUIEventFireType.h"
#include "ELGUIPointerInputType.h"
#include "LGUIBaseEventDynamicDelegateDelegate.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIHitDynamicDelegateDelegate.h"
#include "LGUIPointerInputChange_DynamicDelegateDelegate.h"
#include "LGUIEventSystem.generated.h"

class ULGUIBaseEventData;
class ULGUIBaseInputModule;
class ULGUIEventSystem;
class ULGUIPointerEventData;
class UObject;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIEventSystem : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    bool bRayEventEnable;
    
public:
    UPROPERTY(VisibleAnywhere)
    TMap<int32, ULGUIPointerEventData*> pointerEventDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELGUIPointerInputType DefaultInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELGUIEventFireType eventFireTypeForNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float navigateInputInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float navigateInputIntervalForFirstTime;
    
    ULGUIEventSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterInputChangeEvent(FLGUIDelegateHandleWrapper delegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterHitEvent(const FLGUIDelegateHandleWrapper& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterGlobalListener(const FLGUIDelegateHandleWrapper& InHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectComponentWithDefault(USceneComponent* InSelectComp);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectComponent(USceneComponent* InSelectComp, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType);
    
    UFUNCTION(BlueprintCallable)
    void SetRaycastEnable(bool Enable, bool NewClearEvent);
    
    UFUNCTION(BlueprintCallable)
    bool SetPointerInputTypeByPointerID(int32 InPointerID, ELGUIPointerInputType InInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedComponentForNavigation(USceneComponent* InComp, int32 InPointerID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePointerEventData(int32 pointerID);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterInputChangeEvent(const FLGUIPointerInputChange_DynamicDelegate& pointerInputChange);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterHitEvent(const FLGUIHitDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterGlobalListener(const FLGUIBaseEventDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointerOverUIByPointerID(int32 pointerID);
    
    UFUNCTION(BlueprintPure)
    ULGUIPointerEventData* GetPointerEventData(int32 pointerID, bool createIfNotExist) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULGUIEventSystem* GetLGUIEventSystemInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetHighlightedComponentForNavigation(int32 InPointerID) const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetCurrentSelectedComponent(int32 InPointerID) const;
    
    UFUNCTION(BlueprintCallable)
    ULGUIBaseInputModule* GetCurrentInputModule();
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerUp(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerSelect(USceneComponent* TargetRootComponent, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerScroll(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerExit(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerEnter(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerEndDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerDragDrop(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerDown(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerDeselect(USceneComponent* TargetRootComponent, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerClick(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteEvent_OnPointerBeginDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp);
    
    UFUNCTION(BlueprintCallable)
    void ClearEvent();
    
    UFUNCTION(BlueprintCallable)
    void ActivateNavigationInput(int32 InPointerID, USceneComponent* InDefaultHighlightedComponent);
    
};

