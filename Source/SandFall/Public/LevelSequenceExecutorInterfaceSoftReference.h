#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceExecutorInterfaceSoftReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SANDFALL_API FLevelSequenceExecutorInterfaceSoftReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> Actor;
    
    FLevelSequenceExecutorInterfaceSoftReference();
};

