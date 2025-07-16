#pragma once
#include "CoreMinimal.h"
#include "InterchangeMaterialExpressionFactoryNode.h"
#include "InterchangeMaterialFunctionCallExpressionFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialFunctionCallExpressionFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomMaterialFunctionDependency(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMaterialFunctionDependency(FString& AttributeValue) const;
    
};

