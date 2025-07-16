#include "UITextInputComponent.h"

UUITextInputComponent::UUITextInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputType = ELGUITextInputType::Standard;
    this->CustomValidation = NULL;
    this->DisplayType = ELGUITextInputDisplayType::Standard;
    this->PasswordChar = TEXT("*");
    this->bAllowMultiLine = false;
    this->overflowType = ELGUITextInputOverflowType::ClampContent;
    this->MaxLineCount = 5;
    this->MaxLineWidth = 100.00f;
    this->CaretBlinkRate = 0.50f;
    this->CaretWidth = 2.00f;
    this->bAutoActivateInputWhenNavigateIn = false;
    this->bSelectAllWhenActivateInput = true;
    this->bReadOnly = false;
    this->PlayerController = NULL;
}

bool UUITextInputComponent::VerifyAndInsertStringAtCaretPosition(const FString& Value) {
    return false;
}

void UUITextInputComponent::UnregisterValueChangeEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUITextInputComponent::UnregisterSubmitEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUITextInputComponent::UnregisterInputActivateEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUITextInputComponent::SetVirtualKeyboradOptions(FVirtualKeyboardOptions Value) {
}

bool UUITextInputComponent::SetText(const FString& InText, bool InFireEvent) {
    return false;
}

void UUITextInputComponent::SetSelectionColor(FColor Value) {
}

void UUITextInputComponent::SetReadOnly(bool Value) {
}

void UUITextInputComponent::SetPlaceHolderActor(AUIBaseActor* Value) {
}

void UUITextInputComponent::SetPasswordChar(const FString& Value) {
}

void UUITextInputComponent::SetMultiLineSubmitFunctionKeys(const TArray<FKey>& Value) {
}

void UUITextInputComponent::SetInputType(ELGUITextInputType NewValue) {
}

void UUITextInputComponent::SetIgnoreKeys(const TArray<FKey>& Value) {
}

void UUITextInputComponent::SetDisplayType(ELGUITextInputDisplayType NewValue) {
}

void UUITextInputComponent::SetCustomValidation(UUITextInputCustomValidation* Value) {
}

void UUITextInputComponent::SetCustomInputTypeFunction(const FLGUITextInputCustomInputTypeDynamicDelegate& InFunction) {
}

void UUITextInputComponent::SetCaretWidth(float Value) {
}

void UUITextInputComponent::SetCaretColor(FColor Value) {
}

void UUITextInputComponent::SetCaretBlinkRate(float Value) {
}

void UUITextInputComponent::SetAutoActivateInputWhenNavigateIn(bool Value) {
}

void UUITextInputComponent::SetAllowMultiLine(bool Value) {
}

FLGUIDelegateHandleWrapper UUITextInputComponent::RegisterValueChangeEvent(const FLGUITextInputDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUITextInputComponent::RegisterSubmitEvent(const FLGUITextInputDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUITextInputComponent::RegisterInputActivateEvent(const FLGUIInputActivateDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FVirtualKeyboardOptions UUITextInputComponent::GetVirtualKeyboradOptions() const {
    return FVirtualKeyboardOptions{};
}

UUIText* UUITextInputComponent::GetTextComponent() const {
    return NULL;
}

FString UUITextInputComponent::GetText() const {
    return TEXT("");
}

FColor UUITextInputComponent::GetSelectionColor() const {
    return FColor{};
}

bool UUITextInputComponent::GetReadOnly() const {
    return false;
}

AUIBaseActor* UUITextInputComponent::GetPlaceHolderActor() const {
    return NULL;
}

FString UUITextInputComponent::GetPasswordChar() const {
    return TEXT("");
}

TArray<FKey> UUITextInputComponent::GetMultiLineSubmitFunctionKeys() const {
    return TArray<FKey>();
}

ELGUITextInputType UUITextInputComponent::GetInputType() const {
    return ELGUITextInputType::Standard;
}

TArray<FKey> UUITextInputComponent::GetIgnoreKeys() const {
    return TArray<FKey>();
}

ELGUITextInputDisplayType UUITextInputComponent::GetDisplayType() const {
    return ELGUITextInputDisplayType::Standard;
}

UUITextInputCustomValidation* UUITextInputComponent::GetCustomValidation() const {
    return NULL;
}

float UUITextInputComponent::GetCaretWidth() const {
    return 0.0f;
}

FColor UUITextInputComponent::GetCaretColor() const {
    return FColor{};
}

float UUITextInputComponent::GetCaretBlinkRate() const {
    return 0.0f;
}

bool UUITextInputComponent::GetAutoActivateInputWhenNavigateIn() const {
    return false;
}

bool UUITextInputComponent::GetAllowMultiLine() const {
    return false;
}

void UUITextInputComponent::DeactivateInput(bool InFireEvent) {
}

void UUITextInputComponent::ClearCustomInputTypeFunction() {
}

void UUITextInputComponent::ActivateInput(ULGUIPointerEventData* EventData) {
}


