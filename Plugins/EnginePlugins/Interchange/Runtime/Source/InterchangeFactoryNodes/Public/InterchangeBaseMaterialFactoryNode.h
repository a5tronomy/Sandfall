#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeBaseMaterialFactoryNode.generated.h"

UCLASS(Abstract)
class INTERCHANGEFACTORYNODES_API UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeBaseMaterialFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomIsMaterialImportEnabled(const bool& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIsMaterialImportEnabled(bool& AttributeValue) const;
    
};

