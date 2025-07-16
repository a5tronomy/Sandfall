#include "UISelectableComponent.h"

UUISelectableComponent::UUISelectableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowEventBubbleUp = false;
    this->bInteractable = true;
    this->Transition = UISelectableTransitionType::None;
    this->TransitionTweener = NULL;
    this->FadeDuration = 0.20f;
    this->NormalSprite = NULL;
    this->HighlightedSprite = NULL;
    this->PressedSprite = NULL;
    this->DisabledSprite = NULL;
    this->bCanNavigateHere = true;
    this->NavigationLeft = EUISelectableNavigationMode::Auto;
    this->NavigationRight = EUISelectableNavigationMode::Auto;
    this->NavigationUp = EUISelectableNavigationMode::Auto;
    this->NavigationDown = EUISelectableNavigationMode::Auto;
    this->NavigationNext = EUISelectableNavigationMode::Auto;
    this->NavigationPrev = EUISelectableNavigationMode::Auto;
}

void UUISelectableComponent::SetTransitionTarget(AUIBaseRenderableActor* Value) {
}

void UUISelectableComponent::SetSelectionState(EUISelectableSelectionState NewState) {
}

void UUISelectableComponent::SetPressedSprite(ULGUISpriteData_BaseObject* NewSprite) {
}

void UUISelectableComponent::SetPressedColor(FColor NewColor) {
}

void UUISelectableComponent::SetNormalSprite(ULGUISpriteData_BaseObject* NewSprite) {
}

void UUISelectableComponent::SetNormalColor(FColor NewColor) {
}

void UUISelectableComponent::SetNavigationUpExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationUp(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetNavigationRightExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationRight(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetNavigationPrevExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationPrev(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetNavigationNextExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationNext(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetNavigationLeftExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationLeft(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetNavigationDownExplicit(UUISelectableComponent* Value) {
}

void UUISelectableComponent::SetNavigationDown(EUISelectableNavigationMode Value) {
}

void UUISelectableComponent::SetHighlightedSprite(ULGUISpriteData_BaseObject* NewSprite) {
}

void UUISelectableComponent::SetHighlightedColor(FColor NewColor) {
}

void UUISelectableComponent::SetDisabledSprite(ULGUISpriteData_BaseObject* NewSprite) {
}

void UUISelectableComponent::SetDisabledColor(FColor NewColor) {
}

void UUISelectableComponent::SetCanNavigateHere(bool Value) {
}

bool UUISelectableComponent::IsInteractable() const {
    return false;
}

AUIBaseRenderableActor* UUISelectableComponent::GetTransitionTarget() const {
    return NULL;
}

EUISelectableSelectionState UUISelectableComponent::GetSelectionState() const {
    return EUISelectableSelectionState::Normal;
}

ULGUISpriteData_BaseObject* UUISelectableComponent::GetPressedSprite() const {
    return NULL;
}

FColor UUISelectableComponent::GetPressedColor() const {
    return FColor{};
}

ULGUISpriteData_BaseObject* UUISelectableComponent::GetNormalSprite() const {
    return NULL;
}

FColor UUISelectableComponent::GetNormalColor() const {
    return FColor{};
}

UUISelectableComponent* UUISelectableComponent::GetNavigationUpExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationUp() const {
    return EUISelectableNavigationMode::None;
}

UUISelectableComponent* UUISelectableComponent::GetNavigationRightExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationRight() const {
    return EUISelectableNavigationMode::None;
}

UUISelectableComponent* UUISelectableComponent::GetNavigationPrevExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationPrev() const {
    return EUISelectableNavigationMode::None;
}

UUISelectableComponent* UUISelectableComponent::GetNavigationNextExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationNext() const {
    return EUISelectableNavigationMode::None;
}

UUISelectableComponent* UUISelectableComponent::GetNavigationLeftExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationLeft() const {
    return EUISelectableNavigationMode::None;
}

UUISelectableComponent* UUISelectableComponent::GetNavigationDownExplicit() const {
    return NULL;
}

EUISelectableNavigationMode UUISelectableComponent::GetNavigationDown() const {
    return EUISelectableNavigationMode::None;
}

ULGUISpriteData_BaseObject* UUISelectableComponent::GetHighlightedSprite() const {
    return NULL;
}

FColor UUISelectableComponent::GetHighlightedColor() const {
    return FColor{};
}

ULGUISpriteData_BaseObject* UUISelectableComponent::GetDisabledSprite() const {
    return NULL;
}

FColor UUISelectableComponent::GetDisabledColor() const {
    return FColor{};
}

bool UUISelectableComponent::GetCanNavigateHere() const {
    return false;
}


