#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeDecalActorFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeDecalActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSortOrder(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalSize(const FVector& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalMaterialPathName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSortOrder(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDecalSize(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDecalMaterialPathName(FString& AttributeValue) const;
    
};

