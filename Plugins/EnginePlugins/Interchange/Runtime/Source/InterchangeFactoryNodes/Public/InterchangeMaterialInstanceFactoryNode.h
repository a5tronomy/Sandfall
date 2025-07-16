#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialInstanceFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialInstanceFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomParent(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInstanceClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomParent(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomInstanceClassName(FString& AttributeValue) const;
    
};

