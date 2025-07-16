#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioEvent.h"
#include "GameplayEventCooldown.h"
#include "GameplayEventMatchingRule.h"
#include "GameplayEventMatchingRuleNode.generated.h"

class UGameplayEventMatchingRuleNode;

UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class SANDFALL_API UGameplayEventMatchingRuleNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayEventMatchingRule MatchingRule;
    
    UPROPERTY(EditAnywhere)
    FAudioEvent AudioEvent;
    
    UPROPERTY(EditAnywhere)
    FGameplayEventCooldown CooldownOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UGameplayEventMatchingRuleNode*> SubRules;
    
    UGameplayEventMatchingRuleNode();

};

