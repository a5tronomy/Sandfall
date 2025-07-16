#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALTLinkCapsuleMaker.generated.h"

USTRUCT(BlueprintType)
struct FALTLinkCapsuleMaker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> allPoints;
    
    UPROPERTY(BlueprintReadWrite)
    FVector _a;
    
    UPROPERTY(BlueprintReadWrite)
    FVector _b;
    
    AUTOLINKERPLUGIN_API FALTLinkCapsuleMaker();
};

