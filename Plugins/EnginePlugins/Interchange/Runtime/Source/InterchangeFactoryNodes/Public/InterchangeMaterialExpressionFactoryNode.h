#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeMaterialExpressionFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialExpressionFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomExpressionClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomExpressionClassName(FString& AttributeValue) const;
    
};

