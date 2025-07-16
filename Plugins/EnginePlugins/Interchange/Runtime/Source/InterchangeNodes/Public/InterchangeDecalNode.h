#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeDecalNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeDecalNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeDecalNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSortOrder(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalSize(const FVector& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalMaterialPathName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSortOrder(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDecalSize(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDecalMaterialPathName(FString& AttributeValue) const;
    
};

