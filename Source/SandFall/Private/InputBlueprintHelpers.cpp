#include "InputBlueprintHelpers.h"

UInputBlueprintHelpers::UInputBlueprintHelpers() {
}

TArray<FKey> UInputBlueprintHelpers::TryFindKeysForEnhancedInputActionName(UObject* WorldContextObject, const FName& EnhancedInputActionName) {
    return TArray<FKey>();
}

TArray<FKey> UInputBlueprintHelpers::TryFindKeysForEnhancedInputAction(UObject* WorldContextObject, const UInputAction* EnhancedInputAction) {
    return TArray<FKey>();
}

void UInputBlueprintHelpers::SetIgnoreNavigationKeysInAnalogCursor(UObject* WorldContextObject, bool bInIgnoreNavigationKeys) {
}

bool UInputBlueprintHelpers::IsInGamepadOrKeyboardNavigationMode(UObject* WorldContextObject) {
    return false;
}

FKey UInputBlueprintHelpers::GetKeyForCommonAction(const UCommonInputSubsystem* CommonInputSubsystem, const FDataTableRowHandle& InputAction) {
    return FKey{};
}

FKey UInputBlueprintHelpers::GetFirstKeyForEnhancedInputActionByInputType(UObject* WorldContextObject, ECommonInputType InputType, const UInputAction* EnhancedInputAction, const UInputMappingContext* InputMappingContext) {
    return FKey{};
}

FSlateBrush UInputBlueprintHelpers::FindInputBrushFromKey(UObject* WorldContextObject, ECommonInputType InputType, FKey Key) {
    return FSlateBrush{};
}

FSlateBrush UInputBlueprintHelpers::FindInputBrushFromInputAction(UObject* WorldContextObject, FName InputActionName) {
    return FSlateBrush{};
}

FSlateBrush UInputBlueprintHelpers::FindInputBrushFromEnhancedInputActionByInputType(UObject* WorldContextObject, ECommonInputType InputType, const UInputAction* EnhancedInputAction, const UInputMappingContext* InputMappingContext) {
    return FSlateBrush{};
}

FSlateBrush UInputBlueprintHelpers::FindInputBrushFromEnhancedInputAction(UObject* WorldContextObject, const UInputAction* EnhancedInputAction) {
    return FSlateBrush{};
}

FSlateBrush UInputBlueprintHelpers::FindInputBrushFromCommonUIDataTable(UObject* WorldContextObject, UDataTable* CommonInputActionDataTable, FName InputRowName) {
    return FSlateBrush{};
}


