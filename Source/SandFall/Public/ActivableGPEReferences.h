#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActivableGPEReferences.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FActivableGPEReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FComponentReference> refArray;
    
    FActivableGPEReferences();
};

