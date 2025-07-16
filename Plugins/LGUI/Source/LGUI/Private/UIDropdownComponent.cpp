#include "UIDropdownComponent.h"

UUIDropdownComponent::UUIDropdownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VerticalPosition = EUIDropdownVerticalPosition::Automatic;
    this->VerticalOverlap = false;
    this->HorizontalPosition = EUIDropdownHorizontalPosition::Center;
    this->Value = 0;
    this->MaxHeight = 150.00f;
    this->bUseInteractionBlock = true;
}

void UUIDropdownComponent::UnregisterSelectionChangeEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIDropdownComponent::Show() {
}

void UUIDropdownComponent::SetVerticalPosition(EUIDropdownVerticalPosition InValue) {
}

void UUIDropdownComponent::SetVerticalOverlap(bool NewValue) {
}

void UUIDropdownComponent::SetValue(int32 NewValue, bool fireEvent) {
}

void UUIDropdownComponent::SetUseInteractionBlock(bool NewValue) {
}

void UUIDropdownComponent::SetOptions(const TArray<FUIDropdownOptionData>& InOptions) {
}

void UUIDropdownComponent::SetMaxHeight(float NewValue) {
}

void UUIDropdownComponent::SetItemCustomDataFunction(const FUIDropdownComponentDynamicDelegate_SetItemCustomData& InFunction) {
}

void UUIDropdownComponent::SetHorizontalPosition(EUIDropdownHorizontalPosition InValue) {
}

FLGUIDelegateHandleWrapper UUIDropdownComponent::RegisterSelectionChangeEvent(const FUIDropdownComponentDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void UUIDropdownComponent::MarkRecreateList() {
}

void UUIDropdownComponent::Hide() {
}

EUIDropdownVerticalPosition UUIDropdownComponent::GetVerticalPosition() const {
    return EUIDropdownVerticalPosition::Bottom;
}

bool UUIDropdownComponent::GetVerticalOverlap() const {
    return false;
}

int32 UUIDropdownComponent::GetValue() const {
    return 0;
}

bool UUIDropdownComponent::GetUseInteractionBlock() const {
    return false;
}

TArray<FUIDropdownOptionData> UUIDropdownComponent::GetOptions() const {
    return TArray<FUIDropdownOptionData>();
}

FUIDropdownOptionData UUIDropdownComponent::GetOption(int32 Index) const {
    return FUIDropdownOptionData{};
}

float UUIDropdownComponent::GetMaxHeight() const {
    return 0.0f;
}

AUIBaseActor* UUIDropdownComponent::GetListRoot() const {
    return NULL;
}

EUIDropdownHorizontalPosition UUIDropdownComponent::GetHorizontalPosition() const {
    return EUIDropdownHorizontalPosition::Left;
}

FUIDropdownOptionData UUIDropdownComponent::GetCurrentOption() const {
    return FUIDropdownOptionData{};
}

void UUIDropdownComponent::ClearItemCustomDataFunction() {
}

void UUIDropdownComponent::AddOptions(const TArray<FUIDropdownOptionData>& InOptions) {
}


