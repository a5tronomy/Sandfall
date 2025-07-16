#include "InterchangeShaderPortsAPI.h"

UInterchangeShaderPortsAPI::UInterchangeShaderPortsAPI() {
}

FString UInterchangeShaderPortsAPI::MakeInputValueKey(const FString& InputName) {
    return TEXT("");
}

FString UInterchangeShaderPortsAPI::MakeInputParameterKey(const FString& InputName) {
    return TEXT("");
}

FString UInterchangeShaderPortsAPI::MakeInputName(const FString& InputKey) {
    return TEXT("");
}

FString UInterchangeShaderPortsAPI::MakeInputConnectionKey(const FString& InputName) {
    return TEXT("");
}

bool UInterchangeShaderPortsAPI::IsAParameter(const FString& AttributeKey) {
    return false;
}

bool UInterchangeShaderPortsAPI::IsAnInput(const FString& AttributeKey) {
    return false;
}

bool UInterchangeShaderPortsAPI::HasParameter(const UInterchangeBaseNode* InterchangeNode, const FName& InInputName) {
    return false;
}

bool UInterchangeShaderPortsAPI::HasInput(const UInterchangeBaseNode* InterchangeNode, const FName& InInputName) {
    return false;
}

bool UInterchangeShaderPortsAPI::GetInputConnection(const UInterchangeBaseNode* InterchangeNode, const FString& InputName, FString& OutExpressionUid, FString& OutputName) {
    return false;
}

void UInterchangeShaderPortsAPI::GatherInputs(const UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames) {
}

bool UInterchangeShaderPortsAPI::ConnectOuputToInputByName(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid, const FString& OutputName) {
    return false;
}

bool UInterchangeShaderPortsAPI::ConnectOuputToInputByIndex(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid, int32 OutputIndex) {
    return false;
}

bool UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid) {
    return false;
}


