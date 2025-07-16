#pragma once
#include "CoreMinimal.h"
#include "InterchangeShaderNode.h"
#include "InterchangeFunctionCallShaderNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode {
    GENERATED_BODY()
public:
    UInterchangeFunctionCallShaderNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomMaterialFunction(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMaterialFunction(FString& AttributeValue) const;
    
};

