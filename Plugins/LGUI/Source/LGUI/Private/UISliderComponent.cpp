#include "UISliderComponent.h"

UUISliderComponent::UUISliderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Value = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->WholeNumbers = false;
    this->directionType = UISliderDirectionType::LeftToRight;
    this->NavigationChangeInterval = 0.10f;
}

void UUISliderComponent::UnregisterSlideEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUISliderComponent::SetValue(float InValue, bool fireEvent) {
}

void UUISliderComponent::SetNavigationChangeInterval(float InValue) {
}

void UUISliderComponent::SetMinValue(float InMinValue, bool KeepRelativeValue, bool fireEvent) {
}

void UUISliderComponent::SetMaxValue(float InMaxValue, bool KeepRelativeValue, bool fireEvent) {
}

FLGUIDelegateHandleWrapper UUISliderComponent::RegisterSlideEvent(const FLGUISliderDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

bool UUISliderComponent::GetWholeNumber() const {
    return false;
}

float UUISliderComponent::GetValue() const {
    return 0.0f;
}

float UUISliderComponent::GetNavigationChangeInterval() const {
    return 0.0f;
}

float UUISliderComponent::GetMinValue() const {
    return 0.0f;
}

float UUISliderComponent::GetMaxValue() const {
    return 0.0f;
}

AUIBaseActor* UUISliderComponent::GetHandleActor() const {
    return NULL;
}

AUIBaseActor* UUISliderComponent::GetFillActor() const {
    return NULL;
}

UISliderDirectionType UUISliderComponent::GetDirectionType() const {
    return UISliderDirectionType::LeftToRight;
}


