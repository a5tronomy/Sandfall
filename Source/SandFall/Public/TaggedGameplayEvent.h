#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedGameplayEvent.generated.h"

USTRUCT()
struct FTaggedGameplayEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer EventType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer SourceTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AdditionalContextTags;
    
    SANDFALL_API FTaggedGameplayEvent();
};

