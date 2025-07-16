#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayEventMatchingRule.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEventMatchingRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer SourceTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AdditionalContextTags;
    
    SANDFALL_API FGameplayEventMatchingRule();
};

