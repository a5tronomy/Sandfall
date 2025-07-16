#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeSceneVariantSetsNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneVariantSetsNode();

    UFUNCTION(BlueprintCallable)
    bool RemoveCustomVariantSetUid(const FString& VariantUid);
    
    UFUNCTION(BlueprintPure)
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCustomVariantSetUidCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomVariantSetUid(const FString& VariantUid);
    
};

