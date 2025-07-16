#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialFunctionFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialFunctionFactoryNode();

    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInputConnection(const FString& InputName, FString& ExpressionNodeUid, FString& OutputName) const;
    
};

