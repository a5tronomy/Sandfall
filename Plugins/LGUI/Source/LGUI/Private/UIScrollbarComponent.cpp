#include "UIScrollbarComponent.h"

UUIScrollbarComponent::UUIScrollbarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value = 0.00f;
    this->Size = 0.00f;
    this->directionType = UIScrollbarDirectionType::LeftToRight;
    this->NavigationChangeInterval = 0.10f;
}

void UUIScrollbarComponent::UnregisterSlideEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIScrollbarComponent::SetValueAndSize(float InValue, float InSize, bool fireEvent) {
}

void UUIScrollbarComponent::SetValue(float InValue, bool fireEvent) {
}

void UUIScrollbarComponent::SetSize(float InSize) {
}

void UUIScrollbarComponent::SetNavigationChangeInterval(float InValue) {
}

FLGUIDelegateHandleWrapper UUIScrollbarComponent::RegisterSlideEvent(const FLGUIScrollbarDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

float UUIScrollbarComponent::GetValue() const {
    return 0.0f;
}

float UUIScrollbarComponent::GetSize() const {
    return 0.0f;
}

float UUIScrollbarComponent::GetNavigationChangeInterval() const {
    return 0.0f;
}

AUIBaseActor* UUIScrollbarComponent::GetHandleActor() const {
    return NULL;
}

UIScrollbarDirectionType UUIScrollbarComponent::GetDirectionType() const {
    return UIScrollbarDirectionType::LeftToRight;
}


