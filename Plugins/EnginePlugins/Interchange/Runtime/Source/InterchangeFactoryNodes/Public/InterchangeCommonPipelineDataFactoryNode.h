#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeCommonPipelineDataFactoryNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeCommonPipelineDataFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomGlobalOffsetTransform(const UInterchangeBaseNodeContainer* NodeContainer, const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBakeMeshes(const UInterchangeBaseNodeContainer* NodeContainer, const bool& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBakeMeshes(bool& AttributeValue) const;
    
};

