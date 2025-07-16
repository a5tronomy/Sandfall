#pragma once
#include "CoreMinimal.h"
#include "GPEInterfacesSoftReferences.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SANDFALL_API FGPEInterfacesSoftReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<AActor>> actorArray;
    
    FGPEInterfacesSoftReferences();
};

