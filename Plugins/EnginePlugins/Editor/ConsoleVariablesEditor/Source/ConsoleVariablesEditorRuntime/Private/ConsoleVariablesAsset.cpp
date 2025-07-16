#include "ConsoleVariablesAsset.h"

UConsoleVariablesAsset::UConsoleVariablesAsset() {
}

void UConsoleVariablesAsset::SetVariableCollectionDescription(const FString& InVariableCollectionDescription) {
}

void UConsoleVariablesAsset::ReplaceSavedCommands(const TArray<FConsoleVariablesEditorAssetSaveData>& Replacement) {
}

bool UConsoleVariablesAsset::RemoveConsoleVariable(const FString& InCommandString) {
    return false;
}

FString UConsoleVariablesAsset::GetVariableCollectionDescription() const {
    return TEXT("");
}

int32 UConsoleVariablesAsset::GetSavedCommandsCount() const {
    return 0;
}

TArray<FString> UConsoleVariablesAsset::GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked) const {
    return TArray<FString>();
}

FString UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked) const {
    return TEXT("");
}

TArray<FConsoleVariablesEditorAssetSaveData> UConsoleVariablesAsset::GetSavedCommands() const {
    return TArray<FConsoleVariablesEditorAssetSaveData>();
}

bool UConsoleVariablesAsset::FindSavedDataByCommandString(const FString& InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, const TEnumAsByte<ESearchCase::Type> SearchCase) const {
    return false;
}

void UConsoleVariablesAsset::ExecuteSavedCommands(UObject* WorldContextObject, bool bOnlyIncludeChecked) const {
}

void UConsoleVariablesAsset::CopyFrom(const UConsoleVariablesAsset* InAssetToCopy) {
}

void UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData(const FConsoleVariablesEditorAssetSaveData& InData) {
}


