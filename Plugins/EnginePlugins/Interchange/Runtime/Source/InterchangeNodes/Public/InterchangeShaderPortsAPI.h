#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InterchangeShaderPortsAPI.generated.h"

class UInterchangeBaseNode;

UCLASS(BlueprintType)
class INTERCHANGENODES_API UInterchangeShaderPortsAPI : public UObject {
    GENERATED_BODY()
public:
    UInterchangeShaderPortsAPI();

    UFUNCTION(BlueprintCallable)
    static FString MakeInputValueKey(const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeInputParameterKey(const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeInputName(const FString& InputKey);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeInputConnectionKey(const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAParameter(const FString& AttributeKey);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnInput(const FString& AttributeKey);
    
    UFUNCTION(BlueprintCallable)
    static bool HasParameter(const UInterchangeBaseNode* InterchangeNode, const FName& InInputName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasInput(const UInterchangeBaseNode* InterchangeNode, const FName& InInputName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInputConnection(const UInterchangeBaseNode* InterchangeNode, const FString& InputName, FString& OutExpressionUid, FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    static void GatherInputs(const UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectOuputToInputByName(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectOuputToInputByIndex(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid, int32 OutputIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool ConnectDefaultOuputToInput(UInterchangeBaseNode* InterchangeNode, const FString& InputName, const FString& ExpressionUid);
    
};

