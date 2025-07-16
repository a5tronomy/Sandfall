#pragma once
#include "CoreMinimal.h"
#include "GPEInterfacesReferences.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SANDFALL_API FGPEInterfacesReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> actorArray;
    
    FGPEInterfacesReferences();
};

