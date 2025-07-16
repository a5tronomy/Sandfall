#pragma once
#include "CoreMinimal.h"
#include "GameplayEventCooldown.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEventCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SecondsCooldown;
    
    UPROPERTY(EditAnywhere)
    int32 DiscreteCooldown;
    
    SANDFALL_API FGameplayEventCooldown();
};

