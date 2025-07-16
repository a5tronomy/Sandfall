#include "LGUIEventSystem.h"

ULGUIEventSystem::ULGUIEventSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRayEventEnable = true;
    this->DefaultInputType = ELGUIPointerInputType::Pointer;
    this->eventFireTypeForNavigation = ELGUIEventFireType::TargetActorAndAllItsComponents;
    this->navigateInputInterval = 0.20f;
    this->navigateInputIntervalForFirstTime = 0.50f;
}

void ULGUIEventSystem::UnregisterInputChangeEvent(FLGUIDelegateHandleWrapper delegateHandle) {
}

void ULGUIEventSystem::UnregisterHitEvent(const FLGUIDelegateHandleWrapper& InHandle) {
}

void ULGUIEventSystem::UnregisterGlobalListener(const FLGUIDelegateHandleWrapper& InHandle) {
}

void ULGUIEventSystem::SetSelectComponentWithDefault(USceneComponent* InSelectComp) {
}

void ULGUIEventSystem::SetSelectComponent(USceneComponent* InSelectComp, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType) {
}

void ULGUIEventSystem::SetRaycastEnable(bool Enable, bool NewClearEvent) {
}

bool ULGUIEventSystem::SetPointerInputTypeByPointerID(int32 InPointerID, ELGUIPointerInputType InInputType) {
    return false;
}

void ULGUIEventSystem::SetHighlightedComponentForNavigation(USceneComponent* InComp, int32 InPointerID) {
}

void ULGUIEventSystem::RemovePointerEventData(int32 pointerID) {
}

FLGUIDelegateHandleWrapper ULGUIEventSystem::RegisterInputChangeEvent(const FLGUIPointerInputChange_DynamicDelegate& pointerInputChange) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper ULGUIEventSystem::RegisterHitEvent(const FLGUIHitDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper ULGUIEventSystem::RegisterGlobalListener(const FLGUIBaseEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

bool ULGUIEventSystem::IsPointerOverUIByPointerID(int32 pointerID) {
    return false;
}

ULGUIPointerEventData* ULGUIEventSystem::GetPointerEventData(int32 pointerID, bool createIfNotExist) const {
    return NULL;
}

ULGUIEventSystem* ULGUIEventSystem::GetLGUIEventSystemInstance(UObject* WorldContextObject) {
    return NULL;
}

USceneComponent* ULGUIEventSystem::GetHighlightedComponentForNavigation(int32 InPointerID) const {
    return NULL;
}

USceneComponent* ULGUIEventSystem::GetCurrentSelectedComponent(int32 InPointerID) const {
    return NULL;
}

ULGUIBaseInputModule* ULGUIEventSystem::GetCurrentInputModule() {
    return NULL;
}

void ULGUIEventSystem::ExecuteEvent_OnPointerUp(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerSelect(USceneComponent* TargetRootComponent, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerScroll(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerExit(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerEnter(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerEndDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerDragDrop(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerDown(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerDeselect(USceneComponent* TargetRootComponent, ULGUIBaseEventData* EventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerClick(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ExecuteEvent_OnPointerBeginDrag(USceneComponent* TargetRootComponent, ULGUIPointerEventData* pointerEventData, ELGUIEventFireType eventFireType, bool AllowEventBubbleUp) {
}

void ULGUIEventSystem::ClearEvent() {
}

void ULGUIEventSystem::ActivateNavigationInput(int32 InPointerID, USceneComponent* InDefaultHighlightedComponent) {
}


