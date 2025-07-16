#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALTLinkReduced.generated.h"

USTRUCT(BlueprintType)
struct FALTLinkReduced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector End;
    
    AUTOLINKERPLUGIN_API FALTLinkReduced();
};

