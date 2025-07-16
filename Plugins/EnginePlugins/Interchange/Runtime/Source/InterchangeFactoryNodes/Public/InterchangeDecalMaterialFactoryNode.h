#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeDecalMaterialFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeDecalMaterialFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomNormalTexturePath(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDiffuseTexturePath(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomNormalTexturePath(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDiffuseTexturePath(FString& AttributeValue) const;
    
};

