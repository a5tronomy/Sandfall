#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetingSourceContext.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FTargetingSourceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* InstigatorActor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector SourceLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FName SourceSocketName;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* SourceObject;
    
    TARGETINGSYSTEM_API FTargetingSourceContext();
};

