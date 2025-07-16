#pragma once
#include "CoreMinimal.h"
#include "GameplayEventMatchingRootRule.generated.h"

class UGameplayEventMatchingRuleNode;

USTRUCT(BlueprintType)
struct FGameplayEventMatchingRootRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGameplayEventMatchingRuleNode* RootRules;
    
    SANDFALL_API FGameplayEventMatchingRootRule();
};

