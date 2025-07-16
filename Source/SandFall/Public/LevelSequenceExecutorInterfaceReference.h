#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceExecutorInterfaceReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SANDFALL_API FLevelSequenceExecutorInterfaceReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    FLevelSequenceExecutorInterfaceReference();
};

