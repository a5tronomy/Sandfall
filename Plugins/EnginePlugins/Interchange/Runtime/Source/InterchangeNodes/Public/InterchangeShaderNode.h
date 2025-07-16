#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeShaderNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeShaderNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeShaderNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomShaderType(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomShaderType(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddStringInput(const FString& InputName, const FString& AttributeValue, bool bIsAParameter);
    
    UFUNCTION(BlueprintCallable)
    bool AddLinearColorInput(const FString& InputName, const FLinearColor& AttributeValue, bool bIsAParameter);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatInput(const FString& InputName, const float& AttributeValue, bool bIsAParameter);
    
};

