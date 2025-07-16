#pragma once
#include "CoreMinimal.h"
#include "CollisionQueryTaskData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCollisionQueryTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> IgnoredActors;
    
    TARGETINGSYSTEM_API FCollisionQueryTaskData();
};

