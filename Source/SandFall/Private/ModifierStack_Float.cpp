#include "ModifierStack_Float.h"

UModifierStack_Float::UModifierStack_Float() {
    this->StackingType = EModifierStackingType::Invalid;
    this->AutoUpdateOnEdit = true;
    this->CurrentValue = 0.00f;
}

void UModifierStack_Float::UpdateStackValue() {
}

bool UModifierStack_Float::RemoveModifier(FSF_ModifierStackEntryHandle& ModifierHandle) {
    return false;
}

float UModifierStack_Float::GetCurrentValue() const {
    return 0.0f;
}

void UModifierStack_Float::AddModifier(float NewValue, FSF_ModifierStackEntryHandle& OutModifierHandle, const FString& DebugModifierName) {
}


